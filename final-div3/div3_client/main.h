#ifndef MAIN_H
#define MAIN_H
#include <QMainWindow>
#include <QApplication>
#include <QTcpSocket>
#include <QObject>
#include  "qendian.h"
#include "view.h"
#include "basicClass.h"

class mySystem: public QObject {
    Q_OBJECT
public:

    mySystem(QApplication *myApplication);
    ~mySystem();

private slots:
    void quitApp();  /* 程序异常时退出函数 */

    void userShow(); /* 用户点击登录/用户中心按钮时，对应弹出窗口 */
    void registerShow(); /* 用户点击注册按钮，对应弹出窗口 */
    void openNewCom(); /* 用户点击添加商品按钮，对应弹出窗口 */
    void recEditCom(QString); /* 用户点击商品编辑按钮，对应弹出窗口 */
    void updataLimit(QString, QString); /* 根据用户的请求相应的更新筛选条件 */
    void updataPage(int); /* 根据用户的请求主页面更新显示页数 */
    void updataUserPage(int); /* 根据用户的请求商户页面更新显示页数 */

    void handleRegister(QString, QString, bool); /* ui向数据库提交注册申请 */
    void handleLogin(QString userName, QString password); /* ui向数据库提交登录申请 */
    void changePassword(QString newPassword); /* ui向数据库提交修改密码申请 */
    void topUp(double tmoney);  /* ui向数据库提交充值申请 */
    void pushNewCom(QString name, QString description, QString type, QString extra, double price, int num, int discount); /* ui向数据库递交添加商品申请 */
    void sendUpdataCom(QString name, QString description, QString type, QString extra, double price, int num, int discount); /* ui向数据库提交修改商品信息修改申请 */

    void logout(); /* 当前用户退出登录 */
    void setAllDiscount(int,int,int); /* 商家统一设置商品折扣 */
    void shopping(QString,QString,double); /* ui提交了购物申请 */

    void watchCom(QString, QString); /* 接收ui发送查看商品信息请求 */
    void deleteCom(int); /* 接收ui发送删除购物车中某商品的请求 */
    void creatOrder(vector<orderCom>); /* 接收ui发送生成订单的请求 */
    void payOrder(); /* 接收ui发送的支付订单的请求 */
    void showUnpaid(); /* 接收ui查看未支付订单的请求 */


    /* 网络相关槽 */
    void TcpConnected();
    void TcpDisconnected();
    void recData();
private:


    void ComUpdata();  /* 商品显示信息发生更改 */
    void ComUpdataView(); /* 界面更新 */
    void releaseOrder(); /* 释放当前的订单信息 */
    commodityStruct findCom(QString, QString); /* 根据提供的商品名称和商家姓名在数据库中检索商品信息 */

    /* app */

    QApplication *myApp;

    /* 视图 */
    userLogin *loginWindow; /* 用户登录窗口 */
    userRegister *registerWindow; /* 用户注册窗口 */
    mainWindow *myMainWindow; /*主程序界面 */
    userWindow *myUserWindow; /* 用户界面 */
    commodityWindow *myCommodityWindow; /*  商品详情页 */
    orderWindow *myOrderWindow; /* 订单页面 */

    /* 网络通信 */
    QTcpSocket *mySocket;

    /* 当前用户信息 */
    user *nowUser;

    /* 存放数据库递交的筛选前的商品信息 */

    vector<commodityStruct> commodityData_init;

    /* 存放数据库递交的筛选后的商品信息 */

    vector<commodityStruct> commodityData_Main;
    vector<commodityStruct> commodityData_User;

    /* 存放当前的筛选条件 */
    QString comName;
    QString comMerchant;

    /* 存放当前用户的购物车信息 */
    shoppingTrolley *nowTrolley;

    /* 存放当前的订单信息 */
    order *nowOrder;

    int MainPage;
    int userPage;


    /* 网络发包 */
    void sendPacket(int type, char* data, int size);

    /* 网络收包 */
    void recPacket1(char* data);
    void recPacket2(char* data);
    void recPacket3(char* data);
    void recPacket4(char* data);
    void recPacket5(char* data);
    void recPacket6(char* data);
    void recPacket7(char* data);
    void recPacket8(char* data);
    void recPacket9(char* data);
    void recPacket10(char* data);
    void recPacket11(char* data);
    typedef void(mySystem::*recP)(char *) ;
    recP recPacket[11]={&mySystem::recPacket1,&mySystem::recPacket2,&mySystem::recPacket3,&mySystem::recPacket4,&mySystem::recPacket5,&mySystem::recPacket6,&mySystem::recPacket7,&mySystem::recPacket8,&mySystem::recPacket9,&mySystem::recPacket10, &mySystem::recPacket11};
};

#endif // MAIN_H
