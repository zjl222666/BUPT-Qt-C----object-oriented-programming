/********************************************************************************
** Form generated from reading UI file 'items.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMS_H
#define UI_ITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_items
{
public:
    QRadioButton *radioButton;

    void setupUi(QWidget *items)
    {
        if (items->objectName().isEmpty())
            items->setObjectName(QString::fromUtf8("items"));
        items->resize(400, 300);
        radioButton = new QRadioButton(items);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(120, 130, 117, 21));

        retranslateUi(items);

        QMetaObject::connectSlotsByName(items);
    } // setupUi

    void retranslateUi(QWidget *items)
    {
        items->setWindowTitle(QCoreApplication::translate("items", "Form", nullptr));
        radioButton->setText(QCoreApplication::translate("items", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class items: public Ui_items {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMS_H
