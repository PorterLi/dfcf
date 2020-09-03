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

/************  slot  ****************/
/**
 * @brief UserCheck::on_lineEditPassword_returnPressed
 * 登陆密码输入enter的slot
 */
void UserCheck::on_lineEditPassword_returnPressed()
{
    on_pushButtonLogin_clicked();
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
        QString tempPassword(passwordMd5.result().toHex());
        QSqlQuery sqlquery(DB);
        QString sql("SELECT password FROM FinatialDB_Test.user_main where user_name = ':user' limit 1;");
        sql.replace(QString(":user"),loginName);
        sqlquery.prepare(sql);
        sqlquery.exec();
//        qDebug()<<sqlquery.lastQuery();
        int fieldNo = sqlquery.record().indexOf("password");
        QString passwordRecv;
        while(sqlquery.next()){
            passwordRecv = sqlquery.value(fieldNo).toString();
        }
        if(passwordRecv.isNull()){
            QMessageBox::warning(this, "warning", "用户名不存在！",QMessageBox::Ok,QMessageBox::NoButton);
            qDebug()<<passwordRecv;
        }else if (passwordRecv == tempPassword){
//            qDebug()<<passwordRecv;
//            qDebug()<<tempPassword;
            emit userLogined(loginName);
            this->hide();
            ui->lineEditUser->clear();
            ui->lineEditPassword->clear();
        }else{
            QMessageBox::warning(this, "warning", "密码不正确！",QMessageBox::Ok,QMessageBox::NoButton);
            qDebug()<<passwordRecv;
            qDebug()<<tempPassword;
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

        QString registName = ui->lineEditUserName2->text();
        QString registPasswordOne = ui->lineEditPassword2->text();
        QString registPasswordTwo = ui->lineEditPassword3->text();
        if(registPasswordOne != registPasswordTwo){
            QMessageBox::warning(this, "warning", "两次输入密码不一致！请重新输入",QMessageBox::Ok,QMessageBox::NoButton);
            ui->lineEditPassword2->clear();
            ui->lineEditPassword3->clear();
            DB.close();
            return;
        }
        QCryptographicHash passwordMd5(QCryptographicHash::Md5);
        passwordMd5.addData(registPasswordOne.toLatin1());
        QString tempPassword(passwordMd5.result().toHex());

        QSqlQuery sqlquery(DB);
        QString sql("SELECT user_name FROM FinatialDB_Test.user_main where user_name = ':user' limit 1;");
        sql.replace(QString(":user"),registName);
        sqlquery.prepare(sql);
        sqlquery.exec();
        int fieldNo = sqlquery.record().indexOf("user_name");
        QString user_name;
        while(sqlquery.next()){
            user_name = sqlquery.value(fieldNo).toString();
            if(user_name == registName){
                QMessageBox::warning(this, "warning", "用户名已存在！",QMessageBox::Ok,QMessageBox::NoButton);
                ui->lineEditUserName2->clear();
                ui->lineEditPassword2->clear();
                ui->lineEditPassword3->clear();
                return;
            }
        }
        /*   用户名 和密码均可使用  */
        QString insertSql("insert into FinatialDB_Test.user_main (user_name,password) values (':userName',':password');");
        insertSql.replace(QString(":userName"),registName);
        insertSql.replace(QString(":password"),tempPassword);
        sqlquery.clear();
        sqlquery.prepare(insertSql);
        sqlquery.exec();
        DB.close();
        this->hide();
        ui->lineEditUserName2->clear();
        ui->lineEditPassword2->clear();
        ui->lineEditPassword3->clear();
        emit userLogined(registName);
    }
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



/**
 * @brief UserCheck::on_lineEditPassword3_returnPressed
 * 注册密码输入后的换行符slot
 */
void UserCheck::on_lineEditPassword3_returnPressed()
{
    on_pushButtonRegister_clicked();
}
