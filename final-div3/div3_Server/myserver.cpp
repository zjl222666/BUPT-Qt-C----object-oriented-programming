#include "myserver.h"
#include "ui_myserver.h"

myServer::myServer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myServer)
{
    ui->setupUi(this);

    /* 数据库初始化 */
    this->myCommodityDatabase = new commodityDatabase();
    this->myUserDatabase = new userDatabase();
    this->myshoppingTrolleyDatabase = new shoppingTrolleyDatabase();

    /* socket初始化 */
    this->myTCPServer = new QTcpServer;
    this->myTCPServer->listen(QHostAddress::Any, myPort);
    if (connect(this->myTCPServer,SIGNAL(newConnection()),this,SLOT(recConnection())))   this->print("成功在端口"+QString::number(myPort)+"上进行监听");
    else this->print("网络服务初始化失败！");


    /* 与数据库进行信号槽的连接 */
    connect(this->myUserDatabase, SIGNAL(sendUserInfo(user*)), this, SLOT(sendUserinfo(user*)));
    connect(this->myCommodityDatabase, SIGNAL(sendComInfo(commodityStruct)), this, SLOT(sendCominfo(commodityStruct)));
}

myServer::~myServer()
{
    delete ui;
    delete this->myCommodityDatabase;
    delete this->myUserDatabase;
    delete this->myshoppingTrolleyDatabase;
}


void myServer::print(QString text) {
    this->ui->consolo->insertPlainText(text+"\n");
}

void myServer::recConnection() {
    socket = myTCPServer->nextPendingConnection();

    TcpSockets_List.append(socket);
    this->print("NewClient:" + socket->peerAddress().toString());

    QObject::connect(socket, SIGNAL(readyRead()), this, SLOT(socket_Read_Data()));
    QObject::connect(socket, SIGNAL(disconnected()), this, SLOT(socket_Disconnected()));

    this->myCommodityDatabase->dataInit();
}

void myServer::socket_Read_Data() {
       //利用for循环循环列表中的每一个连接进来的客户端，判断是哪一个客户端发的数据
    for(int i = 0; i < TcpSockets_List.count(); i++) {
           socket = TcpSockets_List.at(i);
           while (1){
            packet buffer(0, NULL, 0);
            socket->read((char*)&buffer, sizeof(packet));
            if (buffer.gettype()!=0) {
                qDebug() << "接包!" << buffer.gettype();
                this->print("接收到数据包！:" + socket->peerAddress().toString());
                this->print("类型为"+QString::number(buffer.gettype()));
                (this->*recPacket[buffer.gettype()-1])(buffer.getData(), socket);
            }
            else break;
           }
    }
}

void myServer::socket_Disconnected(){

}

void myServer::on_clear_clicked()
{
    this->ui->consolo->clear();
}

void myServer::sendUserinfo(user* tmp) {
    if(tmp->getUserType()) {
        this->sendPacket_toAll(4, (char*)tmp, sizeof(merchants));
    } else {
        this->sendPacket_toAll(3, (char*)tmp, sizeof(customer));
    }
}

void myServer::sendCominfo(commodityStruct tmp) {
    this->sendPacket_toAll(7, (char*)&tmp, sizeof(commodityStruct));
}

/* 发数据包部分 */

void myServer::sendPacket_toAll(int type, char* data, int dataSize) {
    this->print("广播！数据包类型为"+QString::number(type));
    packet nowPacket(type, data, dataSize);
    for(int i = 0; i < TcpSockets_List.count(); i++) {
        socket = TcpSockets_List.at(i);
        socket->write((char*)&nowPacket, sizeof(packet));
        socket->waitForBytesWritten();
    }

}

void myServer::sendPacket_toSomeOne(int type, char* data, int dataSize, QTcpSocket* nowSocket) {
    qDebug() << "发包 ！" << type << dataSize;
    packet nowPacket(type, data, dataSize);
    this->print("单发！数据包类型为"+QString::number(type)+"，地址为"+socket->peerAddress().toString());

    nowSocket->write((char*)&nowPacket, sizeof(packet));
    nowSocket->waitForBytesWritten();
}
/* 收数据包部分 */

void myServer::recPacket1(char *data, QTcpSocket* nowSocket) {
    loginPacket tmp;
    memcpy((char*)&tmp, data, sizeof(loginPacket));
    merchants tmpMerchants;
    customer tmpCustomer;
    int flag1 = this->myUserDatabase->loginExamMerchants(tmp.name, tmp.passWord, &tmpMerchants);
    int flag2 = this->myUserDatabase->loginExamCustomer(tmp.name, tmp.passWord, &tmpCustomer);
    if (!flag1 && !flag2) {
        this->sendPacket_toSomeOne(5, (char*)NULL, 0, nowSocket);
    } else {
        if(flag1) this->sendPacket_toSomeOne(2, (char*)&tmpMerchants,sizeof(merchants), nowSocket);
        else this->sendPacket_toSomeOne(1, (char*)&tmpCustomer, sizeof(customer), nowSocket);
    }
}

void myServer::recPacket2(char *data, QTcpSocket *) {
    merchants tmp;
    memcpy((char*)&tmp, data, sizeof(merchants));
    user *sb = new merchants (tmp);
    this->myUserDatabase->updataUserInfo(sb);
    delete  sb;
}

void myServer::recPacket3(char *data, QTcpSocket *) {
    customer tmp;
    memcpy((char*)&tmp, data, sizeof(customer));
    user *sb = new customer (tmp);
    this->myUserDatabase->updataUserInfo(sb);
    delete sb;
}

void myServer::recPacket4(char *data, QTcpSocket *nowSocket) {
    merchants tmp;
    memcpy((char*)&tmp, data, sizeof(merchants));
    user *sb = new merchants (tmp);
    if (!this->myUserDatabase->pushNewUser(sb)) {
        this->sendPacket_toSomeOne(6, (char*)NULL, 0, nowSocket);
    } else this->sendPacket_toSomeOne(10, (char*)NULL, 0, nowSocket);
    delete sb;
}

void myServer::recPacket5(char *data, QTcpSocket *nowSocket) {
    customer tmp;
    memcpy((char*)&tmp, data, sizeof(customer));
    user *sb = new customer(tmp);
    if (!this->myUserDatabase->pushNewUser(sb)) {
        this->sendPacket_toSomeOne(6, (char*)NULL, 0, nowSocket);
    } else this->sendPacket_toSomeOne(10, (char*)NULL, 0, nowSocket);
    delete  sb;
}

void myServer::recPacket6(char *data, QTcpSocket *) {
    userMoneyPacket tmp;
    memcpy((char*)&tmp, data, sizeof(userMoneyPacket));
    this->myUserDatabase->userMoneyAdd(tmp.name, tmp.add);
}

void myServer::recPacket7(char *data, QTcpSocket *nowSocket) {
    commodityStruct tmp;
    memcpy((char*)&tmp, data, sizeof(commodityStruct));
    if(!this->myCommodityDatabase->pushNewCom(tmp)) {
        this->sendPacket_toSomeOne(9, NULL, 0, nowSocket);
    }
}

void myServer::recPacket8(char *data, QTcpSocket *) {
    commodityStruct tmp;
    memcpy((char*)&tmp, data, sizeof(commodityStruct));
    this->myCommodityDatabase->updataComData(tmp);
}

void myServer::recPacket9(char *data, QTcpSocket *nowSocket) {
    askforTrolley tmp;
    memcpy((char*)&tmp, data, sizeof(askforTrolley));
    shoppingTrolley tmpTrolley;
    this->myshoppingTrolleyDatabase->getTrolley(tmp.name, &tmpTrolley);
    this->sendPacket_toSomeOne(8, (char*)&tmpTrolley, sizeof(shoppingTrolley), nowSocket);
}

void myServer::recPacket10(char *data, QTcpSocket *) {
    shoppingTrolley tmp;
    memcpy((char*)&tmp, data, sizeof(shoppingTrolley));
    this->myshoppingTrolleyDatabase->updataDatabase(tmp);
}
