#ifndef TABLEDATAGATHER_H
#define TABLEDATAGATHER_H

#include <QObject>
#include <QSqlDatabase>
#include <QMap>
#include <QSqlQuery>
#include <QTimer>
#include <QSqlRecord>
#include <QMessageBox>
#include <QSqlError>
#include <QMutex>
//#include <QMutexLocker>

#include <QDebug>
#include <QTime>

class TableDataGather : public QObject
{
    Q_OBJECT
public:
    explicit TableDataGather(QObject *parent = nullptr);
    TableDataGather(QObject *parent = nullptr,
                    QString db_ip = QString("10.147.18.197"),
                    qint32 db_port = 3306,
                    QString db_name = QString("FinatialDB_Test"),
                    QString db_user = QString("root"),
                    QString db_password = QString("finatial*2020Year"));
    ~TableDataGather();


signals:
    void TableDataGatherError(QString,QString);

    void DataGather(QString, QSqlQuery, QString);

public slots:
    void init();

    void refresh(QString);

    void regular(bool,int);

private slots:
    void tab0Timeout();

private:
    QSqlDatabase  DB;

    QString db_ip;
    qint32 db_port;
    QString db_name;
    QString db_user;
    QString db_password;
    QMap<QString,QTimer*> timer_map;

    QString sql;

    QMutex *mutex = nullptr;
};

#endif // TABLEDATAGATHER_H
