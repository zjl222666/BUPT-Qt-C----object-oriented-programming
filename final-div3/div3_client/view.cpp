#include "view.h"

/* 订单页面 */
orderWindow::orderWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::orderWindow) {
    ui->setupUi(this);
}

orderWindow::~orderWindow() {
    delete ui;
}


/* 主界面 */
mainWindow::mainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainWindow) {
    ui->setupUi(this);
    this->buy[0] = this->ui->buy1;
    this->buy[1] = this->ui->buy2;
    this->buy[2] = this->ui->buy3;
    this->buy[3] = this->ui->buy4;
    this->buy[4] = this->ui->buy5;
    this->buy[5] = this->ui->buy6;
    this->buy[6] = this->ui->buy7;
    for(int i = 0; i < 7; i++) this->buy[i]->hide();
    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 8; j++)
            this->ui->clothTable->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    }
    for(int i = 0; i < 7; i++) {
        connect(this->buy[i], SIGNAL(clicked()), this, SLOT(buyButton()));
    }
}


mainWindow::~mainWindow() {
    delete ui;
}

void mainWindow::setPage(int totalPage, int curPage) {
    this->ui->pageSum->setText("共计" + QString::number(totalPage) + "页");
    this->ui->currentPage->setText("当前第 " + QString::number((curPage)) + " 页");
}
void mainWindow::on_nextPage_clicked()
{
    emit this->updataPage(1);
}

void mainWindow::on_lastPage_clicked()
{
    emit this->updataPage(-1);
}


void mainWindow::on_userButton_clicked() {
    emit this->userButton_click();
}

void mainWindow::loginUI(QString headerShow) {
    this->ui->headerLable->setText(QString("您好，"+headerShow));
    this->ui->userButton->setText("进入个人中心");
}

void mainWindow::logoutUI() {
    this->ui->headerLable->setText("亲爱的用户，请");
    this->ui->userButton->setText("登录");
}

void mainWindow::buttonShow(int num) {
    for(int i = 0; i < 7; i++) this->buy[i]->hide();
    for(int i = 0; i < num; i++) this->buy[i]->show();
}

void mainWindow::ComShowUpdata(vector<commodityStruct> newCom) {
    while(newCom.size() > 7) newCom.pop_back();
    this->buttonShow(newCom.size());
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 8; j++)
            this->ui->clothTable->item(i,j)->setText(" ");
    }
    for(int i = 0; i < (int)newCom.size(); i++) {
        commodity *tmp;
        if (QString(newCom[i].type)=="图书") tmp = new commodityBook (newCom[i]);
        else if (QString(newCom[i].type)=="食品") tmp = new commodityFood (newCom[i]);
        else tmp = new commodityCloth(newCom[i]);
        this->ui->clothTable->item(i, 0)->setText(QString(newCom[i].name));
        this->ui->clothTable->item(i, 1)->setText(QString(newCom[i].type));
        this->ui->clothTable->item(i, 2)->setText(QString(newCom[i].description));
        this->ui->clothTable->item(i, 3)->setText(QString(newCom[i].owner));
        this->ui->clothTable->item(i, 4)->setText(QString(tmp->getSuffix())+QString(newCom[i].extra));
        this->ui->clothTable->item(i, 5)->setText(QString::number(newCom[i].price));
        this->ui->clothTable->item(i, 6)->setText(QString::number(newCom[i].leftNum));
        this->ui->clothTable->item(i, 7)->setText(QString::number(tmp->getPrice()));
        delete tmp;
    }

}


void mainWindow::on_pushButton_clicked() {
    emit this->updataLimit(this->ui->searchInput->text(), this->ui->searchInput2->text());
}

void mainWindow::cleanSearch() {
    this->ui->searchInput->setText("");
    this->ui->searchInput2->setText("");
}

void mainWindow::on_pushButton_2_clicked() {
    this->cleanSearch();
    emit this->updataLimit(this->ui->searchInput->text(), this->ui->searchInput2->text());
}

void mainWindow::buyButton() {
    QString tmp = ((QPushButton*)sender())->objectName();
    int line = (int)tmp.toStdString()[3] - 49;
    QString comName = this->ui->clothTable->item(line, 0)->text();
    QString merchantsName = this->ui->clothTable->item(line, 3)->text();
    double price = this->ui->clothTable->item(line, 5)->text().toDouble();
    emit this->shopping(comName, merchantsName, price);
}

/* 登录界面 */
userLogin::userLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::userLogin) {
    ui->setupUi(this);
}

userLogin::~userLogin() {
    delete ui;
}

void userLogin::on_confirm_button_clicked() { // 确定登录按钮
    emit this->confirmLogin_click(this->ui->username_input->text(), this->ui->password_input->text());
}

void userLogin::cleanWindow() { // 窗口清洗
    this->ui->password_input->setText("");
    this->ui->username_input->setText("");
}

void userLogin::on_register_button_clicked() { // 注册按钮
    emit this->registerButton_click();
}


/* 注册界面 */
userRegister::userRegister(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::userRegister) {
    ui->setupUi(this);
}

userRegister::~userRegister() {
    delete ui;
}

void userRegister::cleanWindows() { // 窗口清洗
    this->ui->password_input->setText("");
    this->ui->password_input_2->setText("");
    this->ui->username_input->setText("");
}

void userRegister::on_register_button_clicked() { // 注册界面点击
/*    if (this->ui->password_input->text().contains(QChar(' ')) || this->ui->password_input_2->text().contains(QChar(' ')) || this->ui->username_input->text().contains(QChar(' ')) ) {
        QMessageBox::critical(NULL, "含有非法字符！", "请重新输入");
        return;
    } */
    if (this->ui->password_input->text() == "" || this->ui->password_input_2->text() == "" || this->ui->username_input->text() =="" ) {
        QMessageBox::critical(NULL, "请完整填写信息哦", "请重新输入");
        return;
    }
    if (this->ui->password_input->text() != this->ui->password_input_2->text()) {
        QMessageBox::critical(NULL, "两次密码不一致", "请重新输入");
        return;
    }
    emit this->handleRegister(this->ui->username_input->text(), this->ui->password_input->text(), this->ui->checkBox->checkState());
    this->cleanWindows();

}

/* 用户详细信息页面 */
userWindow::userWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::userWindow) {
    ui->setupUi(this);
    this->merchantEdit[0] = this->ui->edit_1;
    this->merchantEdit[1] = this->ui->edit_2;
    this->merchantEdit[2] = this->ui->edit_3;
    this->merchantEdit[3] = this->ui->edit_4;
    this->merchantEdit[4] = this->ui->edit_5;
    this->merchantEdit[5] = this->ui->edit_6;
    this->merchantEdit[6] = this->ui->edit_7;
    for (int i = 0; i < 7; i++) this->merchantEdit[i]->hide();
    for(int i = 0; i < 7; i++) connect(this->merchantEdit[i], SIGNAL(clicked()), this, SLOT(editCom()));

    this->trolleyComChoose[0] = this->ui->checkBox;
    this->trolleyComChoose[1] = this->ui->checkBox_2;
    this->trolleyComChoose[2] = this->ui->checkBox_3;
    this->trolleyComChoose[3] = this->ui->checkBox_4;
    this->trolleyComChoose[4] = this->ui->checkBox_5;
    this->trolleyComChoose[5] = this->ui->checkBox_6;
    this->trolleyComChoose[6] = this->ui->checkBox_7;
    for (int i = 0; i < 7; i++) this->trolleyComChoose[i]->hide();

    this->trolleyComNum[0] = this->ui->spinBox;
    this->trolleyComNum[1] = this->ui->spinBox_2;
    this->trolleyComNum[2] = this->ui->spinBox_3;
    this->trolleyComNum[3] = this->ui->spinBox_4;
    this->trolleyComNum[4] = this->ui->spinBox_5;
    this->trolleyComNum[5] = this->ui->spinBox_6;
    this->trolleyComNum[6] = this->ui->spinBox_7;
    for (int i = 0; i < 7; i++) this->trolleyComNum[i]->hide();

    this->watchComButton[0] = this->ui->watch1_1;
    this->watchComButton[1] = this->ui->watch1_2;
    this->watchComButton[2] = this->ui->watch1_3;
    this->watchComButton[3] = this->ui->watch1_4;
    this->watchComButton[4] = this->ui->watch1_5;
    this->watchComButton[5] = this->ui->watch1_6;
    this->watchComButton[6] = this->ui->watch1_7;
    for (int i = 0; i < 7; i++) this->watchComButton[i]->hide();
    for(int i = 0; i < 7; i++) connect(this->watchComButton[i], SIGNAL(clicked()), this, SLOT(watchCom()));

    this->deleteComButton[0] = this->ui->deleteCom1_1;
    this->deleteComButton[1] = this->ui->deleteCom1_2;
    this->deleteComButton[2] = this->ui->deleteCom1_3;
    this->deleteComButton[3] = this->ui->deleteCom1_4;
    this->deleteComButton[4] = this->ui->deleteCom1_5;
    this->deleteComButton[5] = this->ui->deleteCom1_6;
    this->deleteComButton[6] = this->ui->deleteCom1_7;
    for (int i = 0; i < 7; i++) this->deleteComButton[i]->hide();
    for(int i = 0; i < 7; i++) connect(this->deleteComButton[i], SIGNAL(clicked()), this, SLOT(deleteCom()));

    for(int i = 0; i < 7; i++)
        for(int j = 0; j < 7; j++)
            this->ui->clothTable->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

    for (int i = 0; i < 7; i++)
        for(int j = 0; j < 2; j++)
            this->ui->clothTable_2->item(i, j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

    this->setUnpaid(0);
}

userWindow::~userWindow() {
    delete ui;
}

void userWindow::editCom() {
    QString tmp = ((QPushButton*)sender())->objectName();
    int line = (int)tmp.toStdString()[5] - 49;
    emit this->sendEditCom(this->ui->clothTable->item(line, 0)->text());
}

void userWindow::on_lastPage_clicked() {
    emit this->updataUserPage(-1);
}

void userWindow::on_nextPage_clicked()
{
    emit this->updataUserPage(1);
}

void userWindow::setPage(int pageSum, int pageNow) {
    this->ui->pageNow->setText("当前第 "+QString::number(pageNow) + " 页");
    this->ui->pageSum->setText("总计 " + QString::number(pageSum) + " 页");
}

void userWindow::setUnpaid(bool isUnpaid) {
    if (isUnpaid) {
        this->ui->unPaid->setEnabled(true);
        this->ui->unPailLabel->setText("当前有一笔未支付订单");
    }
    else  {
        this->ui->unPaid->setEnabled(false);
        this->ui->unPailLabel->setText("当前有没有未支付订单");
    }
}


void userWindow::on_unPaidShow_clicked() {
    emit this->showUnpaid();
}


void userWindow::cleanWindow(user *nowUser) {
    this->ui->password1->setText("");
    this->ui->password2->setText("");
    this->ui->topUpNumber->setValue(0);
    this->ui->userLabel->setText(QString(nowUser->getName())+ "您好");
    this->ui->money->setText(QString::number(nowUser->getMoney(),10,10));
    this->isMerchant = nowUser->getUserType();
    if (!isMerchant) {
        this->ui->user_merchant->setCurrentWidget(this->ui->user);
        this->ui->user_merchant->setTabEnabled(1, 0);
    } else {
        this->ui->user_merchant->setTabEnabled(1, 1);
    }
}

void userWindow::updataTrolley(shoppingTrolley nowTrolley) {
    for (int i = 0; i < 7; i++) {
        this->deleteComButton[i]->hide();
        this->watchComButton[i]->hide();
        this->trolleyComNum[i]->hide();
        this->trolleyComChoose[i]->hide();
        this->trolleyComChoose[i]->setChecked(false);
        this->trolleyComNum[i]->setValue(1);
        this->ui->clothTable_2->item(i, 0)->setText(" ");
        this->ui->clothTable_2->item(i, 1)->setText(" ");
    }
    for (int i = 0; i < nowTrolley.getNum(); i++) {
        this->deleteComButton[i]->show();
        this->watchComButton[i]->show();
        this->trolleyComNum[i]->show();
        this->trolleyComChoose[i]->show();
        this->ui->clothTable_2->item(i, 0)->setText(nowTrolley.getComName(i));
        this->ui->clothTable_2->item(i, 1)->setText(nowTrolley.getMerName(i));
    }
}

void userWindow::deleteCom() {
    QString tmp = ((QPushButton*)sender())->objectName();
    int line = tmp.toStdString()[tmp.toStdString().length()-1] - 49;
    qDebug() <<"!" << line;
    emit this->sendDelCom(line);
}

void userWindow::watchCom() {
    QString tmp = ((QPushButton*)sender())->objectName();
    int line = tmp.toStdString()[tmp.toStdString().length()-1] - 49;
    qDebug() <<"!!" << line;
    emit this->sendWatchCom(this->ui->clothTable_2->item(line, 0)->text(), this->ui->clothTable_2->item(line, 1)->text());
}

void userWindow::on_changeConfirm_clicked() { // 修改密码确认点击
    if (this->ui->password1->text() == "" || this->ui->password2->text() == "") {
        QMessageBox::critical(NULL, "请完整填写信息哦", "请重新输入");
        return;
    }
    if (this->ui->password1->text() != this->ui->password2->text()) {
        QMessageBox::critical(NULL, "两次密码不一致", "请重新输入");
        return;
    }
    emit this->changePassword(this->ui->password1->text());
}

void userWindow::on_pushButton_2_clicked()
{
    emit this->logout();
}

void userWindow::on_topUpComfirm_clicked() {
    if(this->ui->topUpNumber->value() <= 0.01) {
        QMessageBox::warning(NULL, "提示", "充值的金额太少啦！请重新输入");
        return;
    }
    emit this->topUp(this->ui->topUpNumber->value());
}



void userWindow::ComShowUpdata(vector<commodityStruct> newCom) {
    for (int i = 0; i < 7; i++) this->merchantEdit[i]->hide();
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++)
            this->ui->clothTable->item(i, j)->setText(" ");
    }
    for (int i = 0; i < 7 && i < (int)newCom.size(); i++) {
        this->merchantEdit[i]->show();
        commodity *tmp;
        if (QString(newCom[i].type)=="图书") tmp = new commodityBook (newCom[i]);
        else if (QString(newCom[i].type)=="食品") tmp = new commodityFood (newCom[i]);
        else tmp = new commodityCloth(newCom[i]);
        this->ui->clothTable->item(i, 0)->setText(QString(newCom[i].name));
        this->ui->clothTable->item(i, 1)->setText(QString(newCom[i].type));
        this->ui->clothTable->item(i, 2)->setText(QString(newCom[i].description));
        this->ui->clothTable->item(i, 3)->setText(QString(tmp->getSuffix())+QString(newCom[i].extra));
        this->ui->clothTable->item(i, 4)->setText(QString::number(newCom[i].price));
        this->ui->clothTable->item(i, 5)->setText(QString::number(newCom[i].leftNum));
        this->ui->clothTable->item(i, 6)->setText(QString::number(newCom[i].discount));
        delete tmp;
    }
}

void userWindow::on_pushButton_3_clicked() {
    emit this->openNewCom();
}



void userWindow::on_pushButton_clicked() {
    emit this->setAllDiscount(this->ui->clothDis->value(), this->ui->bookDis->value(), this->ui->foodDis->value());
}


void userWindow::on_makeOrder_clicked() {
    vector<orderCom> v;
    v.clear();
    for (int i = 0; i < 7; i++) {
        if (this->trolleyComChoose[i]->isChecked()) {
            v.push_back(orderCom(this->ui->clothTable_2->item(i, 0)->text(), this->ui->clothTable_2->item(i, 1)->text(),0,this->trolleyComNum[i]->value()));
        }
    }
    emit this->sendCreateOrder(v);

}


/* 商品详情页 */

commodityWindow::commodityWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::commodityInfo) {
    ui->setupUi(this);
}

commodityWindow::~commodityWindow() {
    delete  this->ui;
}

void commodityWindow::cleanAddCom() {
    this->ui->name->setText("");
    this->ui->description->setText("");
    this->ui->price->setValue(0);
    this->ui->number->setValue(0);
    this->ui->add->setText("");
    this->ui->discount->setValue(0);
    this->ui->lineEdit->setText("");
}

void commodityWindow::setMode(int mode) {
    this->mode = mode;
    if (mode == 0) {
        this->ui->pushButton_4->setText("确认添加");
        this->ui->groupBox_4->setEnabled(true);
        this->ui->groupBox_4->setEnabled(true);
    } else if (mode == 1) {
        this->ui->pushButton_4->setText("确认修改");
        this->ui->groupBox_4->setEnabled(true);
        this->ui->name->setEnabled(false);
    } else {
        this->ui->pushButton_4->setText("关闭");
        this->ui->groupBox_4->setEnabled(false);
    }
}

void commodityWindow::updataComInfo(commodityStruct tmp) {
    this->ui->name->setText(QString(tmp.name));
    this->ui->description->setText(QString(tmp.description));
    this->ui->price->setValue(tmp.price);
    this->ui->number->setValue(tmp.leftNum);
    this->ui->add->setText(QString(tmp.extra));
    this->ui->discount->setValue(tmp.discount);
    this->ui->comboBox->setCurrentText(QString(tmp.type));
    this->ui->lineEdit->setText(QString::number( this->ui->price->value()*this->ui->discount->value()));
}



void commodityWindow::on_discount_valueChanged(int arg1)
{
    this->ui->lineEdit->setText(QString::number( this->ui->price->value()*arg1));
}

void commodityWindow::on_price_valueChanged(double arg1)
{
    this->ui->lineEdit->setText(QString::number( arg1*this->ui->discount->value()));
}


void commodityWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    if (arg1 == "食品") this->ui->addLable->setText("食品类型");
    else if (arg1 == "图书") this->ui->addLable->setText("出版社");
    else if (arg1 == "服装") this->ui->addLable->setText("品牌");
}

void commodityWindow::on_pushButton_4_clicked()
{
    if (this->ui->name->text() == "" || this->ui->add->text() == "") {
       QMessageBox::warning(NULL, "提示", "请注意将信息填写完整哦！");
       return;
    }
    if (this->ui->price->value() < 1 || this->ui->number->value() < 1) {
       QMessageBox::warning(NULL, "提示", "请正确填写数量和价格信息");
       return;
    }
    if (this->mode == 0) emit this->pushNewCom(this->ui->name->text(), this->ui->description->toPlainText(), this->ui->comboBox->currentText(), this->ui->add->text(), this->ui->price->value(), this->ui->number->value(), this->ui->discount->value());
    else if (this->mode == 1)emit this->sendUpdataCom(this->ui->name->text(), this->ui->description->toPlainText(), this->ui->comboBox->currentText(), this->ui->add->text(), this->ui->price->value(), this->ui->number->value(), this->ui->discount->value());
    else this->close();
    this->cleanAddCom();

}


/* 订单页 */

void orderWindow::updataOrderWindow(order nowOrder) {
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 4; j++) {
            this->ui->orderTable->item(i,j)->setText(" ");
        }
    for (int i = 0; i < nowOrder.getAllNum(); i++) {
        this->ui->orderTable->item(i, 0)->setText(nowOrder.getComName(i));
        this->ui->orderTable->item(i, 1)->setText(nowOrder.getComMerchant(i));
        this->ui->orderTable->item(i, 2)->setText(QString::number(nowOrder.getComPrice(i)));
        this->ui->orderTable->item(i, 3)->setText(QString::number(nowOrder.getComNum(i)));
    }
    this->ui->priceSum->setText("共计"+QString::number(nowOrder.getMoney())+ "元");
}

void orderWindow::on_pay_clicked()
{
    emit this->sendPay();
}
