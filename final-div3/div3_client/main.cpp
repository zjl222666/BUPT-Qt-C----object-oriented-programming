#include "main.h"

mySystem::mySystem(QApplication *myApplication)
{
    /* 程序初始化 */
    this->myApp = myApplication;

    /* 网络初始化 */
    this->mySocket = new QTcpSocket();
    connect(mySocket, SIGNAL(connected()), this, SLOT(TcpConnected()));
    connect(mySocket, SIGNAL(disconnected()),this, SLOT(TcpDisconnected()));
    connect(mySocket, SIGNAL(readyRead()),this, SLOT(recData()));
    mySocket->connectToHost("127.0.0.1", 53);

    /* ui界面初始化 */
    this->loginWindow = new userLogin();
    this->registerWindow = new userRegister();
    this->myMainWindow = new mainWindow();
    this->myUserWindow = new userWindow();
    this->myCommodityWindow = new commodityWindow();
    this->myOrderWindow = new orderWindow();

    /* 信号槽绑定 */
    connect(this->myOrderWindow, SIGNAL(sendPay()), this, SLOT(payOrder()));

    connect(this->myMainWindow, SIGNAL(shopping(QString,QString,double)), this, SLOT(shopping(QString,QString,double)));

    connect(this->myMainWindow, SIGNAL(updataLimit(QString,QString)), this, SLOT(updataLimit(QString,QString)));
    connect(this->myMainWindow, SIGNAL(updataPage(int)), this, SLOT(updataPage(int)));
    connect(this->myMainWindow, SIGNAL(userButton_click()), this, SLOT(userShow()));
    connect(this->loginWindow, SIGNAL(registerButton_click()), this, SLOT(registerShow()));
    connect(this->registerWindow, SIGNAL(handleRegister(QString,QString,bool)), this, SLOT(handleRegister(QString,QString,bool)));
    connect(this->loginWindow, SIGNAL(confirmLogin_click(QString,QString)), this, SLOT(handleLogin(QString,QString)));


    connect(this->myUserWindow, SIGNAL(sendEditCom(QString)), this, SLOT(recEditCom(QString)));
    connect(this->myUserWindow, SIGNAL(updataUserPage(int)), this, SLOT(updataUserPage(int)));
    connect(this->myUserWindow, SIGNAL(changePassword(QString)), this, SLOT(changePassword(QString)));
    connect(this->myUserWindow, SIGNAL(logout()), this, SLOT(logout()));
    connect(this->myUserWindow, SIGNAL(topUp(double)), this, SLOT(topUp(double)));
    connect(this->myUserWindow, SIGNAL(openNewCom()),this, SLOT(openNewCom()));
    connect(this->myUserWindow, SIGNAL(setAllDiscount(int,int,int)), this, SLOT(setAllDiscount(int,int,int)));
    connect(this->myUserWindow, SIGNAL(sendDelCom(int)), this, SLOT(deleteCom(int)));
    connect(this->myUserWindow, SIGNAL(sendWatchCom(QString,QString)), this, SLOT(watchCom(QString,QString)));
    connect(this->myUserWindow, SIGNAL(sendCreateOrder(vector<orderCom>)), this, SLOT(creatOrder(vector<orderCom>)));
    connect(this->myUserWindow, SIGNAL(showUnpaid()), this, SLOT(showUnpaid()));
    connect(this->myCommodityWindow, SIGNAL(pushNewCom(QString,QString,QString,QString,double,int,int)), this, SLOT(pushNewCom(QString,QString,QString,QString,double,int,int)));
    connect(this->myCommodityWindow, SIGNAL(sendUpdataCom(QString,QString,QString,QString,double,int,int)), this, SLOT(sendUpdataCom(QString,QString,QString,QString,double,int,int)));

    /* 当前信息初始化 */
    this->nowUser = NULL;

    /* 数据库初始化 */
    this->commodityData_init.clear();

    /* 界面展示 */
    this->myMainWindow->show();

    /* 筛选信息初始化 */
    this->comName = "";
    this->comMerchant = "";
    this->MainPage = 1;
    this->userPage = 1;

    /* 购物车信息初始化 */
    this->nowTrolley = NULL;
    this->nowOrder = NULL;

}

/* 网络相关函数 */
void mySystem::TcpConnected() {
    QMessageBox::information(NULL, "提示！", "成功连接上服务器！");
}

void mySystem::TcpDisconnected() {
    QMessageBox::information(NULL, "提示！", "啊哦，与服务器断开连接，正在尝试重连！");
}

void mySystem::recData() {
    while(1) {
        packet tmpPacket(0, NULL, 0);
        this->mySocket->read((char*)&tmpPacket, sizeof(packet));
        if(tmpPacket.gettype() == 0) break;
        qDebug() <<"收！" <<tmpPacket.gettype();
        (this->*recPacket[tmpPacket.gettype()-1])(tmpPacket.getData());
    }


}

void mySystem::sendPacket(int type, char *data, int size) {
    qDebug() << "发！"<<type;
    packet tmp(type, data, size);
    this->mySocket->write((char*)&tmp, sizeof(packet));
    this->mySocket->waitForBytesWritten();
}

void mySystem::recPacket1(char *data) {
    if (this->nowUser != NULL) {
        QMessageBox::critical(NULL,"错误！", "用户未退出，发生冲突！");
        return;
    }
    customer tmp;
    memcpy((char*)&tmp, data, sizeof(customer));
    this->nowUser = new customer(tmp);
    askforTrolley tmp1;
    strcpy_s(tmp1.name, this->nowUser->getName());
    this->nowTrolley = new shoppingTrolley();
    this->sendPacket(9, (char*)&tmp, sizeof(askforTrolley));
    this->myMainWindow->loginUI(QString(nowUser->getName()));
    this->ComUpdata();
    QMessageBox::information(NULL, "登录成功", "欢迎登录，开始愉快的购物叭！");
    this->loginWindow->close();
}

void mySystem::recPacket2(char *data) {
    if (this->nowUser != NULL) {
        QMessageBox::critical(NULL,"错误！", "用户未退出，发生冲突！");
        return;
    }
    merchants tmp;
    memcpy((char*)&tmp, data, sizeof(merchants));
    this->nowUser = new merchants(tmp);
    askforTrolley tmp1;
    strcpy_s(tmp1.name, this->nowUser->getName());
    this->nowTrolley = new shoppingTrolley();
    this->sendPacket(9, (char*)&tmp1, sizeof(askforTrolley));
    this->myMainWindow->loginUI(QString(nowUser->getName()));
    this->ComUpdata();
    QMessageBox::information(NULL, "登录成功", "欢迎登录，开始愉快的购物叭！");
    this->loginWindow->close();
}

void mySystem::recPacket3(char *data) {
    customer tmp;
    memcpy((char*)&tmp, data, sizeof(customer));
    if (this->nowUser == NULL) return;
    if (this->nowUser->cmpUserName(tmp.getName())) {
        this->nowUser->updataUserInfo(&tmp);
        this->myUserWindow->cleanWindow(this->nowUser);
        QMessageBox::information(NULL, "提示", "您的用户信息已更新！");
    }
}

void mySystem::recPacket4(char *data) {
    merchants tmp;
    memcpy((char*)&tmp, data, sizeof(merchants));
    if (this->nowUser == NULL) return;
    if (this->nowUser->cmpUserName(tmp.getName())) {
        this->nowUser->updataUserInfo(&tmp);
        this->myUserWindow->cleanWindow(this->nowUser);
        QMessageBox::information(NULL, "提示", "您的用户信息已更新！");
    }
}

void mySystem::recPacket5(char*) {
    QMessageBox::information(NULL, "提示！", "账户名或密码出错！请重新输入");
    this->loginWindow->cleanWindow();
}

void mySystem::recPacket6(char *) {
    QMessageBox::information(NULL, "注册失败!", "用户已存在！");
}

void mySystem::recPacket7(char *data) {
    commodityStruct newCom;
    memcpy((char*)&newCom, data, sizeof(commodityStruct));
    for (int i = 0; i < (int)this->commodityData_init.size(); i++) {
        if (!strcmp(newCom.name,this->commodityData_init[i].name) && !strcmp(newCom.owner,this->commodityData_init[i].owner)) {
            this->commodityData_init[i] = newCom;
            this->ComUpdata();
            return;
        }
    }
    this->commodityData_init.push_back(newCom);
    QMessageBox::information(NULL, "提示！", "商品信息发生变化拉！");
    this->ComUpdata();
}

void mySystem::recPacket8(char *data) {
    shoppingTrolley newTrolley;
    memcpy((char*)&newTrolley, data, sizeof(shoppingTrolley));
    *this->nowTrolley = newTrolley;
    this->myUserWindow->updataTrolley(*this->nowTrolley);
}

void mySystem::recPacket9(char *) {
    QMessageBox::information(NULL, "错误！", "该商品已经存在咯，重新添加一个商品吧");
}

void mySystem::recPacket10(char *) {
    QMessageBox::information(NULL, "注册成功!", "快去登录新注册的账号开始购物叭");
    this->registerWindow->close();
    this->loginWindow->show();
}

void mySystem::recPacket11(char *) {
    QMessageBox::information(NULL, "提示", "添加成功啦！快去我的商品库中看看吧");
    this->myCommodityWindow->close();
}

mySystem::~mySystem()
{
    this->releaseOrder();
    if(this->nowTrolley != NULL) {
        this->sendPacket(10, (char*)this->nowTrolley, sizeof(shoppingTrolley));
        delete this->nowTrolley;
        this->nowTrolley = NULL;
    }
    delete this->loginWindow;
    delete this->registerWindow;
    delete this->myMainWindow;
}

void mySystem::quitApp() {
     QMessageBox::warning(NULL, "warning", "程序加载异常，即将退出", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
     this->myApp->quit();
}

void mySystem::shopping(QString comName, QString merchantsName, double) {
    if (this->nowTrolley == NULL) {
        QMessageBox::information(NULL, "提醒" , "你得先登录才能购买商品哦！");
        return;
    }
    int flag = this->nowTrolley->addCom(comName, merchantsName);
    if ( flag == 1) {
        this->myUserWindow->updataTrolley(*this->nowTrolley);
        QMessageBox::information(NULL, "提醒", "加入购物车成功！");
    }else if (flag == 0) QMessageBox::information(NULL, "提醒", "你的购物车已经满了哦！快去清理一下吧~");
    else QMessageBox::information(NULL, "提醒", "这件商品已经在你的购物车里拉！");
    return;
}

commodityStruct mySystem::findCom(QString comName, QString merchantsName) {
    for (auto x :this->commodityData_init) {
        if (QString(x.name) == comName && QString(x.owner) == merchantsName) {
            return x;
        }
    }
    return 0;
}

void mySystem::watchCom(QString name, QString merchant) {
    this->myCommodityWindow->setMode(2);
    this->myCommodityWindow->updataComInfo(this->findCom(name, merchant));
    this->myCommodityWindow->show();
}

void mySystem::creatOrder(vector<orderCom> v) {
    if (this->nowOrder != NULL) {
        QMessageBox::information(NULL, "提示！", "您还有未支付的订单哦，不支付的话无法生成新订单");
        return;
    }
    if(v.empty()){
        QMessageBox::information(NULL,"提示！", "无法生成空订单哦！请至少勾选一个商品");
        return;
    }
    for (int i = 0; i < (int)v.size(); i++) {
        commodityStruct tmp = this->findCom(v[i].name, v[i].owner);
        if (tmp.leftNum < v[i].num) {
            QMessageBox::information(NULL, "提示！" ,v[i].name + "的库存量不足啦！快提醒商家补货！");
            return;
        }
        v[i].price = tmp.price * tmp.discount / 100;
    }
    for (int i = 0; i < (int)v.size(); i++) {
        this->nowTrolley->deleteCom(v[i].name, v[i].owner);
        commodityStruct tmp = this->findCom(v[i].name, v[i].owner);
        tmp.leftNum -= v[i].num;
        this->sendPacket(8, (char*)&tmp, sizeof(commodityStruct));
    }
    this->nowOrder = new order (v);
    this->myOrderWindow->updataOrderWindow(*this->nowOrder);
    this->myOrderWindow->show();
    QMessageBox::information(NULL, "提示！", "生成订单成功,快去支付叭！");
    this->myUserWindow->setUnpaid(1);
}

void mySystem::showUnpaid() {
    if (this->nowOrder != NULL) {
        this->myOrderWindow->show();
    }
}
void mySystem::payOrder() {
    if (this->nowUser->getMoney() - this->nowOrder->getMoney() < 1e-3) {
        QMessageBox::information(NULL, "提示！", "你的账户余额不太够的样子,快去充值了再来支付叭！");
        return;
    }
    this->nowUser->moneyUpdata(-this->nowOrder->getMoney());
    if (this->nowUser->getUserType()) {
        merchants tmp = *(merchants*)this->nowUser;
        this->sendPacket(2, (char*)&tmp, sizeof(merchants));
    } else {
        customer tmp = *(customer*)this->nowUser;
        this->sendPacket(3, (char*)&tmp, sizeof(customer));
    }
    for  (int i = 0; i < (int)this->nowOrder->getAllNum(); i++) {
        userMoneyPacket tmpP;
        strcpy_s(tmpP.name, this->nowOrder->getComMerchant(i).toStdString().c_str());
        tmpP.add = this->nowOrder->getComPrice(i)*this->nowOrder->getComNum(i);
        this->sendPacket(6, (char*)&tmpP, sizeof(userMoneyPacket));
    }
    QMessageBox::information(NULL, "提示！", "购买成功拉！商家已经赚到了你的小钱钱");
    delete this->nowOrder;
    this->nowOrder = NULL;
    this->myOrderWindow->close();
    this->myUserWindow->setUnpaid(0);
}

void mySystem::releaseOrder() {
    if (this->nowOrder != NULL) {
        QMessageBox::information(NULL, "提示！", "你未支付的订单被清理掉了哦,物品已经返回购物车中");
        this->myUserWindow->setUnpaid(0);
        for (int i = 0; i < (int)this->nowOrder->getAllNum(); i++) {
            this->nowTrolley->addCom(this->nowOrder->getComName(i), this->nowOrder->getComMerchant(i));
            commodityStruct tmp = this->findCom(this->nowOrder->getComName(i), this->nowOrder->getComMerchant(i));
            tmp.leftNum += this->nowOrder->getComNum(i);
            this->sendPacket(8, (char*)&tmp, sizeof(commodityStruct));
        }
        delete this->nowOrder;
        this->nowOrder = NULL;
    }
}
void mySystem::deleteCom(int x) {
    if (this->nowTrolley == NULL) {
        QMessageBox::warning(NULL, "提示", "出了一点点小问题，请重新尝试");
        return;
    }
    this->nowTrolley->deleteCom(x);
    this->myUserWindow->updataTrolley(*this->nowTrolley);
    QMessageBox::information(NULL, "提示", "你成功删除了一件商品！");
}

void mySystem::setAllDiscount(int clothDis, int bookDis, int foodDis) {
    for (int i = 0; i < (int)this->commodityData_init.size(); i++) {
        if (QString(this->commodityData_init[i].owner) == QString(this->nowUser->getName())) {
            if (QString(this->commodityData_init[i].type)=="图书") this->commodityData_init[i].discount = bookDis;
            else if (QString(this->commodityData_init[i].type)=="食品") this->commodityData_init[i].discount = foodDis;
            else this->commodityData_init[i].discount = clothDis;
            this->sendPacket(8, (char*)&this->commodityData_init[i], sizeof(commodityStruct));
        }
    }
    QMessageBox::information(NULL, "提示" ,"设置成功！");
}

void mySystem::recEditCom(QString tmp) {
    for (auto x : this->commodityData_User) {
        if (QString(x.name) == tmp) {
            this->myCommodityWindow->setMode(1);
            this->myCommodityWindow->updataComInfo(x);
            this->myCommodityWindow->show();
            return;
        }
    }
    QMessageBox::warning(NULL, "警告!", "好像出了一点小问题，请再试试？");
}
void mySystem::userShow() {
    if(this->nowUser == NULL){
        this->loginWindow->show();
        this->loginWindow->cleanWindow();
    }
    else {
        this->myUserWindow->show();
        this->myUserWindow->cleanWindow(this->nowUser);
    }
}

void mySystem::registerShow() {
    this->loginWindow->close();
    this->registerWindow->show();
}

void mySystem::openNewCom() {
    this->myCommodityWindow->setMode(0);
    this->myCommodityWindow->cleanAddCom();
    this->myCommodityWindow->show();
}

void mySystem::handleRegister(QString userName, QString password, bool userType) {
    if(userType) {
         merchants newUser(userName.toStdString().c_str(),  password.toStdString().c_str());
         this->sendPacket(4, (char*)&newUser, sizeof(merchants));
    }
    else {
        customer newUser(userName.toStdString().c_str(),  password.toStdString().c_str());
        this->sendPacket(5, (char*)&newUser, sizeof(customer));
    }
}


void mySystem::handleLogin(QString userName, QString password) {
    loginPacket tmp;
    strcpy_s(tmp.name, userName.toStdString().c_str());
    strcpy_s(tmp.passWord, password.toStdString().c_str());
    this->sendPacket(1, (char*)&tmp, sizeof(loginPacket));
}



void mySystem::changePassword(QString newPassword) {
    this->nowUser->changePassword(newPassword.toStdString().c_str());
    if (this->nowUser->getUserType()) {
        merchants tmp = *(merchants*)this->nowUser;
        this->sendPacket(2, (char*)&tmp, sizeof(merchants));
    } else {
        customer tmp = *(customer*)this->nowUser;
        this->sendPacket(3, (char*)&tmp, sizeof(customer));
    }
}

void mySystem::logout() {
    delete this->nowUser;
    this->nowUser = NULL;
    this->releaseOrder();
    this->myUserWindow->updataTrolley(*this->nowTrolley);
    this->sendPacket(10, (char*)this->nowTrolley, sizeof(shoppingTrolley));
    delete this->nowTrolley;
    this->nowTrolley = NULL;
    this->myMainWindow->logoutUI();
    this->myUserWindow->close();
}

void mySystem::topUp(double tmoney) {

    this->nowUser->moneyUpdata(tmoney);
    if (this->nowUser->getUserType()) {
        merchants tmp = *(merchants*)this->nowUser;
        this->sendPacket(2, (char*)&tmp, sizeof(merchants));
    } else {
        customer tmp = *(customer*)this->nowUser;
        this->sendPacket(3, (char*)&tmp, sizeof(customer));
    }
}

void mySystem::pushNewCom(QString name, QString description, QString type, QString extra, double price, int num, int discount) {
    commodityStruct tmp(price, num,  type.toStdString().c_str(), name.toStdString().c_str(), description.toStdString().c_str(), this->nowUser->getName(), extra.toStdString().c_str(), discount);
    this->sendPacket(7, (char*)&tmp, sizeof(commodityStruct));
}

void mySystem::sendUpdataCom(QString name, QString description, QString type, QString extra, double price, int num, int discount) {
    commodityStruct tmp(price, num,  type.toStdString().c_str(), name.toStdString().c_str(), description.toStdString().c_str(), this->nowUser->getName(), extra.toStdString().c_str(), discount);
    this->sendPacket(8, (char*)&tmp, sizeof(commodityStruct));
}


void mySystem::ComUpdata() {
    this->commodityData_Main.clear();
    this->commodityData_User.clear();
    for (auto x: this->commodityData_init) {
        if (QString(x.owner).contains(this->comMerchant) && QString(x.name).contains(this->comName)) {
            this->commodityData_Main.push_back(x);
        }
        if (this->nowUser != NULL && QString(x.owner) == QString(this->nowUser->getName())) {
            this->commodityData_User.push_back(x);
        }
    }
    this->MainPage = this->userPage = 1;
    this->ComUpdataView();
}

void mySystem::ComUpdataView() {
    this->myMainWindow->setPage((this->commodityData_Main.size()-1)/7+1, this->MainPage);
    vector<commodityStruct> tmp;
    tmp.clear();
    for (int i = (this->MainPage-1)*7; i < this->MainPage*7 && i < (int)this->commodityData_Main.size() ;i++) {
        tmp.push_back(this->commodityData_Main[i]);
    }
    this->myMainWindow->ComShowUpdata(tmp);

    this->myUserWindow->setPage((this->commodityData_User.size()-1)/7+1, this->userPage);
    tmp.clear();
    for (int i = (this->userPage-1)*7; i < this->userPage*7 && i < (int)this->commodityData_User.size() ;i++) {
        tmp.push_back(this->commodityData_User[i]);
    }
    this->myUserWindow->ComShowUpdata(tmp);
}

void mySystem::updataLimit(QString name, QString owner) {
    this->comName = name;
    this->comMerchant = owner;
    this->myMainWindow->cleanSearch();
    QMessageBox::information(NULL, "提示！", "已将内容更新为你筛选的内容啦！");
    this->ComUpdata();
}
void mySystem::updataPage(int add) {

    this->MainPage += add;
    if(this->MainPage < 1) {
        this->MainPage = 1;
        QMessageBox::warning(NULL, "提示", "已经是第一页啦！");
    }
    if(this->MainPage * 7 - (int)this->commodityData_Main.size() >= 7) {
        this->MainPage -- ;
        QMessageBox::warning(NULL, "提示", "已经是最后一页啦！");
    }
    this->ComUpdataView();
}

void mySystem::updataUserPage(int add) {
    this->userPage += add;
    if(this->userPage < 1) {
        this->userPage = 1;
        QMessageBox::warning(NULL, "提示", "已经是第一页啦！");
    }
    if(this->userPage * 7 - (int)this->commodityData_User.size() >= 7) {
        this->userPage -- ;
        QMessageBox::warning(NULL, "提示", "已经是最后一页啦！");
    }
    this->ComUpdataView();
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mySystem localSystem1(&a);
    return a.exec();
}
