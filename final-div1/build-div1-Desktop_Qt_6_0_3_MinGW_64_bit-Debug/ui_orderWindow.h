/********************************************************************************
** Form generated from reading UI file 'orderWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERWINDOW_H
#define UI_ORDERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_orderWindow
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *orderWindow)
    {
        if (orderWindow->objectName().isEmpty())
            orderWindow->setObjectName(QString::fromUtf8("orderWindow"));
        orderWindow->resize(544, 440);
        tableWidget = new QTableWidget(orderWindow);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 40, 511, 331));
        label = new QLabel(orderWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 5, 91, 31));
        label_2 = new QLabel(orderWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 390, 71, 16));
        pushButton = new QPushButton(orderWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 390, 89, 24));

        retranslateUi(orderWindow);

        QMetaObject::connectSlotsByName(orderWindow);
    } // setupUi

    void retranslateUi(QWidget *orderWindow)
    {
        orderWindow->setWindowTitle(QCoreApplication::translate("orderWindow", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("orderWindow", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("orderWindow", "\345\225\206\345\256\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("orderWindow", "\345\215\225\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("orderWindow", "\346\225\260\351\207\217", nullptr));
        label->setText(QCoreApplication::translate("orderWindow", "\346\210\221\347\232\204\350\256\242\345\215\225", nullptr));
        label_2->setText(QCoreApplication::translate("orderWindow", "\345\205\261\350\256\241  \345\205\203", nullptr));
        pushButton->setText(QCoreApplication::translate("orderWindow", "\347\241\256\350\256\244\346\224\257\344\273\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class orderWindow: public Ui_orderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERWINDOW_H
