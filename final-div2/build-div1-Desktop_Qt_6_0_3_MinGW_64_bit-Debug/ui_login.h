/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userLogin
{
public:
    QWidget *centralwidget;
    QPushButton *confirm_button;
    QPushButton *register_button;
    QLineEdit *username_input;
    QLineEdit *password_input;
    QLabel *username_label;
    QLabel *password_label;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *userLogin)
    {
        if (userLogin->objectName().isEmpty())
            userLogin->setObjectName(QString::fromUtf8("userLogin"));
        userLogin->resize(300, 400);
        userLogin->setMinimumSize(QSize(300, 400));
        userLogin->setMaximumSize(QSize(300, 400));
        centralwidget = new QWidget(userLogin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        confirm_button = new QPushButton(centralwidget);
        confirm_button->setObjectName(QString::fromUtf8("confirm_button"));
        confirm_button->setGeometry(QRect(40, 300, 101, 24));
        register_button = new QPushButton(centralwidget);
        register_button->setObjectName(QString::fromUtf8("register_button"));
        register_button->setGeometry(QRect(160, 300, 101, 24));
        register_button->setMinimumSize(QSize(0, 0));
        username_input = new QLineEdit(centralwidget);
        username_input->setObjectName(QString::fromUtf8("username_input"));
        username_input->setGeometry(QRect(100, 170, 151, 31));
        password_input = new QLineEdit(centralwidget);
        password_input->setObjectName(QString::fromUtf8("password_input"));
        password_input->setGeometry(QRect(100, 240, 151, 31));
        password_input->setEchoMode(QLineEdit::Password);
        username_label = new QLabel(centralwidget);
        username_label->setObjectName(QString::fromUtf8("username_label"));
        username_label->setGeometry(QRect(30, 180, 72, 15));
        QFont font;
        font.setPointSize(11);
        username_label->setFont(font);
        password_label = new QLabel(centralwidget);
        password_label->setObjectName(QString::fromUtf8("password_label"));
        password_label->setGeometry(QRect(50, 250, 41, 16));
        password_label->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 271, 141));
        label->setPixmap(QPixmap(QString::fromUtf8(":/assets/logo.png")));
        userLogin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(userLogin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        userLogin->setStatusBar(statusbar);

        retranslateUi(userLogin);

        QMetaObject::connectSlotsByName(userLogin);
    } // setupUi

    void retranslateUi(QMainWindow *userLogin)
    {
        userLogin->setWindowTitle(QCoreApplication::translate("userLogin", "\347\231\273\345\275\225", nullptr));
        confirm_button->setText(QCoreApplication::translate("userLogin", "\347\231\273\345\275\225", nullptr));
        register_button->setText(QCoreApplication::translate("userLogin", "\346\263\250\345\206\214", nullptr));
        username_input->setPlaceholderText(QCoreApplication::translate("userLogin", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        password_input->setPlaceholderText(QCoreApplication::translate("userLogin", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        username_label->setText(QCoreApplication::translate("userLogin", "\350\264\246\346\210\267\345\220\215", nullptr));
        password_label->setText(QCoreApplication::translate("userLogin", "\345\257\206\347\240\201", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class userLogin: public Ui_userLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
