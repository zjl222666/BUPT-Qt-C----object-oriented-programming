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
    QTableWidget *orderTable;
    QLabel *label;
    QLabel *priceSum;
    QPushButton *pay;

    void setupUi(QWidget *orderWindow)
    {
        if (orderWindow->objectName().isEmpty())
            orderWindow->setObjectName(QString::fromUtf8("orderWindow"));
        orderWindow->resize(532, 424);
        orderTable = new QTableWidget(orderWindow);
        if (orderTable->columnCount() < 4)
            orderTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (orderTable->rowCount() < 7)
            orderTable->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        orderTable->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        orderTable->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        orderTable->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        orderTable->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        orderTable->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        orderTable->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        orderTable->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        orderTable->setItem(0, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        orderTable->setItem(0, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        orderTable->setItem(0, 2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        orderTable->setItem(0, 3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        orderTable->setItem(1, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        orderTable->setItem(1, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        orderTable->setItem(1, 2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        orderTable->setItem(1, 3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        orderTable->setItem(2, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        orderTable->setItem(2, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        orderTable->setItem(2, 2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        orderTable->setItem(2, 3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        orderTable->setItem(3, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        orderTable->setItem(3, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        orderTable->setItem(3, 2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        orderTable->setItem(3, 3, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        orderTable->setItem(4, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        orderTable->setItem(4, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        orderTable->setItem(4, 2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        orderTable->setItem(4, 3, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        orderTable->setItem(5, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        orderTable->setItem(5, 1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        orderTable->setItem(5, 2, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        orderTable->setItem(5, 3, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        orderTable->setItem(6, 0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        orderTable->setItem(6, 1, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        orderTable->setItem(6, 2, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        orderTable->setItem(6, 3, __qtablewidgetitem38);
        orderTable->setObjectName(QString::fromUtf8("orderTable"));
        orderTable->setGeometry(QRect(10, 40, 511, 321));
        orderTable->verticalHeader()->setVisible(false);
        orderTable->verticalHeader()->setDefaultSectionSize(42);
        label = new QLabel(orderWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 5, 91, 31));
        priceSum = new QLabel(orderWindow);
        priceSum->setObjectName(QString::fromUtf8("priceSum"));
        priceSum->setGeometry(QRect(50, 390, 71, 16));
        pay = new QPushButton(orderWindow);
        pay->setObjectName(QString::fromUtf8("pay"));
        pay->setGeometry(QRect(200, 390, 89, 24));

        retranslateUi(orderWindow);

        QMetaObject::connectSlotsByName(orderWindow);
    } // setupUi

    void retranslateUi(QWidget *orderWindow)
    {
        orderWindow->setWindowTitle(QCoreApplication::translate("orderWindow", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = orderTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("orderWindow", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = orderTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("orderWindow", "\345\225\206\345\256\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = orderTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("orderWindow", "\345\215\225\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = orderTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("orderWindow", "\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = orderTable->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("orderWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = orderTable->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("orderWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = orderTable->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("orderWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = orderTable->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("orderWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = orderTable->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("orderWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = orderTable->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("orderWindow", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = orderTable->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("orderWindow", "\346\226\260\345\273\272\350\241\214", nullptr));

        const bool __sortingEnabled = orderTable->isSortingEnabled();
        orderTable->setSortingEnabled(false);
        orderTable->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("orderWindow", "\346\210\221\347\232\204\350\256\242\345\215\225", nullptr));
        priceSum->setText(QCoreApplication::translate("orderWindow", "\345\205\261\350\256\241  \345\205\203", nullptr));
        pay->setText(QCoreApplication::translate("orderWindow", "\347\241\256\350\256\244\346\224\257\344\273\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class orderWindow: public Ui_orderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERWINDOW_H
