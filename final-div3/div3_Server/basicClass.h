#ifndef BASICCLASS_H
#define BASICCLASS_H
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<qdebug.h>
#define myMaxLength 50
#define myMaxShoppingSize 7
#define myPacketSize 1000

using namespace std;
/* 用户基类 */
class user {
public:
    user (const char *tuserName = NULL,const char *tpassword = NULL, double tmoney = 0);
    user (user *obj);
    virtual ~user();
    virtual bool getUserType()=0; /* 纯虚函数-> 获取当前用户类型 */
    virtual void updataUserInfo(user *newUser) = 0; /* 纯虚函数-> 更新当前的用户信息 */
    void updataInfo(user *newUser);
    bool cmpUserName(const char* tmpName); /* 比对用户名 */
    bool cmpPassword(const char* tmpPassword); /* 比对密码 */
    char *getName(); /* 获取当前账户姓名 */
    double getMoney(); /* 获取当前账户余额 */
    void changePassword(const char *newPassword); /* 更改用户密码 */
    void moneyUpdata(double tmp); /* 更新账户余额 */
    void debug() {
        qDebug()<<this->userName<<" "<<this->password<<" "<<this->money;
    }
protected:
    char userName[myMaxLength];
    char password[myMaxLength]; /* 登录密码 */
    double money; /* 余额 */
};

class customer: public user {
public:
    customer(const char *tuserName = NULL,const char *tpassword = NULL, double tmoney = 0);
    customer(customer &obj);
    ~customer();
    bool getUserType();
    void updataUserInfo(user *newUser);
};

class merchants: public user {
public:
    merchants (const char *tuserName = NULL, const char *tpassword = NULL, double tmoney = 0);
    merchants (merchants &obj);
    ~merchants();
    bool getUserType();
    void updataUserInfo(user *newUser);
private:
    int discount_book;
    int discount_food;
    int discount_cloth;
};



/* 商品基类 */

struct commodityStruct {
    commodityStruct(double price = 0, int leftNum = 0,const char *type = NULL,const char *name = NULL,const  char *description = NULL,const char *owner = NULL,const char *extra = NULL, int discount = 100)
        :price(price), leftNum(leftNum), discount(discount) {
        if (type != NULL) strcpy_s(this->type, type);
        if (name != NULL) strcpy_s(this->name, name);
        if (description != NULL) strcpy_s(this->description, description);
        if (owner != NULL) strcpy_s(this->owner, owner);
        if (extra != NULL) strcpy_s(this->extra, extra);
    }
    double price; /* 价格 */
    int leftNum; /* 剩余数量 */
    char type[myMaxLength]; /* 类型 */
    char name[myMaxLength]; /* 名称 */
    char description[myMaxLength*2]; /* 描述 */
    char owner[myMaxLength]; /* 拥有者-商家 */
    char extra[myMaxLength]; /* 附加信息 */
    int discount; /* 当前折扣 */
};

class commodity {
public:
    commodity(char *tname = NULL, double tprice = 0, int tleftNum = 0, char *tdescription = NULL);
    commodity(commodity &obj);
    commodity(commodity *obj);
    virtual ~commodity();
    virtual double getPrice() = 0; /* 获取当前商品的价格 */
    virtual void updataCommodityInfo(commodity *obj) = 0; /* 更新当前商品的信息 */
    virtual char* getExtra() = 0; /* 获取商品的自带信息 */
    virtual char* getSuffix() = 0;
    virtual commodityStruct getStruct() = 0;
    char *getName(); /* 获取当前商品名称 */
    void updataInfo(commodity *obj);
    void setType(char *); /* 设置当前商品类型 */
    void setOwner(char*);   /* 设置当前商品商家 */
    void setDiscount(int); /* 设置折扣 */
protected:
    double price; /* 价格 */
    int leftNum; /* 剩余数量 */
    char type[myMaxLength]; /* 类型 */
    char name[myMaxLength]; /* 名称 */
    char description[myMaxLength*2]; /* 描述 */
    char owner[myMaxLength]; /* 拥有者-商家 */
    int discount; /* 当前商品折扣 */
};

class commodityCloth: public commodity {
public:
    commodityCloth(char *tname = NULL, double tprice = 0, int tleftNum = 0, char *tdescription = NULL, char *tbrand = NULL);
    commodityCloth(commodity *obj);
    commodityCloth(commodityStruct obj);
    ~commodityCloth();
    double getPrice();
    char* getExtra();
    char* getSuffix();
    void updataCommodityInfo(commodity *obj);
    commodityStruct getStruct();
private:
    char brand[myMaxLength];
};

class commodityBook: public commodity {
public:
    commodityBook(char *tname = NULL, double tprice = 0, int tleftNum = 0, char *tdescription = NULL, char *tpublisher = NULL);
    commodityBook(commodity *obj);
    commodityBook(commodityStruct obj);
    ~commodityBook();
    double getPrice();
    char* getExtra();
    char* getSuffix();
    void updataCommodityInfo(commodity *obj);
    commodityStruct getStruct();
private:
    char publisher[myMaxLength];
};

class commodityFood: public commodity {
public:
    commodityFood(char *tname = NULL, double tprice = 0, int tleftNum = 0, char *tdescription = NULL, char *tfoodType = NULL);
    commodityFood(commodity *obj);
    commodityFood(commodityStruct obj);
    ~commodityFood();
    double getPrice();
    char* getExtra();
    char* getSuffix();
    void updataCommodityInfo(commodity *obj);
    void setDiscount(int tmp);
    commodityStruct getStruct();
private:
    char foodType[myMaxLength];
};


/* 购物车类 */
class shoppingTrolley {
public:
    shoppingTrolley();
    ~shoppingTrolley();
    char *getName();
    void setNum(int);
    void setName(char*);
    int getNum();
    QString getComName(int);
    QString getMerName(int);
    bool deleteCom(int);
    bool deleteCom(QString, QString);
    int addCom(QString comName, QString merName);
private:
    int findCom(QString name, QString merchant);
    char owner[myMaxLength];
    int num; /* 购物车中有效商品数量 */
    char comName[myMaxShoppingSize][myMaxLength];
    char merchantName[myMaxShoppingSize][myMaxLength];
};


/* 订单类 */
struct orderCom{
    orderCom(QString name = "", QString owner = "", double price = 0, int num = 0)
        :name(name), owner(owner), price(price), num(num){
    };
    QString name, owner;
    double price;
    int num;
};

class order {
public:
    order();
    order(vector<orderCom>);
    ~order();
    double getMoney();
    void setPrice(int, double);
    int getComNum(int);
    QString getComName(int);
    QString getComMerchant(int);
    double getComPrice(int);
    int getAllNum();
private:
    vector<orderCom> commodity;
};


/* 数据包类 */
class packet {
public:
    packet(int type = 0, char *data = NULL, int size = 0);
    ~packet();
    int gettype();
    char* getData();
private:
    int type;
    char data[myPacketSize];
};

struct loginPacket {
    char name[myMaxLength];
    char passWord[myMaxLength];
};

struct userMoneyPacket {
    char name[myMaxLength];
    double add;
};

struct askforTrolley {
    char name[myMaxLength];
};

/*

  客户端发-服务器收：
  type| 说明
    1   用户登录确认，数据部分数据包格式为 struct loginPacket
    2   商户用户数据更新确认，数据部分数据包格式为 class merchants
    3   普通用户数据更新确认，数据部分数据包格式为 class customer
    4   商户用户注册确认，数据部分数据包格式为 class merchants
    5   普通用户注册确认，数据部分数据包格式为 class customer
    6   用户余额修改确认，数据部分数据包格式为 struct userMoneyPacket

    7   添加新商品确认，数据部分数据包格式为 struct commodityStruct
    8   修改商品信息确认，数据部分数据包格式为 struct commodityStruct

    9   获取购物车信息确认，数据部分数据包格式为 struct askforTrolley
    10  更新购物车信息确认，数据部分数据包格式为 class shoppingTrolley

  服务器发-客户端收：
  type| 说明
    1   普通用户登录成功，数据部分数据包格式为 class customer
    2   商户用户登录成功，数据部分数据包格式为 class merchants
    3   普通用户信息更新，数据部分数据包格式为 class customer
    4   商户用户信息更新，数据部分数据包格式为 class merchants
    5   用户登录失败，无数据部分
    6   用户注册失败，无数据部分

    7   商品信息更新，数据部分数据包格式为 struct commodityStruct

    8   购物车信息，数据部分数据包格式为 class shoppingTrolley

    9   商品添加失败，无数据部分









  */
#endif // BASICCLASS_H
