#ifndef MYDATABASE_H
#define MYDATABASE_H
#include "basicClass.h"
#include "qmessagebox.h"
#include <map>
#include <iostream>
#include <QObject>
#include <cstdio>
#include <QDebug>
#include <QFile>


/*用户数据库 */
class userDatabase:public QObject {
    Q_OBJECT
public:
    userDatabase();
    ~userDatabase();
    bool pushNewUser(user *newUser);
    bool loginExamMerchants(const char *userName,const char *password, merchants *userInfo);
    bool loginExamCustomer(const char *userName,const char *password, customer *userInfo);
    bool updataUserInfo(user *nowUser); /* 更新数据库中的用户信息 */
    bool userMoneyAdd(const char *userName, const double add);
signals:
    void sendUserInfo(user *userInfo); /* 用户数据发生更新时向前端发送更新信息 */
private:
    QFile merchantFile;
    QFile customerFile;

    int getCustomerID(const char*); /* 根据提供的用户名查询普通用户账号 */
    int getMerchantID(const char*); /* 根据提供的用户名查询商户账号 */

};


/* 商品数据库 */

class commodityDatabase:public QObject {
     Q_OBJECT
public:
    commodityDatabase();
    ~commodityDatabase();
    bool pushNewCom(commodityStruct newCom); /* 用于向数据库中添加新的商品 */
    bool updataComData(commodityStruct newCom); /* 用于更改数据库中的商品信息 */
    void dataInit();
signals:
    void sendComInfo(commodityStruct newCom); /* 数据库向前端发送更改数据的请求信号 */
private:
    QFile Database;
    int getComID(char*, char*); /* 根据提供的商品名称和商家名称查询商品信息 */
};


 /* 购物车数据库 */
class shoppingTrolleyDatabase: public QObject {
    Q_OBJECT
public:
    shoppingTrolleyDatabase();
    ~shoppingTrolleyDatabase();
    void updataDatabase(shoppingTrolley newTrolley);
    void getTrolley(char *userName, shoppingTrolley *tmpTrolley);
private:


    QFile Database;
};


#endif // MYDATABASE_H
