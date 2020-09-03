#ifndef USERCHECK_H
#define USERCHECK_H

#include <Qt>
#include <QWidget>
#include <QLineEdit>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QSettings>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QByteArray>
#include <QVariant>

#include <QFile>
#include <QtDebug>

namespace Ui {
class UserCheck;
}

class UserCheck : public QWidget
{
    Q_OBJECT

public:
    explicit UserCheck(QWidget *parent = nullptr);
    ~UserCheck();

private slots:
    void on_pushButtonExchenge1_clicked();

    void on_pushButtonExchange2_clicked();

    void on_pushButtonLogin_clicked();

    void on_pushButtonLoginCancel_clicked();

    void on_pushButtonRegisterCancel_clicked();

    void on_pushButtonRegister_clicked();

    void on_lineEditPassword_returnPressed();

    void on_lineEditPassword3_returnPressed();

signals:
    void userLogined(QString);

private:
    Ui::UserCheck *ui;
};

#endif // USERCHECK_H
