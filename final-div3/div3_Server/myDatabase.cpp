#include "myDatabase.h"
#include <iostream>

userDatabase::userDatabase() {
    this->customerFile.setFileName("customerDatabase.dat");
    this->customerFile.open(QIODevice::ReadWrite);

    this->merchantFile.setFileName("merchantDatabase.dat");
    this->merchantFile.open(QIODevice::ReadWrite);

}
userDatabase::~userDatabase() {
    this->customerFile.close();
    this->merchantFile.close();
}

bool userDatabase::pushNewUser(user *newUser) {
    if (this->getCustomerID(newUser->getName()) != -1 || this->getMerchantID(newUser->getName()) != -1) return 0;
    if(!newUser->getUserType()) {
        this->customerFile.seek(this->customerFile.size());
        this->customerFile.write((char*)newUser, sizeof(customer));
    } else {
        this->merchantFile.seek(this->merchantFile.size());
        this->merchantFile.write((char*)newUser, sizeof(merchants));
    }
    return 1;
}
bool userDatabase::userMoneyAdd(const char *userName, const double add) {
    user *tmpUser;
    int tmpid = this->getMerchantID(userName);
    if (tmpid != -1) {
        this->merchantFile.seek(tmpid * sizeof(merchants));
        merchants tmp;
        this->merchantFile.read((char*)&tmp, sizeof(merchants));
        tmp.moneyUpdata(add);
        tmpUser = new merchants (tmp);
        emit this->sendUserInfo(tmpUser);
        this->merchantFile.seek((tmpid *sizeof(merchants)));
        this->merchantFile.write((char*)&tmp, sizeof(merchants));
        delete  tmpUser;
        return 1;
    }
    tmpid = this->getCustomerID(userName);
    if (tmpid != -1) {
        this->customerFile.seek(tmpid * sizeof(customer));
        customer tmp;
        this->customerFile.read((char*)&tmp, sizeof(customer));
        tmp.moneyUpdata(add);
        tmpUser = new customer(tmp);
        emit this->sendUserInfo(tmpUser);
        this->customerFile.seek(tmpid * sizeof(customer));
        this->customerFile.write((char*)&tmp, sizeof(customer));
        delete tmpUser;
        return 1;
    }
    return 0;
}
bool userDatabase::updataUserInfo(user *nowUser) {
    user *tmpUser;
    if (nowUser->getUserType()) {
        int tmpid = this->getMerchantID(nowUser->getName());
        if (tmpid != -1) {
            this->merchantFile.seek(tmpid * sizeof(merchants));
            this->merchantFile.write((char*)nowUser, sizeof(merchants));
            tmpUser = new merchants (*(merchants*)nowUser);
            emit this->sendUserInfo(tmpUser);
            delete tmpUser;
            return 1;
        }
    } else {
        int tmpid = this->getCustomerID(nowUser->getName());
        if (tmpid != -1) {
            this->customerFile.seek(tmpid * sizeof(customer));
            this->customerFile.write((char*)nowUser, sizeof(customer));
            tmpUser = new customer (*(customer*)nowUser);
            emit this->sendUserInfo(tmpUser);
            return 1;
        }
    }
    return 0;
}

int userDatabase::getCustomerID(const char *name) {
    int count = 0;
    customer tmpUser;
    this->customerFile.seek(qint64(0));
    while(!this->customerFile.atEnd()) {
        this->customerFile.read((char*)&tmpUser, sizeof(customer));
        if (tmpUser.cmpUserName(name)) {
            return count;
        }
        count++;
    }
    return -1;
}

int userDatabase::getMerchantID(const char *name) {
    int count = 0;
    merchants tmpUser;
    this->merchantFile.seek(qint64(0));
    while(!this->merchantFile.atEnd()) {
        this->merchantFile.read((char*)&tmpUser, sizeof(merchants));
        if (tmpUser.cmpUserName(name)) {
            return count;
        }
        count++;
    }
    return -1;
}


bool userDatabase::loginExamMerchants(const char *userName, const char *password, merchants *userInfo) {

    int tmpid = this->getMerchantID(userName);
    if (tmpid != -1) {
        this->merchantFile.seek(tmpid * sizeof(merchants));
        merchants tmpUser1;
        this->merchantFile.read((char*)&tmpUser1,sizeof(merchants));
        if(tmpUser1.cmpPassword(password)) {
            memcpy((char*)userInfo, (char*)&tmpUser1, sizeof(merchants));
            return 1;
        }
    }
    return 0;
}
bool userDatabase::loginExamCustomer(const char *userName, const char *password, customer *userInfo) {
    int tmpid = this->getCustomerID(userName);
    if (tmpid != -1) {
        this->customerFile.seek(tmpid * sizeof(customer));
        customer tmpUser1;
        this->customerFile.read((char*)&tmpUser1,sizeof(customer));
        if(tmpUser1.cmpPassword(password)) {
            memcpy((char*)userInfo, (char*)&tmpUser1, sizeof(customer));
            return 1;
        }
    }
    return 0;
}



commodityDatabase::commodityDatabase() {
    this->Database.setFileName("commodityDataBase.dat");
    this->Database.open(QIODevice::ReadWrite);
}

commodityDatabase::~commodityDatabase() {
    this->Database.close();
}

int commodityDatabase::getComID(char *tmp, char *tmp2) {
    int count = 0;
    commodityStruct tCom;
    this->Database.seek(qint64(0));
    while(!this->Database.atEnd()) {
        this->Database.read((char*)&tCom, sizeof(commodityStruct));
        if (!strcmp(tmp, tCom.name) && !strcmp(tmp2, tCom.owner)) {
            return count;
        }
        count++;
    }
    return -1;
}

void commodityDatabase::dataInit() {
    commodityStruct tCom;
    this->Database.seek(0);
    while(!this->Database.atEnd()) {
        this->Database.read((char*)&tCom, sizeof(commodityStruct));
        commodityStruct t2 = tCom;
        emit this->sendComInfo(t2);
    }
}

bool commodityDatabase::pushNewCom(commodityStruct newCom) {
    int tmpid = getComID(newCom.name, newCom.owner);
    if (tmpid != -1) return 0;
    emit this->sendComInfo(newCom);
    this->Database.seek(this->Database.size());
    this->Database.write((char*)&newCom, sizeof(commodityStruct));
    return 1;
}

bool commodityDatabase::updataComData(commodityStruct newCom) {
    int tmpid = getComID(newCom.name, newCom.owner);
    if (tmpid == -1) return 0;
    emit this->sendComInfo(newCom);
    this->Database.seek(tmpid*sizeof(commodityStruct));
    this->Database.write((char*)&newCom, sizeof(commodityStruct));
    return 1;
}


/* ?????????????????? */
shoppingTrolleyDatabase::shoppingTrolleyDatabase() {
    this->Database.setFileName("shoppingTrolley.dat");
    this->Database.open(QIODevice::ReadWrite);
}

shoppingTrolleyDatabase::~shoppingTrolleyDatabase() {
    this->Database.close();
}

void shoppingTrolleyDatabase::getTrolley(char *userName, shoppingTrolley *tmpTrolley) {
    this->Database.seek(0);
    shoppingTrolley tmp;
    while(!this->Database.atEnd()) {
        this->Database.read((char*)&tmp, sizeof(shoppingTrolley));
        if (!strcmp(userName, tmp.getName())) {
            memcpy((char*)tmpTrolley, (char*)&tmp, sizeof(tmpTrolley));
            return;
        }
    }
    tmp.setName(userName);
    tmp.setNum(0);
     memcpy((char*)tmpTrolley, (char*)&tmp, sizeof(tmpTrolley));
}

void shoppingTrolleyDatabase::updataDatabase(shoppingTrolley newTrolley) {
    shoppingTrolley tmp;
    this->Database.seek(0);
    while(!this->Database.atEnd()) {
        this->Database.read((char*)&tmp, sizeof(shoppingTrolley));
        if(!strcmp(newTrolley.getName(), tmp.getName())) {
            this->Database.seek(this->Database.pos()-sizeof(shoppingTrolley));
            this->Database.write((char*)&newTrolley, sizeof(shoppingTrolley));
            return;
        }
    }
    this->Database.seek(this->Database.size());
    this->Database.write((char*)&newTrolley, sizeof(shoppingTrolley));
}
