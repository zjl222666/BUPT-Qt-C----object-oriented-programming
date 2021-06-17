#ifndef MYSERVER_H
#define MYSERVER_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>
#include "myDatabase.h"
#include "basicClass.h"
#include  "qendian.h"
#define myPort 53

QT_BEGIN_NAMESPACE
namespace Ui { class myServer; }
QT_END_NAMESPACE

class myServer : public QMainWindow
{
    Q_OBJECT

public:
    myServer(QWidget *parent = nullptr);
    ~myServer();
private slots:
    void recConnection(); /* 收到连接请求 */
    void socket_Read_Data(); /* 收到数据包 */
    void socket_Disconnected(); /* 收到断开连接请求 */

    void sendUserinfo(user *userInfo); /* 发送用户更新信息， 广播 */
    void sendCominfo(commodityStruct newCom); /* 发送商品更新信息，广播*/


    void on_clear_clicked(); /*ui界面要求清空输出控制台信息 */

private:
    /* 数据库读写 */
    userDatabase *myUserDatabase; /* 用户数据库 */
    commodityDatabase *myCommodityDatabase; /* 商品数据库 */
    shoppingTrolleyDatabase *myshoppingTrolleyDatabase; /*购物车数据库 */

    /* Socket 网络通信 */
    QTcpServer* myTCPServer; /* 服务器端 */
    QTcpSocket* socket; /* 临时保存客户端套接字 */
    QList<QTcpSocket*> TcpSockets_List;  /* 保存多客户端 */

    /* ui显示 */
    void print(QString);
    Ui::myServer *ui;

    /* 接收数据包操作 */

    void recPacket1(char*, QTcpSocket*); /* 接收类型一的数据包并做相应操作 ，以下类推 */
    void recPacket2(char*, QTcpSocket*);
    void recPacket3(char*, QTcpSocket*);
    void recPacket4(char*, QTcpSocket*);
    void recPacket5(char*, QTcpSocket*);
    void recPacket6(char*, QTcpSocket*);
    void recPacket7(char*, QTcpSocket*);
    void recPacket8(char*, QTcpSocket*);
    void recPacket9(char*, QTcpSocket*);
    void recPacket10(char*, QTcpSocket*);

    typedef void(myServer::*recP)(char *, QTcpSocket*) ;
    recP recPacket[10] = {&myServer::recPacket1, &myServer::recPacket2, &myServer::recPacket3, &myServer::recPacket4, &myServer::recPacket5, &myServer::recPacket6, &myServer::recPacket7, &myServer::recPacket8, &myServer::recPacket9, &myServer::recPacket10 };
    /* 发送数据包操作 */

    void sendPacket_toAll(int type, char* data, int dataSize);
    void sendPacket_toSomeOne(int type, char* data, int dataSize, QTcpSocket* nowSocket);

};
#endif // MYSERVER_H
