/********************************************************************************
** Form generated from reading UI file 'userWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *userLabel;
    QPushButton *pushButton_2;
    QTabWidget *user_merchant;
    QWidget *user;
    QGroupBox *passwordPart;
    QLineEdit *password1;
    QLineEdit *password2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *changeConfirm;
    QGroupBox *moneyPart;
    QLabel *label_4;
    QLabel *money;
    QPushButton *topUpComfirm;
    QLabel *label_6;
    QDoubleSpinBox *topUpNumber;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox;
    QWidget *merchants;
    QGroupBox *groupBox_3;
    QLabel *label_14;
    QSpinBox *clothDis;
    QLabel *label;
    QLabel *label_5;
    QSpinBox *foodDis;
    QLabel *label_11;
    QSpinBox *bookDis;
    QLabel *pageSum;
    QPushButton *lastPage;
    QLabel *pageNow;
    QPushButton *nextPage;
    QTableWidget *clothTable;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *edit_1;
    QPushButton *edit_2;
    QPushButton *edit_3;
    QPushButton *edit_4;
    QPushButton *edit_5;
    QPushButton *edit_6;
    QPushButton *edit_7;

    void setupUi(QWidget *userWindow)
    {
        if (userWindow->objectName().isEmpty())
            userWindow->setObjectName(QString::fromUtf8("userWindow"));
        userWindow->resize(905, 485);
        horizontalLayoutWidget = new QWidget(userWindow);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(590, 0, 311, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        userLabel = new QLabel(horizontalLayoutWidget);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));

        horizontalLayout->addWidget(userLabel);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        user_merchant = new QTabWidget(userWindow);
        user_merchant->setObjectName(QString::fromUtf8("user_merchant"));
        user_merchant->setGeometry(QRect(0, 10, 901, 471));
        user = new QWidget();
        user->setObjectName(QString::fromUtf8("user"));
        passwordPart = new QGroupBox(user);
        passwordPart->setObjectName(QString::fromUtf8("passwordPart"));
        passwordPart->setGeometry(QRect(0, 0, 241, 131));
        password1 = new QLineEdit(passwordPart);
        password1->setObjectName(QString::fromUtf8("password1"));
        password1->setGeometry(QRect(90, 30, 141, 23));
        password1->setEchoMode(QLineEdit::Password);
        password2 = new QLineEdit(passwordPart);
        password2->setObjectName(QString::fromUtf8("password2"));
        password2->setGeometry(QRect(90, 60, 141, 23));
        password2->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(passwordPart);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 91, 20));
        label_3 = new QLabel(passwordPart);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 60, 91, 20));
        changeConfirm = new QPushButton(passwordPart);
        changeConfirm->setObjectName(QString::fromUtf8("changeConfirm"));
        changeConfirm->setGeometry(QRect(60, 90, 89, 24));
        moneyPart = new QGroupBox(user);
        moneyPart->setObjectName(QString::fromUtf8("moneyPart"));
        moneyPart->setGeometry(QRect(0, 130, 241, 141));
        label_4 = new QLabel(moneyPart);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 40, 101, 16));
        money = new QLabel(moneyPart);
        money->setObjectName(QString::fromUtf8("money"));
        money->setGeometry(QRect(100, 40, 72, 15));
        topUpComfirm = new QPushButton(moneyPart);
        topUpComfirm->setObjectName(QString::fromUtf8("topUpComfirm"));
        topUpComfirm->setGeometry(QRect(60, 100, 89, 24));
        label_6 = new QLabel(moneyPart);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 70, 121, 16));
        topUpNumber = new QDoubleSpinBox(moneyPart);
        topUpNumber->setObjectName(QString::fromUtf8("topUpNumber"));
        topUpNumber->setGeometry(QRect(140, 60, 76, 31));
        topUpNumber->setMaximum(2500.000000000000000);
        groupBox_5 = new QGroupBox(user);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(250, 0, 641, 431));
        groupBox = new QGroupBox(user);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 270, 241, 161));
        user_merchant->addTab(user, QString());
        merchants = new QWidget();
        merchants->setObjectName(QString::fromUtf8("merchants"));
        groupBox_3 = new QGroupBox(merchants);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 0, 881, 441));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 30, 111, 31));
        clothDis = new QSpinBox(groupBox_3);
        clothDis->setObjectName(QString::fromUtf8("clothDis"));
        clothDis->setGeometry(QRect(170, 30, 71, 31));
        clothDis->setMinimum(1);
        clothDis->setMaximum(100);
        clothDis->setValue(100);
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 30, 41, 31));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(260, 30, 41, 31));
        foodDis = new QSpinBox(groupBox_3);
        foodDis->setObjectName(QString::fromUtf8("foodDis"));
        foodDis->setGeometry(QRect(300, 30, 71, 31));
        foodDis->setMinimum(1);
        foodDis->setMaximum(100);
        foodDis->setValue(100);
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(390, 30, 41, 31));
        bookDis = new QSpinBox(groupBox_3);
        bookDis->setObjectName(QString::fromUtf8("bookDis"));
        bookDis->setGeometry(QRect(430, 30, 71, 31));
        bookDis->setMinimum(1);
        bookDis->setMaximum(100);
        bookDis->setValue(100);
        pageSum = new QLabel(groupBox_3);
        pageSum->setObjectName(QString::fromUtf8("pageSum"));
        pageSum->setGeometry(QRect(260, 410, 72, 15));
        lastPage = new QPushButton(groupBox_3);
        lastPage->setObjectName(QString::fromUtf8("lastPage"));
        lastPage->setGeometry(QRect(340, 400, 71, 31));
        pageNow = new QLabel(groupBox_3);
        pageNow->setObjectName(QString::fromUtf8("pageNow"));
        pageNow->setGeometry(QRect(480, 410, 101, 20));
        nextPage = new QPushButton(groupBox_3);
        nextPage->setObjectName(QString::fromUtf8("nextPage"));
        nextPage->setGeometry(QRect(410, 400, 61, 31));
        clothTable = new QTableWidget(groupBox_3);
        if (clothTable->columnCount() < 8)
            clothTable->setColumnCount(8);
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
        if (clothTable->rowCount() < 7)
            clothTable->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        clothTable->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        clothTable->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        clothTable->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        clothTable->setVerticalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        clothTable->setVerticalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        clothTable->setVerticalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        clothTable->setVerticalHeaderItem(6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        clothTable->setItem(0, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        clothTable->setItem(0, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        clothTable->setItem(0, 2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        clothTable->setItem(0, 3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        clothTable->setItem(0, 4, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        clothTable->setItem(0, 5, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        clothTable->setItem(0, 6, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        clothTable->setItem(0, 7, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        clothTable->setItem(1, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        clothTable->setItem(1, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        clothTable->setItem(1, 2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        clothTable->setItem(1, 3, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        clothTable->setItem(1, 4, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        clothTable->setItem(1, 5, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        clothTable->setItem(1, 6, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        clothTable->setItem(1, 7, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        clothTable->setItem(2, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        clothTable->setItem(2, 1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        clothTable->setItem(2, 2, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        clothTable->setItem(2, 3, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        clothTable->setItem(2, 4, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        clothTable->setItem(2, 5, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        clothTable->setItem(2, 6, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        clothTable->setItem(2, 7, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        clothTable->setItem(3, 0, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        clothTable->setItem(3, 1, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        clothTable->setItem(3, 2, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        clothTable->setItem(3, 3, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        clothTable->setItem(3, 4, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        clothTable->setItem(3, 5, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        clothTable->setItem(3, 6, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        clothTable->setItem(3, 7, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        clothTable->setItem(4, 0, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        clothTable->setItem(4, 1, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        clothTable->setItem(4, 2, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        clothTable->setItem(4, 3, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        clothTable->setItem(4, 4, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        clothTable->setItem(4, 5, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        clothTable->setItem(4, 6, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        clothTable->setItem(4, 7, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        clothTable->setItem(5, 0, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        clothTable->setItem(5, 1, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        clothTable->setItem(5, 2, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        clothTable->setItem(5, 3, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        clothTable->setItem(5, 4, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        clothTable->setItem(5, 5, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        clothTable->setItem(5, 6, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        clothTable->setItem(5, 7, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        clothTable->setItem(6, 0, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        clothTable->setItem(6, 1, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        clothTable->setItem(6, 2, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        clothTable->setItem(6, 3, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        clothTable->setItem(6, 4, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        clothTable->setItem(6, 5, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        clothTable->setItem(6, 6, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        clothTable->setItem(6, 7, __qtablewidgetitem70);
        clothTable->setObjectName(QString::fromUtf8("clothTable"));
        clothTable->setGeometry(QRect(0, 60, 871, 331));
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
        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(520, 30, 89, 24));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(780, 30, 89, 24));
        edit_1 = new QPushButton(groupBox_3);
        edit_1->setObjectName(QString::fromUtf8("edit_1"));
        edit_1->setGeometry(QRect(750, 100, 89, 24));
        edit_2 = new QPushButton(groupBox_3);
        edit_2->setObjectName(QString::fromUtf8("edit_2"));
        edit_2->setGeometry(QRect(750, 140, 89, 24));
        edit_3 = new QPushButton(groupBox_3);
        edit_3->setObjectName(QString::fromUtf8("edit_3"));
        edit_3->setGeometry(QRect(750, 180, 89, 24));
        edit_4 = new QPushButton(groupBox_3);
        edit_4->setObjectName(QString::fromUtf8("edit_4"));
        edit_4->setGeometry(QRect(750, 220, 89, 24));
        edit_5 = new QPushButton(groupBox_3);
        edit_5->setObjectName(QString::fromUtf8("edit_5"));
        edit_5->setGeometry(QRect(750, 260, 89, 24));
        edit_6 = new QPushButton(groupBox_3);
        edit_6->setObjectName(QString::fromUtf8("edit_6"));
        edit_6->setGeometry(QRect(750, 300, 89, 24));
        edit_7 = new QPushButton(groupBox_3);
        edit_7->setObjectName(QString::fromUtf8("edit_7"));
        edit_7->setGeometry(QRect(750, 340, 89, 24));
        user_merchant->addTab(merchants, QString());
        user_merchant->raise();
        horizontalLayoutWidget->raise();

        retranslateUi(userWindow);

        user_merchant->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(userWindow);
    } // setupUi

    void retranslateUi(QWidget *userWindow)
    {
        userWindow->setWindowTitle(QCoreApplication::translate("userWindow", "\347\224\250\346\210\267\344\270\255\345\277\203", nullptr));
        userLabel->setText(QCoreApplication::translate("userWindow", "\346\254\242\350\277\216\346\202\250\357\274\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("userWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        passwordPart->setTitle(QCoreApplication::translate("userWindow", "\345\257\206\347\240\201\344\277\256\346\224\271", nullptr));
        label_2->setText(QCoreApplication::translate("userWindow", "\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("userWindow", "\345\206\215\346\254\241\350\276\223\345\205\245", nullptr));
        changeConfirm->setText(QCoreApplication::translate("userWindow", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        moneyPart->setTitle(QCoreApplication::translate("userWindow", "\350\264\246\346\210\267\344\275\231\351\242\235", nullptr));
        label_4->setText(QCoreApplication::translate("userWindow", "\345\275\223\345\211\215\344\275\231\351\242\235(\345\205\203\357\274\211", nullptr));
        money->setText(QCoreApplication::translate("userWindow", "TextLabel", nullptr));
        topUpComfirm->setText(QCoreApplication::translate("userWindow", "\347\241\256\350\256\244\345\205\205\345\200\274", nullptr));
        label_6->setText(QCoreApplication::translate("userWindow", "\350\276\223\345\205\245\345\205\205\345\200\274\351\207\221\351\242\235(\345\205\203)", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("userWindow", "\346\210\221\347\232\204\350\264\255\347\211\251\350\275\246", nullptr));
        groupBox->setTitle(QCoreApplication::translate("userWindow", "\346\210\221\347\232\204\350\256\242\345\215\225", nullptr));
        user_merchant->setTabText(user_merchant->indexOf(user), QCoreApplication::translate("userWindow", "\344\270\252\344\272\272\350\264\246\346\210\267\344\277\241\346\201\257", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("userWindow", "\346\210\221\347\232\204\345\225\206\345\223\201", nullptr));
        label_14->setText(QCoreApplication::translate("userWindow", "\347\273\237\344\270\200\350\256\276\347\275\256\346\212\230\346\211\243(%)", nullptr));
        label->setText(QCoreApplication::translate("userWindow", "\346\234\215\350\243\205", nullptr));
        label_5->setText(QCoreApplication::translate("userWindow", "\351\243\237\345\223\201", nullptr));
        label_11->setText(QCoreApplication::translate("userWindow", "\345\233\276\344\271\246", nullptr));
        pageSum->setText(QCoreApplication::translate("userWindow", "\345\205\261\350\256\241 1 \351\241\265", nullptr));
        lastPage->setText(QCoreApplication::translate("userWindow", "\344\270\212\344\270\200\351\241\265", nullptr));
        pageNow->setText(QCoreApplication::translate("userWindow", "\345\275\223\345\211\215\347\254\254 \351\241\265", nullptr));
        nextPage->setText(QCoreApplication::translate("userWindow", "\344\270\213\344\270\200\351\241\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem = clothTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("userWindow", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = clothTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("userWindow", "\345\225\206\345\223\201\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = clothTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("userWindow", "\345\225\206\345\223\201\346\217\217\350\277\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = clothTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("userWindow", "\346\233\264\345\244\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = clothTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("userWindow", "\345\216\237\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = clothTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("userWindow", "\345\211\251\344\275\231\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = clothTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("userWindow", "\346\212\230\346\211\243", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = clothTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("userWindow", "\346\223\215\344\275\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = clothTable->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("userWindow", "line1", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = clothTable->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("userWindow", "line2", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = clothTable->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("userWindow", "line3", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = clothTable->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("userWindow", "line4", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = clothTable->verticalHeaderItem(4);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("userWindow", "line5", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = clothTable->verticalHeaderItem(5);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("userWindow", "line6", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = clothTable->verticalHeaderItem(6);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("userWindow", "line7", nullptr));

        const bool __sortingEnabled = clothTable->isSortingEnabled();
        clothTable->setSortingEnabled(false);
        clothTable->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QCoreApplication::translate("userWindow", "\347\241\256\350\256\244\350\256\276\347\275\256", nullptr));
        pushButton_3->setText(QCoreApplication::translate("userWindow", "\346\267\273\345\212\240\345\225\206\345\223\201", nullptr));
        edit_1->setText(QCoreApplication::translate("userWindow", "\347\274\226\350\276\221", nullptr));
        edit_2->setText(QCoreApplication::translate("userWindow", "\347\274\226\350\276\221", nullptr));
        edit_3->setText(QCoreApplication::translate("userWindow", "\347\274\226\350\276\221", nullptr));
        edit_4->setText(QCoreApplication::translate("userWindow", "\347\274\226\350\276\221", nullptr));
        edit_5->setText(QCoreApplication::translate("userWindow", "\347\274\226\350\276\221", nullptr));
        edit_6->setText(QCoreApplication::translate("userWindow", "\347\274\226\350\276\221", nullptr));
        edit_7->setText(QCoreApplication::translate("userWindow", "\347\274\226\350\276\221", nullptr));
        user_merchant->setTabText(user_merchant->indexOf(merchants), QCoreApplication::translate("userWindow", "\345\225\206\346\210\267\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userWindow: public Ui_userWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
