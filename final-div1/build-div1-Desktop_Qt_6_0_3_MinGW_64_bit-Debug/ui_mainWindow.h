/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *header;
    QLabel *headerLable;
    QPushButton *userButton;
    QLabel *label_3;
    QLineEdit *searchInput;
    QLabel *label_4;
    QLineEdit *searchInput2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *footer;
    QPushButton *buy5;
    QLabel *pageSum;
    QPushButton *buy2;
    QPushButton *buy4;
    QPushButton *buy6;
    QPushButton *buy7;
    QTableWidget *clothTable;
    QPushButton *lastPage;
    QPushButton *buy1;
    QPushButton *nextPage;
    QPushButton *buy3;
    QLabel *currentPage;

    void setupUi(QWidget *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QString::fromUtf8("mainWindow"));
        mainWindow->setEnabled(true);
        mainWindow->resize(950, 500);
        mainWindow->setMinimumSize(QSize(950, 500));
        mainWindow->setMaximumSize(QSize(950, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainWindow->setWindowIcon(icon);
        horizontalLayoutWidget = new QWidget(mainWindow);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 951, 41));
        header = new QHBoxLayout(horizontalLayoutWidget);
        header->setObjectName(QString::fromUtf8("header"));
        header->setContentsMargins(0, 0, 0, 0);
        headerLable = new QLabel(horizontalLayoutWidget);
        headerLable->setObjectName(QString::fromUtf8("headerLable"));

        header->addWidget(headerLable);

        userButton = new QPushButton(horizontalLayoutWidget);
        userButton->setObjectName(QString::fromUtf8("userButton"));

        header->addWidget(userButton);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        header->addWidget(label_3);

        searchInput = new QLineEdit(horizontalLayoutWidget);
        searchInput->setObjectName(QString::fromUtf8("searchInput"));

        header->addWidget(searchInput);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        header->addWidget(label_4);

        searchInput2 = new QLineEdit(horizontalLayoutWidget);
        searchInput2->setObjectName(QString::fromUtf8("searchInput2"));

        header->addWidget(searchInput2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        header->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        header->addWidget(pushButton_2);

        footer = new QLabel(mainWindow);
        footer->setObjectName(QString::fromUtf8("footer"));
        footer->setGeometry(QRect(-20, 400, 971, 111));
        footer->setPixmap(QPixmap(QString::fromUtf8(":/assets/footer.png")));
        buy5 = new QPushButton(mainWindow);
        buy5->setObjectName(QString::fromUtf8("buy5"));
        buy5->setGeometry(QRect(840, 240, 89, 21));
        pageSum = new QLabel(mainWindow);
        pageSum->setObjectName(QString::fromUtf8("pageSum"));
        pageSum->setGeometry(QRect(610, 374, 72, 21));
        buy2 = new QPushButton(mainWindow);
        buy2->setObjectName(QString::fromUtf8("buy2"));
        buy2->setGeometry(QRect(840, 120, 89, 21));
        buy4 = new QPushButton(mainWindow);
        buy4->setObjectName(QString::fromUtf8("buy4"));
        buy4->setGeometry(QRect(840, 200, 89, 21));
        buy6 = new QPushButton(mainWindow);
        buy6->setObjectName(QString::fromUtf8("buy6"));
        buy6->setGeometry(QRect(840, 280, 89, 20));
        buy7 = new QPushButton(mainWindow);
        buy7->setObjectName(QString::fromUtf8("buy7"));
        buy7->setGeometry(QRect(840, 320, 89, 21));
        clothTable = new QTableWidget(mainWindow);
        if (clothTable->columnCount() < 9)
            clothTable->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        clothTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        clothTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        clothTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        clothTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        clothTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        clothTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        clothTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        clothTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        clothTable->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        if (clothTable->rowCount() < 7)
            clothTable->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        clothTable->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        clothTable->setVerticalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        clothTable->setVerticalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        clothTable->setVerticalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        clothTable->setVerticalHeaderItem(4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        clothTable->setVerticalHeaderItem(5, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        clothTable->setVerticalHeaderItem(6, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        clothTable->setItem(0, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        clothTable->setItem(0, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        clothTable->setItem(0, 2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        clothTable->setItem(0, 3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignCenter);
        clothTable->setItem(0, 4, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignCenter);
        clothTable->setItem(0, 5, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignCenter);
        clothTable->setItem(0, 6, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignCenter);
        clothTable->setItem(0, 7, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        clothTable->setItem(0, 8, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        clothTable->setItem(1, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        clothTable->setItem(1, 1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignCenter);
        clothTable->setItem(1, 2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignCenter);
        clothTable->setItem(1, 3, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setTextAlignment(Qt::AlignCenter);
        clothTable->setItem(1, 4, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setTextAlignment(Qt::AlignCenter);
        clothTable->setItem(1, 5, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignCenter);
        clothTable->setItem(1, 6, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setTextAlignment(Qt::AlignCenter);
        clothTable->setItem(1, 7, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        clothTable->setItem(1, 8, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        clothTable->setItem(2, 0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        clothTable->setItem(2, 1, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        clothTable->setItem(2, 2, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        clothTable->setItem(2, 3, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        clothTable->setItem(2, 4, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        clothTable->setItem(2, 5, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        clothTable->setItem(2, 6, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        clothTable->setItem(2, 7, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        clothTable->setItem(2, 8, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        clothTable->setItem(3, 0, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        clothTable->setItem(3, 1, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        clothTable->setItem(3, 2, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        clothTable->setItem(3, 3, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        clothTable->setItem(3, 4, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        clothTable->setItem(3, 5, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        clothTable->setItem(3, 6, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        clothTable->setItem(3, 7, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        clothTable->setItem(3, 8, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        clothTable->setItem(4, 0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        clothTable->setItem(4, 1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        clothTable->setItem(4, 2, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        clothTable->setItem(4, 3, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        clothTable->setItem(4, 4, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        clothTable->setItem(4, 5, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        clothTable->setItem(4, 6, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        clothTable->setItem(4, 7, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        clothTable->setItem(4, 8, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        clothTable->setItem(5, 0, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        clothTable->setItem(5, 1, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        clothTable->setItem(5, 2, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        clothTable->setItem(5, 3, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        clothTable->setItem(5, 4, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        clothTable->setItem(5, 5, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        clothTable->setItem(5, 6, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        clothTable->setItem(5, 7, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        clothTable->setItem(5, 8, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        clothTable->setItem(6, 0, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        clothTable->setItem(6, 1, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        clothTable->setItem(6, 2, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        clothTable->setItem(6, 3, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        clothTable->setItem(6, 4, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        clothTable->setItem(6, 5, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        clothTable->setItem(6, 6, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        clothTable->setItem(6, 7, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        clothTable->setItem(6, 8, __qtablewidgetitem78);
        clothTable->setObjectName(QString::fromUtf8("clothTable"));
        clothTable->setGeometry(QRect(-10, 40, 971, 321));
        clothTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        clothTable->setSelectionMode(QAbstractItemView::NoSelection);
        clothTable->setShowGrid(false);
        clothTable->setSortingEnabled(false);
        clothTable->setCornerButtonEnabled(true);
        clothTable->setRowCount(7);
        clothTable->horizontalHeader()->setMinimumSectionSize(100);
        clothTable->horizontalHeader()->setDefaultSectionSize(106);
        clothTable->verticalHeader()->setVisible(false);
        clothTable->verticalHeader()->setMinimumSectionSize(42);
        clothTable->verticalHeader()->setDefaultSectionSize(42);
        lastPage = new QPushButton(mainWindow);
        lastPage->setObjectName(QString::fromUtf8("lastPage"));
        lastPage->setGeometry(QRect(690, 370, 71, 31));
        buy1 = new QPushButton(mainWindow);
        buy1->setObjectName(QString::fromUtf8("buy1"));
        buy1->setGeometry(QRect(840, 80, 89, 21));
        nextPage = new QPushButton(mainWindow);
        nextPage->setObjectName(QString::fromUtf8("nextPage"));
        nextPage->setGeometry(QRect(760, 370, 61, 31));
        buy3 = new QPushButton(mainWindow);
        buy3->setObjectName(QString::fromUtf8("buy3"));
        buy3->setGeometry(QRect(840, 160, 89, 21));
        currentPage = new QLabel(mainWindow);
        currentPage->setObjectName(QString::fromUtf8("currentPage"));
        currentPage->setGeometry(QRect(830, 370, 101, 31));
        clothTable->raise();
        horizontalLayoutWidget->raise();
        footer->raise();
        buy5->raise();
        pageSum->raise();
        buy2->raise();
        buy4->raise();
        buy6->raise();
        buy7->raise();
        lastPage->raise();
        buy1->raise();
        nextPage->raise();
        buy3->raise();
        currentPage->raise();

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QWidget *mainWindow)
    {
        mainWindow->setWindowTitle(QCoreApplication::translate("mainWindow", "\347\224\265\345\225\206\344\272\244\346\230\223\345\271\263\345\217\260", nullptr));
        headerLable->setText(QCoreApplication::translate("mainWindow", "\344\272\262\347\210\261\347\232\204\347\224\250\346\210\267\357\274\214\350\257\267", nullptr));
        userButton->setText(QCoreApplication::translate("mainWindow", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("mainWindow", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        searchInput->setPlaceholderText(QCoreApplication::translate("mainWindow", "\350\276\223\345\205\245\345\225\206\345\223\201\345\220\215\347\247\260\350\277\233\350\241\214\346\243\200\347\264\242", nullptr));
        label_4->setText(QCoreApplication::translate("mainWindow", "\345\225\206\345\256\266\345\220\215\347\247\260", nullptr));
        searchInput2->setPlaceholderText(QCoreApplication::translate("mainWindow", "\350\276\223\345\205\245\345\225\206\345\256\266\345\220\215\347\247\260\350\277\233\350\241\214\346\243\200\347\264\242", nullptr));
        pushButton->setText(QCoreApplication::translate("mainWindow", "\346\243\200\347\264\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mainWindow", "\351\207\215\347\275\256", nullptr));
        footer->setText(QString());
        buy5->setText(QCoreApplication::translate("mainWindow", "\350\264\255\344\271\260", nullptr));
        pageSum->setText(QCoreApplication::translate("mainWindow", "\345\205\261\350\256\241 1 \351\241\265", nullptr));
        buy2->setText(QCoreApplication::translate("mainWindow", "\350\264\255\344\271\260", nullptr));
        buy4->setText(QCoreApplication::translate("mainWindow", "\350\264\255\344\271\260", nullptr));
        buy6->setText(QCoreApplication::translate("mainWindow", "\350\264\255\344\271\260", nullptr));
        buy7->setText(QCoreApplication::translate("mainWindow", "\350\264\255\344\271\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem = clothTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("mainWindow", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = clothTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("mainWindow", "\345\225\206\345\223\201\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = clothTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("mainWindow", "\345\225\206\345\223\201\346\217\217\350\277\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = clothTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("mainWindow", "\345\225\206\345\256\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = clothTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("mainWindow", "\346\233\264\345\244\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = clothTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("mainWindow", "\345\216\237\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = clothTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("mainWindow", "\345\211\251\344\275\231\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = clothTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("mainWindow", "\347\216\260\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = clothTable->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("mainWindow", "\346\223\215\344\275\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = clothTable->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("mainWindow", "line1", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = clothTable->verticalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("mainWindow", "line2", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = clothTable->verticalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("mainWindow", "line3", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = clothTable->verticalHeaderItem(3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("mainWindow", "line4", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = clothTable->verticalHeaderItem(4);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("mainWindow", "line5", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = clothTable->verticalHeaderItem(5);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("mainWindow", "line6", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = clothTable->verticalHeaderItem(6);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("mainWindow", "line7", nullptr));

        const bool __sortingEnabled = clothTable->isSortingEnabled();
        clothTable->setSortingEnabled(false);
        clothTable->setSortingEnabled(__sortingEnabled);

        lastPage->setText(QCoreApplication::translate("mainWindow", "\344\270\212\344\270\200\351\241\265", nullptr));
        buy1->setText(QCoreApplication::translate("mainWindow", "\350\264\255\344\271\260", nullptr));
        nextPage->setText(QCoreApplication::translate("mainWindow", "\344\270\213\344\270\200\351\241\265", nullptr));
        buy3->setText(QCoreApplication::translate("mainWindow", "\350\264\255\344\271\260", nullptr));
        currentPage->setText(QCoreApplication::translate("mainWindow", "\345\275\223\345\211\215\347\254\254 \351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
