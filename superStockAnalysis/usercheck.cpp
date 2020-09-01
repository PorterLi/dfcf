#include "usercheck.h"
#include "ui_usercheck.h"

UserCheck::UserCheck(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserCheck)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":icon/tab_personal"));
    this->setWindowTitle(QString("登陆"));
    this->setWindowIconText(QString("登陆"));

    QPixmap temp1 = QPixmap::fromImage(QImage(":icon/user"));
    temp1.scaled(QSize(ui->labelUser->width(),ui->labelUser->height()), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->labelUser->setPixmap(temp1);
    ui->labelUser->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    ui->labelUser->setScaledContents(true);
    ui->lineEditUser->setPlaceholderText(QString("用户名"));
    QPixmap temp2 = QPixmap::fromImage(QImage(":icon/password"));
    temp2.scaled(QSize(ui->labelPassword->width(),ui->labelPassword->height()),Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->labelPassword->setPixmap(temp2);
    ui->labelPassword->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    ui->labelPassword->setScaledContents(true);
    ui->lineEditPassword->setPlaceholderText(QString("密码"));




}


UserCheck::~UserCheck()
{
    delete ui;
}

/**
 * @brief UserCheck::on_pushButton_clicked
 * 取消登陆
 */
void UserCheck::on_pushButton_clicked()
{
    this->close();
}

void UserCheck::on_pushButton_5_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void UserCheck::on_pushButton_2_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}
