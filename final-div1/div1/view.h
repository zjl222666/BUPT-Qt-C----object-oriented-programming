#ifndef VIEW_H
#define VIEW_H

#include "basicClass.h"
#include "qmessagebox.h"
#include "ui_login.h"
#include "ui_userRegister.h"
#include "ui_mainWindow.h"
#include "ui_userWindow.h"
#include "ui_commodityInfo.h"

#include <QMainWindow>
#include <QString>
#include <map>
#include <iostream>
#include <QObject>
#include <cstdio>
#include <QDebug>
#include <QFile>


/* 登录界面 */
class userLogin : public QMainWindow {
    Q_OBJECT
public:
    userLogin(QWidget *parent = nullptr);
    ~userLogin();
    void cleanWindow();
signals:
    void registerButton_click();
    void confirmLogin_click(QString, QString);
private slots:
    void on_confirm_button_clicked();
    void on_register_button_clicked();

private:
    Ui::userLogin *ui;
};


/* 用户注册界面 */
class userRegister : public QMainWindow {
    Q_OBJECT
public:
    userRegister(QWidget *parent = nullptr);
    ~userRegister();
    void cleanWindows();
signals:
    void handleRegister(QString, QString, bool);
private slots:
    void on_register_button_clicked();

private:
    Ui::userRegister *ui;
};

/* 程序主界面 */
class mainWindow : public QMainWindow {
    Q_OBJECT
public:
    mainWindow(QWidget *parent = nullptr);
    ~mainWindow();
    void loginUI(QString); // 用户成功登录时，UI对应发生改变
    void logoutUI(); // 用户退出登录时，UI对应发生改变
    void ComShowUpdata(vector<commodityStruct> newCom); /* 主界面商品信息更新 */
    void cleanSearch(); /* 将检索筛选框清空 */
    void setPage(int, int );
signals:
    void userButton_click();
    void updataLimit(QString, QString);
    void updataPage(int);
    void shopping(QString, QString, double);
private slots:
    void on_userButton_clicked();
    void on_pushButton_clicked();
    void on_nextPage_clicked();
    void on_lastPage_clicked();
    void on_pushButton_2_clicked();

    void buyButton();

private:
    Ui::mainWindow *ui;
    QPushButton *buy[7];

    void buttonShow(int num); //控制界面按钮显示
};


/* 用户信息页面 */
class userWindow :  public QMainWindow {
    Q_OBJECT
public:
    userWindow(QWidget *parent = nullptr);
    ~userWindow();
    void cleanWindow(user *nowUser);

    void ComShowUpdata(vector<commodityStruct> newCom); /* 商户界面商品信息更新 */
    void setPage(int, int); /* 界面页数显示控制 */

signals:
    void changePassword(QString);
    void logout();
    void topUp(double tmoney);
    void openNewCom();
    void updataUserPage(int);
    void sendEditCom(QString);
    void setAllDiscount(int, int, int);

private slots:
    void on_changeConfirm_clicked();
    void on_pushButton_2_clicked();
    void on_topUpComfirm_clicked();
    void on_pushButton_3_clicked();

    void on_lastPage_clicked();
    void on_nextPage_clicked();

    void editCom();

    void on_pushButton_clicked();

private:
    Ui::userWindow *ui;
    QPushButton *merchantEdit[7];
    bool isMerchant;
};


/* 商品详细信息页面，用于查看商品信息，编辑商品信息或者添加新商品 */

class commodityWindow: public QMainWindow {
    Q_OBJECT
public:
    commodityWindow(QWidget *parent = nullptr);
    ~commodityWindow();
    void setMode(int);
    void cleanAddCom();
    void updataComInfo(commodityStruct); /* 更新界面上的信息 */
signals:
    void pushNewCom(QString name, QString description, QString type, QString extra, double price, int num, int discount);
    void sendUpdataCom(QString name, QString description, QString type, QString extra, double price, int num, int discount);
private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);
    void on_pushButton_4_clicked();

private:
    Ui::commodityInfo *ui;
    int mode;  /* 当前窗口模式， 0表示添加新商品 */

};

#endif // VIEW_H
