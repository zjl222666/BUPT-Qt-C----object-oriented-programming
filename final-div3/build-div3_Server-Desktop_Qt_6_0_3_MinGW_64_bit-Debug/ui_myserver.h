/********************************************************************************
** Form generated from reading UI file 'myserver.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSERVER_H
#define UI_MYSERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myServer
{
public:
    QWidget *centralwidget;
    QTextEdit *consolo;
    QPushButton *clear;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *myServer)
    {
        if (myServer->objectName().isEmpty())
            myServer->setObjectName(QString::fromUtf8("myServer"));
        myServer->resize(555, 364);
        centralwidget = new QWidget(myServer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        consolo = new QTextEdit(centralwidget);
        consolo->setObjectName(QString::fromUtf8("consolo"));
        consolo->setEnabled(true);
        consolo->setGeometry(QRect(30, 40, 471, 271));
        consolo->setReadOnly(true);
        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(200, 10, 131, 24));
        myServer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(myServer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 555, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        myServer->setMenuBar(menubar);
        statusbar = new QStatusBar(myServer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        myServer->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(myServer);

        QMetaObject::connectSlotsByName(myServer);
    } // setupUi

    void retranslateUi(QMainWindow *myServer)
    {
        myServer->setWindowTitle(QCoreApplication::translate("myServer", "myServer", nullptr));
        clear->setText(QCoreApplication::translate("myServer", "\346\270\205\347\251\272\344\277\241\346\201\257", nullptr));
        menu->setTitle(QCoreApplication::translate("myServer", "\347\224\265\345\225\206\347\263\273\347\273\237\346\234\215\345\212\241\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myServer: public Ui_myServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSERVER_H
