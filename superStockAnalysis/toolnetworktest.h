#ifndef TOOLNETWORKTEST_H
#define TOOLNETWORKTEST_H

#include <QObject>
#include <QHostAddress>
#include <QHostInfo>
#include <QProcess>
#include <QAbstractSocket>
#include <QTimer>
#include <QRegExp>
#include <QByteArray>
#include <QTextCodec>
#include <QMutex>
//#include <QMutexLocker>

//#include <QDebug>

class ToolNetworkTest : public QObject
{
    Q_OBJECT
public:
    explicit ToolNetworkTest(QObject *parent = nullptr);
    ~ToolNetworkTest();

private:
    //获取本地ZeroTier IP
    QString HostIP();





signals:
    void NetworkErrorMsg(QString);
    void NetworkDelayMsg(QString);
    void NetworkHostIPMsg(QString);


public slots:
    void NetworkRefresh();

private slots:
    void handleProcessMsg();

    void onceTest();

private:
    QTimer *testTimer = nullptr;
    QString hostIP;
    QString serverIP;
    qint32 delay = 2000; //1s

    QMutex *mutex;

    /* ping process */
    QProcess *pingProcess = nullptr;

    bool init = false;

};

#endif // TOOLNETWORKTEST_H
