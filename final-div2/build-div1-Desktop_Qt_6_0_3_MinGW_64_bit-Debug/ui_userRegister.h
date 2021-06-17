/********************************************************************************
** Form generated from reading UI file 'userRegister.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERREGISTER_H
#define UI_USERREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userRegister
{
public:
    QLineEdit *password_input;
    QPushButton *register_button;
    QLabel *password_label;
    QLineEdit *username_input;
    QLabel *username_label;
    QLineEdit *password_input_2;
    QLabel *password_label_2;
    QCheckBox *checkBox;
    QLabel *label;

    void setupUi(QWidget *userRegister)
    {
        if (userRegister->objectName().isEmpty())
            userRegister->setObjectName(QString::fromUtf8("userRegister"));
        userRegister->resize(300, 400);
        userRegister->setMinimumSize(QSize(300, 400));
        userRegister->setMaximumSize(QSize(300, 400));
        password_input = new QLineEdit(userRegister);
        password_input->setObjectName(QString::fromUtf8("password_input"));
        password_input->setGeometry(QRect(110, 210, 151, 31));
        password_input->setEchoMode(QLineEdit::Password);
        register_button = new QPushButton(userRegister);
        register_button->setObjectName(QString::fromUtf8("register_button"));
        register_button->setGeometry(QRect(100, 320, 101, 24));
        register_button->setMinimumSize(QSize(0, 0));
        password_label = new QLabel(userRegister);
        password_label->setObjectName(QString::fromUtf8("password_label"));
        password_label->setGeometry(QRect(60, 220, 41, 16));
        QFont font;
        font.setPointSize(11);
        password_label->setFont(font);
        username_input = new QLineEdit(userRegister);
        username_input->setObjectName(QString::fromUtf8("username_input"));
        username_input->setGeometry(QRect(110, 170, 151, 31));
        username_label = new QLabel(userRegister);
        username_label->setObjectName(QString::fromUtf8("username_label"));
        username_label->setGeometry(QRect(50, 180, 72, 15));
        username_label->setFont(font);
        password_input_2 = new QLineEdit(userRegister);
        password_input_2->setObjectName(QString::fromUtf8("password_input_2"));
        password_input_2->setGeometry(QRect(110, 250, 151, 31));
        password_input_2->setEchoMode(QLineEdit::Password);
        password_label_2 = new QLabel(userRegister);
        password_label_2->setObjectName(QString::fromUtf8("password_label_2"));
        password_label_2->setGeometry(QRect(30, 260, 71, 20));
        password_label_2->setFont(font);
        checkBox = new QCheckBox(userRegister);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(80, 290, 161, 21));
        label = new QLabel(userRegister);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 271, 141));
        label->setPixmap(QPixmap(QString::fromUtf8(":/assets/logo.png")));

        retranslateUi(userRegister);

        QMetaObject::connectSlotsByName(userRegister);
    } // setupUi

    void retranslateUi(QWidget *userRegister)
    {
        userRegister->setWindowTitle(QCoreApplication::translate("userRegister", "\346\263\250\345\206\214", nullptr));
        password_input->setPlaceholderText(QCoreApplication::translate("userRegister", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        register_button->setText(QCoreApplication::translate("userRegister", "\347\241\256\350\256\244\346\263\250\345\206\214", nullptr));
        password_label->setText(QCoreApplication::translate("userRegister", "\345\257\206\347\240\201", nullptr));
        username_input->setPlaceholderText(QCoreApplication::translate("userRegister", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        username_label->setText(QCoreApplication::translate("userRegister", "\350\264\246\346\210\267\345\220\215", nullptr));
        password_input_2->setText(QString());
        password_input_2->setPlaceholderText(QCoreApplication::translate("userRegister", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        password_label_2->setText(QCoreApplication::translate("userRegister", "\345\206\215\346\254\241\350\276\223\345\205\245", nullptr));
        checkBox->setText(QCoreApplication::translate("userRegister", "\346\230\257\345\220\246\346\263\250\345\206\214\344\270\272\345\225\206\346\210\267\357\274\237", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class userRegister: public Ui_userRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERREGISTER_H
