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

class userDatabase:public QObject {
    Q_OBJECT
public:
    userDatabase();
    ~userDatabase();
    bool pushNewUser(user *newUser);
    bool loginExam(const char *userName,const char *password);
    bool updataUserInfo(user *nowUser); /* 更新数据库中的用户信息 */
    bool userMoneyAdd(const char *userName, const double add);
signals:
    void sendLoginInfo(user *userInfo); /* 登录时发送的用户信息 */
    void sendUserInfo(user *userInfo); /* 用户数据发生更新时向前端发送更新信息 */
private:
    QFile merchantFile;
    QFile customerFile;

    int getCustomerID(const char*); /* 根据提供的用户名查询普通用户账号 */
    int getMerchantID(const char*); /* 根据提供的用户名查询商户账号 */

};

class commodityDatabase:public QObject {
     Q_OBJECT
public:
    commodityDatabase();
    ~commodityDatabase();
    bool pushNewCom(commodityStruct newCom); /* 用于向数据库中添加新的商品 */
    bool updataComData(commodityStruct newCom); /* 用于更改数据库中的商品信息 */
    void dataInit();
signals:
    void updataComInfo(commodityStruct newCom); /* 数据库向前端发送更改数据的请求信号 */
private:
    QFile Database;
    int getComID(char*, char*); /* 根据提供的商品名称和商家名称查询商品信息 */
};


#endif // MYDATABASE_H
