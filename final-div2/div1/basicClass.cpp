#include "basicClass.h"

/* 用户基类 */

user::user(const char *tuserName,const char *tpassword, double tmoney) {
    if(tuserName != NULL) strcpy_s(this->userName, tuserName);
    if(tpassword != NULL)strcpy_s(this->password, tpassword);
    this->money = tmoney;
}

user::user(user *obj) {
    strcpy_s(this->userName, obj->userName);
    strcpy_s(this->password, obj->password);
    this->money = obj->money;
}

user::~user() {

}

void user::updataInfo(user *obj) {
    strcpy_s(this->userName, obj->userName);
    strcpy_s(this->password, obj->password);
    this->money = obj->money;
}

void user::changePassword(const char *newPassword) {
    strcpy_s(this->password, newPassword);
}

void user::moneyUpdata(double tmp){
    this->money += tmp;
}

bool user::cmpUserName(const char* tmpName) {
    if (strcmp(tmpName, this->userName) == 0) return 1;
    else return 0;
}
bool user::cmpPassword(const char* tmpPassword) {
    if (strcmp(tmpPassword, this->password) == 0) return 1;
    else return 0;
}

char* user::getName() {
    return this->userName;
}

double user::getMoney() {
    return this->money;
}

/* 顾客类  */
customer::customer(const char *tuserName,const char *tpassword, double tmoney)
    : user(tuserName, tpassword, tmoney)  {
}

customer::customer(customer &obj)
    : user(obj){
}

customer::~customer() {
}

bool customer::getUserType() {
    return 0;
}

void customer::updataUserInfo(user *newUser) {
    this->updataInfo(newUser);
}


/*商户类*/
merchants::merchants(const char *tuserName, const char *tpassword, double tmoney)
    : user(tuserName, tpassword, tmoney) {

}

merchants::merchants(merchants &obj)
    : user(obj){
    this->discount_book = obj.discount_book;
    this->discount_cloth = obj.discount_cloth;
    this->discount_food = obj.discount_food;
}

merchants::~merchants() {

}

bool merchants::getUserType() {
    return 1;
}

void merchants::updataUserInfo(user *newUser) {
    this->updataInfo(newUser);
    merchants obj = *(merchants*) newUser;
    this->discount_book = obj.discount_book;
    this->discount_cloth = obj.discount_cloth;
    this->discount_food = obj.discount_food;
}

/* 商品类 */

commodity::commodity(char *tname , double tprice, int tleftNum, char *tdescription) {
    if (tname != NULL) strcpy_s(this->name, tname);
    this->price = tprice;
    this->leftNum = tleftNum;
    if (tdescription != NULL) strcpy_s(this->description, tdescription);
}
commodity::~commodity(){

}


void commodity::updataInfo(commodity *obj) {
    strcpy_s(this->name, obj->name);
    strcpy_s(this->description, obj->description);
    this->price = obj->price;
    this->leftNum = obj->leftNum;
    strcpy_s(this->owner, obj->owner);
}

void commodity::setType(char *tmp) {
    strcpy_s(this->type, tmp);
}

char *commodity::getName() {
    return this->name;
}

void commodity::setDiscount(int discount) {
    this->discount = discount;
}
/* 商品-服装类 */

commodityCloth:: commodityCloth(char *tname, double tprice, int tleftNum, char *tdescription, char *tbrand)
    : commodity( tname , tprice, tleftNum, tdescription) {
    strcpy_s(this->brand, tbrand);
    this->setType((char*)"服装");
}

commodityCloth::commodityCloth(commodityStruct obj) {
    this->price = obj.price;
    this->leftNum = obj.leftNum;
    this->discount = obj.discount;
    strcpy_s(this->name, obj.name);
    strcpy_s(this->type, obj.type);
    strcpy_s(this->description, obj.description);
    strcpy_s(this->owner, obj.owner);
    strcpy_s(this->brand, obj.extra);
}

commodityCloth::~commodityCloth() {

}
double commodityCloth::getPrice() {
    return this->discount*this->price/100;
}

char* commodityCloth::getSuffix() {
    return (char*)"品牌:";
}

char* commodityCloth::getExtra() {
    return this->brand;
}

void commodityCloth::updataCommodityInfo(commodity *obj) {
    this->updataInfo(obj);
    strcpy_s(this->brand, obj->getExtra());
}
commodityStruct commodityCloth::getStruct() {
    commodityStruct tmp(this->price, this->leftNum, this->type, this->name, this->description, this->owner, this->brand, this->discount);
    return tmp;
}

/* 商品-食品类 */
commodityFood:: commodityFood(char *tname, double tprice, int tleftNum, char *tdescription, char *tfoodType)
    : commodity( tname , tprice, tleftNum, tdescription) {
    strcpy_s(this->foodType, tfoodType);
    this->setType((char*)"食品");
}
commodityFood::commodityFood(commodityStruct obj) {
    this->price = obj.price;
    this->leftNum = obj.leftNum;
    this->discount = obj.discount;
    strcpy_s(this->name, obj.name);
    strcpy_s(this->type, obj.type);
    strcpy_s(this->description, obj.description);
    strcpy_s(this->owner, obj.owner);
    strcpy_s(this->foodType, obj.extra);
}

commodityFood::~commodityFood() {

}
double commodityFood::getPrice() {
    return this->discount*this->price/100;
}

char* commodityFood::getSuffix() {
    return (char*)"食品类型:";
}

char* commodityFood::getExtra() {
    return this->foodType;
}

void commodityFood::updataCommodityInfo(commodity *obj) {
    this->updataInfo(obj);
    strcpy_s(this->foodType, obj->getExtra());
}

commodityStruct commodityFood::getStruct() {
    commodityStruct tmp(this->price, this->leftNum, this->type, this->name, this->description, this->owner, this->foodType, this->discount);
    return tmp;
}

/* 商品-图书 */
commodityBook::commodityBook(char *tname, double tprice, int tleftNum, char *tdescription, char *tpublisher)
    : commodity( tname , tprice, tleftNum, tdescription) {
    strcpy_s(this->publisher, tpublisher);
    this->setType((char*)"图书");
}
commodityBook::commodityBook(commodityStruct obj) {
    this->price = obj.price;
    this->leftNum = obj.leftNum;
    this->discount = obj.discount;
    strcpy_s(this->name, obj.name);
    strcpy_s(this->type, obj.type);
    strcpy_s(this->description, obj.description);
    strcpy_s(this->owner, obj.owner);
    strcpy_s(this->publisher, obj.extra);
}
commodityBook::~commodityBook() {

}
commodityStruct commodityBook::getStruct() {
    commodityStruct tmp(this->price, this->leftNum, this->type, this->name, this->description, this->owner, this->publisher, this->discount);
    return tmp;
}

double commodityBook::getPrice() {
    return this->discount*this->price/100;
}

char* commodityBook::getSuffix() {
    return (char*)"出版社:";
}

char* commodityBook::getExtra() {
    return this->publisher;
}

void commodityBook::updataCommodityInfo(commodity *obj) {
    this->updataInfo(obj);
    strcpy_s(this->publisher, obj->getExtra());
}

/* 订单类 */

order::order() {
    this->commodity.clear();
}

order::~order() {

}

order::order(vector<orderCom> v) {
    this->commodity.clear();
    this->commodity = v;
}
double order::getMoney() {
    double tmp = 0;
    for (int i = 0; i < (int)this->commodity.size(); i++) {
        tmp += this->commodity[i].num * this->commodity[i].price;
    }
    return tmp;
}

void order::setPrice(int index, double money) {
    this->commodity[index].price = money;
}
int order::getAllNum() {
    return (int)this->commodity.size();
}
int order::getComNum(int i) {
    return this->commodity[i].num;
}

double order::getComPrice(int i) {
    return this->commodity[i].price;
}

QString order::getComName(int index) {
    return this->commodity[index].name;
}

QString order::getComMerchant(int index) {
    return this->commodity[index].owner;
}
/* 购物车类 */

shoppingTrolley::shoppingTrolley() {

}

shoppingTrolley::~shoppingTrolley() {

}

char* shoppingTrolley::getName() {
    return this->owner;
}

void shoppingTrolley::setNum(int x) {
    if (x>=myMaxShoppingSize) return;
    this->num = x;
}

void shoppingTrolley::setName(char * x) {
    strcpy_s(this->owner, x);
}

int shoppingTrolley::getNum() {
    return this->num;
}

QString shoppingTrolley::getComName(int i) {
    return QString(this->comName[i]);
}

QString shoppingTrolley::getMerName(int i) {
    return QString(this->merchantName[i]);
}

bool shoppingTrolley::deleteCom(int x) {
    this->num--;
    if (x>=myMaxShoppingSize) return 0;
    for(int i = x; i < this->num; i++) {
        strcpy_s(this->comName[i], this->comName[i+1]);
        strcpy_s(this->merchantName[i], this->merchantName[i+1]);
    }
    return 1;
}

int shoppingTrolley::findCom(QString name, QString merchant) {
    for (int i = 0; i < this->num; i++) {
        if (!strcmp(name.toStdString().c_str(), this->comName[i]) && !strcmp(merchant.toStdString().c_str(), this->merchantName[i])) {
            return i;
        }
    }
    return -1;
}

bool shoppingTrolley::deleteCom(QString name, QString merchant) {
    int tmpid = this->findCom(name, merchant);
    if (tmpid != -1) this->deleteCom(tmpid);
    else return 0;
    return 1;
}

int shoppingTrolley::addCom(QString comName, QString merName) {
    int id = this->findCom(comName, merName);
    if (id != -1)  return -1;
    if (this->num >= 7)  return 0;
    qstrcpy(this->comName[this->num], comName.toStdString().c_str());
    qstrcpy(this->merchantName[this->num], merName.toStdString().c_str());
    this->num++;
    return 1;
}
