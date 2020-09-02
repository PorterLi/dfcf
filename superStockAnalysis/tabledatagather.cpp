#include "tabledatagather.h"

TableDataGather::TableDataGather(QObject *parent) : QObject(parent)
{
    mutex = new QMutex();
    sql = QString("SELECT stock_id,stock_name,wk as 'W',k as 'D',m60k as 'H',m30k as 'T',m15k as 'Q',m5k as 'F' FROM FinatialDB_Test.stock_db_max_date;");

}

TableDataGather::TableDataGather(QObject *parent,
                                 QString db_ip,
                                 qint32 db_port,
                                 QString db_name,
                                 QString db_user,
                                 QString db_password) : QObject (parent),db_ip(db_ip),db_port(db_port),db_name(db_name),db_user(db_user),db_password(db_password)
{
    mutex = new QMutex();
    sql = QString("SELECT stock_id as '代码',stock_name as '名称',wk as 'W',k as 'D',m60k as 'H',m30k as 'T',m15k as 'Q',m5k as 'F' FROM FinatialDB_Test.stock_db_max_date;");
}


TableDataGather::~TableDataGather()
{
    QMap<QString, QTimer*>::const_iterator i = timer_map.constBegin();
    while (i != timer_map.constEnd()) {
        QTimer *temp = i.value();
        if(temp->isActive()){
            temp->stop();
            delete temp;
        }
        ++i;
    }
    mutex->unlock();
    delete mutex;
}


/********************  public ***************************/


void TableDataGather::init()
{
    if(DB.isOpen()){
        DB.close();
    }
    DB = QSqlDatabase::addDatabase("QMYSQL","tab0"); //添加数据库驱动
    DB.setHostName(db_ip);
    DB.setPort(db_port);
    DB.setDatabaseName(db_name);
    DB.setUserName(db_user);
    DB.setPassword(db_password);
    if(!DB.open()){
        emit(TableDataGatherError(QString("init"),QString(DB.lastError().text())));
        DB.close();
    }else{
        ;
    }

}

void TableDataGather::refresh(QString tab)
{
    if(mutex->tryLock(100)){
        QTime temp = QTime::currentTime();
        QSqlQuery *sqlquery = new QSqlQuery(DB);
        sqlquery->prepare(sql);
        sqlquery->exec();
        QString getTime = QString::number(temp.elapsed()/1000.0) + QString("s");
        emit DataGather(tab,*sqlquery,getTime);
        delete sqlquery;
        mutex->unlock();
    }
}

/**
 * @brief TableDataGather::regular
 * @param state
 * @param ms
 * @function 周期性的刷新数据。可开始或停止
 */
void TableDataGather::regular(bool state,int ms)
{
    if(state == true){
        if(!timer_map.contains(QString("tab0"))){
            QTimer *tab0 = new QTimer(this);
            timer_map.insert(QString("tab0"),tab0);
            connect(tab0,SIGNAL(timeout()),this,SLOT(tab0Timeout()));
            tab0Timeout();
            tab0->setInterval(ms * 1000);
            tab0->start();
        }
        QTimer *temp = timer_map.value(QString("tab0"));

        if(!temp->isActive()){
            temp->setInterval(ms*1000);
            temp->start();
        }else{
            temp->stop();
            temp->setInterval(ms*1000);
            temp->start();
        }

    }else{
        if(timer_map.contains(QString("tab0"))){
            QTimer *temp = timer_map.value(QString("tab0"));
            temp->stop();
        }
    }
}

/************************** private slot *************************/

void TableDataGather::tab0Timeout()
{
    refresh(QString("tab0"));
}
