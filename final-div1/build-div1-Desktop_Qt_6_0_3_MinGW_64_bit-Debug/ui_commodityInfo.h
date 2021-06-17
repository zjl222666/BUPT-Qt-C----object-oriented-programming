/********************************************************************************
** Form generated from reading UI file 'commodityInfo.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMODITYINFO_H
#define UI_COMMODITYINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commodityInfo
{
public:
    QGroupBox *groupBox_4;
    QComboBox *comboBox;
    QLabel *label_7;
    QLineEdit *name;
    QLabel *label_8;
    QDoubleSpinBox *price;
    QLabel *label_9;
    QTextEdit *description;
    QLabel *label_10;
    QLabel *addLable;
    QLineEdit *add;
    QSpinBox *number;
    QLabel *label_15;
    QLabel *label;
    QSpinBox *discount;
    QPushButton *pushButton_4;

    void setupUi(QWidget *commodityInfo)
    {
        if (commodityInfo->objectName().isEmpty())
            commodityInfo->setObjectName(QString::fromUtf8("commodityInfo"));
        commodityInfo->resize(447, 474);
        groupBox_4 = new QGroupBox(commodityInfo);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setEnabled(true);
        groupBox_4->setGeometry(QRect(10, 10, 411, 401));
        comboBox = new QComboBox(groupBox_4);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(280, 40, 89, 31));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(230, 50, 72, 15));
        name = new QLineEdit(groupBox_4);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(70, 40, 113, 31));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 50, 72, 21));
        price = new QDoubleSpinBox(groupBox_4);
        price->setObjectName(QString::fromUtf8("price"));
        price->setGeometry(QRect(70, 140, 76, 41));
        price->setMinimum(0.000000000000000);
        price->setMaximum(2500.000000000000000);
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 140, 72, 31));
        description = new QTextEdit(groupBox_4);
        description->setObjectName(QString::fromUtf8("description"));
        description->setGeometry(QRect(70, 220, 331, 151));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 220, 72, 15));
        addLable = new QLabel(groupBox_4);
        addLable->setObjectName(QString::fromUtf8("addLable"));
        addLable->setGeometry(QRect(0, 89, 72, 31));
        add = new QLineEdit(groupBox_4);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(70, 90, 113, 31));
        number = new QSpinBox(groupBox_4);
        number->setObjectName(QString::fromUtf8("number"));
        number->setGeometry(QRect(280, 90, 71, 31));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(230, 95, 61, 21));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 150, 61, 20));
        discount = new QSpinBox(groupBox_4);
        discount->setObjectName(QString::fromUtf8("discount"));
        discount->setGeometry(QRect(280, 143, 52, 31));
        discount->setMinimum(1);
        discount->setMaximum(100);
        discount->setValue(100);
        pushButton_4 = new QPushButton(commodityInfo);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 430, 89, 24));

        retranslateUi(commodityInfo);

        QMetaObject::connectSlotsByName(commodityInfo);
    } // setupUi

    void retranslateUi(QWidget *commodityInfo)
    {
        commodityInfo->setWindowTitle(QCoreApplication::translate("commodityInfo", "Form", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("commodityInfo", "\345\225\206\345\223\201\344\277\241\346\201\257", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("commodityInfo", "\351\243\237\345\223\201", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("commodityInfo", "\346\234\215\350\243\205", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("commodityInfo", "\345\233\276\344\271\246", nullptr));

        label_7->setText(QCoreApplication::translate("commodityInfo", "\347\261\273\345\210\253", nullptr));
        label_8->setText(QCoreApplication::translate("commodityInfo", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        label_9->setText(QCoreApplication::translate("commodityInfo", "\345\216\237\344\273\267", nullptr));
        description->setPlaceholderText(QCoreApplication::translate("commodityInfo", "\344\270\215\350\266\205\350\277\207100\345\255\227", nullptr));
        label_10->setText(QCoreApplication::translate("commodityInfo", "\345\225\206\345\223\201\346\217\217\350\277\260", nullptr));
        addLable->setText(QCoreApplication::translate("commodityInfo", "\351\243\237\345\223\201\347\261\273\345\210\253", nullptr));
        label_15->setText(QCoreApplication::translate("commodityInfo", "\345\272\223\345\255\230\351\207\217", nullptr));
        label->setText(QCoreApplication::translate("commodityInfo", "\346\212\230\346\211\243(%)", nullptr));
        pushButton_4->setText(QCoreApplication::translate("commodityInfo", "\346\267\273\345\212\240\345\225\206\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commodityInfo: public Ui_commodityInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMODITYINFO_H
