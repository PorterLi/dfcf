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

    this->setWindowFlag(Qt::Window);



}

UserCheck::~UserCheck()
{
    this->close();
    delete ui;
}


void UserCheck::on_pushButtonExchenge1_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void UserCheck::on_pushButtonExchange2_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}

/**
 * @brief UserCheck::on_pushButtonLogin_clicked
 * @function login button slot
 */
void UserCheck::on_pushButtonLogin_clicked()
{
    // 初始化ini文件
//    QSettings settings("./resource/DBSettings.ini",QSettings::IniFormat,this);
//    settings.beginGroup("DBsettings");
//    settings.setValue("IP",QString("10.147.18.197"));
//    settings.setValue("PORT",3306);
//    settings.setValue("DBNAME",QString("FinatialDB_Test"));
//    settings.setValue("USER",QString("root"));
//    settings.setValue("PASSWORD",QString("finatial*2020Year"));
//    settings.endGroup();

    QSettings settings("./resource/DBSettings.ini",QSettings::IniFormat,this);
    QSqlDatabase  DB;
    if (QSqlDatabase::contains("login")) {
        DB = QSqlDatabase::database("login");
    } else {
        DB = QSqlDatabase::addDatabase("QMYSQL", "login");
    }
    DB.setHostName(settings.value("DBsettings/IP").toString());
    DB.setPort(settings.value("DBsettings/PORT").toInt());
    DB.setDatabaseName(settings.value("DBsettings/DBNAME").toString());
    DB.setUserName(settings.value("DBsettings/USER").toString());
    DB.setPassword(settings.value("DBsettings/PASSWORD").toString());
    if(!DB.open()){
        QMessageBox::warning(this, "错误", "无法连接远程服务器"+DB.lastError().text(),QMessageBox::Ok,QMessageBox::NoButton);
        DB.close();
    }else{
        QString loginName = ui->lineEditUser->text();
        QString loginPassword = ui->lineEditPassword->text();
        QCryptographicHash passwordMd5(QCryptographicHash::Md5);
        passwordMd5.addData(loginPassword.toLatin1());
        QString temp(passwordMd5.result().toHex());
        QSqlQuery sqlquery(DB);
        QString sql("SELECT password FROM FinatialDB_Test.user_main where user_name = ':userName' limit 1;");
        sqlquery.prepare(sql);
        sqlquery.bindValue(":userName","test");
        sqlquery.exec();
        QSqlRecord record;
        qDebug()<<sqlquery.record();
        while(sqlquery.next()){
            qDebug()<<sqlquery.record();
        }
        qDebug()<<record.value("password");
//        qDebug()<<sqlquery.
        int fieldNo = sqlquery.record().indexOf("password");
        while (sqlquery.next()) {
          QString country = sqlquery.value("password").toString();
            qDebug()<<country;
        }


        DB.close();
    }
}

/**
 * @brief UserCheck::on_pushButtonRegister_clicked
 * 注册按钮
 */
void UserCheck::on_pushButtonRegister_clicked()
{

}


/**
 * @brief UserCheck::on_pushButtonLoginCancel_clicked
 * 取消登陆
 */
void UserCheck::on_pushButtonLoginCancel_clicked()
{
    this->close();
}

/**
 * @brief UserCheck::on_pushButtonRegisterCancel_clicked
 * 取消注册
 */
void UserCheck::on_pushButtonRegisterCancel_clicked()
{
    this->close();
}


