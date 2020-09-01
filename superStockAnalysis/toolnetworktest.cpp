#include "toolnetworktest.h"


ToolNetworkTest::ToolNetworkTest(QObject *parent) : QObject(parent)
{
    mutex = new QMutex();

}


ToolNetworkTest::~ToolNetworkTest()
{
    if(pingProcess != nullptr){
        delete pingProcess;
    }

    if(testTimer != nullptr){
        delete testTimer;
    }

    mutex->unlock();
    delete mutex;
}

/******************* private function ********************/

/**
 * @brief ToolNetworkTest::HostIP
 * @return
 * @function 获取ZeroTier 局域网IP
 */
QString ToolNetworkTest::HostIP()
{
    QHostInfo hostInfo = QHostInfo::fromName(QHostInfo::localHostName());
    QList<QHostAddress> addList = hostInfo.addresses();
    QString hostIP = QString("0.0.0.0");
    for(int i = 0;i<addList.length();i++){
        bool t = addList.at(i).isInSubnet(QHostAddress(QString("10.147.18.197")),24);
        if(t){
            return addList.at(i).toString();
        }else if(addList.at(i).protocol() == QAbstractSocket::IPv4Protocol){
            hostIP = addList.at(i).toString();
        }
    }
    return hostIP;
}

void ToolNetworkTest::onceTest()
{
    if(mutex->tryLock(100)){
        if(pingProcess == nullptr){
            pingProcess = new QProcess(this);
            connect(pingProcess,SIGNAL(readyReadStandardOutput()),this,SLOT(handleProcessMsg()));
        }
        pingProcess->start(QString("ping 10.147.18.197 -n 1 -i 2"));
        if(pingProcess->waitForFinished(delay)){
            //fine
            ;
        }else{
            pingProcess->terminate();
            if(pingProcess->waitForFinished(3000)){
                emit NetworkErrorMsg(QString("网络超时，无法连接至服务器!"));
            }else{
                emit NetworkErrorMsg(QString("网络超时，无法连接至服务器!QProcess超时"));
            }
            emit NetworkDelayMsg(QString("1000ms"));
        }
        emit NetworkHostIPMsg(this->HostIP());
        mutex->unlock();
    }
}


/************************* slot *******************/

/**
 * @brief ToolNetworkTest::NetworkRefresh
 * @function 刷新，一次更新。
 */
void ToolNetworkTest::NetworkRefresh()
{
    if(init == false){
        /*  initial  */
        testTimer = new QTimer(this);
        connect(testTimer,SIGNAL(timeout()),this,SLOT(onceTest()));
        this->onceTest();
        testTimer->start(delay);
        init = true;
    }else{
        /*  refresh  */
        this->onceTest();
    }
}

void ToolNetworkTest::handleProcessMsg()
{
    static bool flag = false;
    QByteArray qba = pingProcess->readAllStandardOutput();
    QTextCodec* pTextCodec = QTextCodec::codecForName("System");
    QString recv = pTextCodec->toUnicode(qba);
    QString recv_str;
    if(recv.contains(QString("平均"))){
        recv_str = QString("平均 = ");
    }else{
        recv_str = QString("Average = ");
    }
    QStringList recv_list = recv.split(recv_str);
    if(recv_list.length() > 1){
        QString delay_str = recv_list.at(1);
        delay_str.remove(QRegExp("\\r\\n"));
        emit NetworkDelayMsg(delay_str);
        int temp_delay = delay_str.split(QString("ms")).at(0).toInt();
        if(temp_delay < 100 && flag == false){
            emit NetworkErrorMsg(QString("网络状态良好!"));
            flag = true;
        }else if(temp_delay < 200 && flag == false){
            emit NetworkErrorMsg(QString("网络状态较好!"));
            flag = true;
        }else{
            emit NetworkErrorMsg(QString("已连接服务器!"));
            flag = true;
        }
    }
}
