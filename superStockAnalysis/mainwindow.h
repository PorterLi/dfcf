#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPalette>
#include <QLabel>
#include <QLineEdit>
#include <QSizePolicy>
#include <QThread>
#include <QRegExp>
#include <QSqlField>
#include <QTime>
#include <QFileDialog>
#include <QAxObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QSettings>
#include <QSqlDriver>

#include <QDir>

#include <QStandardItemModel>
#include <QItemSelectionModel>

#include <QSqlQueryModel>

#include "toolnetworktest.h"
#include "tabledatagather.h"
#include "freezetableview.h"
#include "dingvoice.h"
#include "usercheck.h"


//#include <QDebug>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    /*  功能函数 */
    void insert_userStockId(QString userName,QList<QString> stockIdList);

public slots:
    void handle_errorMsg(QString msg);

    void handle_netDelayMsg(QString msg);

    void handle_hostIPMsg(QString msg);

    void handle_dataGather(QString tab,QSqlQuery query,QString useTime);

    void handle_userLogin(QString loginName);

private slots:

    void on_tabWidget_currentChanged(int index);

    void on_toolBox_currentChanged(int index);

    void on_tool_column_changed();

    void on_dockWidget_visibilityChanged(bool visible);

    void on_actionRefresh_triggered();

    void on_actionMainTool_changed();

    void on_actionnet_triggered();


    void on_pushButtonStartTab0_clicked(bool checked);

    void on_pushButtonStopTab0_clicked(bool checked);



    void on_checkBoxTab0Voice_stateChanged(int arg1);

    void on_radioButtonTab4GX_clicked();

    void on_radioButtonTab4Daily_clicked();

    void on_actionCheckIn_triggered();

    void on_actionCheckOut_triggered();

    void on_actionChangeUser_triggered();

    void on_actionInputData_triggered();

signals:
    void networkRefresh();

    void tableUpdataInit();

    void tableRefresh(QString);

    void dingVoice();

    void tab0Regular(bool,int);


private:
    Ui::MainWindow *ui;
    /*  user info  */
    QString user;


    /* statusBar controls */
    QLabel *userName = nullptr;
    QLabel *hostIp = nullptr;
    QLabel *pingDelay = nullptr;
    QLineEdit *log = nullptr;
    QLineEdit *dataRefresh = nullptr;

    /*  model  */
    QSqlQueryModel *firstItemModel;
    QItemSelectionModel *firstSelectionModel;

    QStandardItemModel *secondItemModel;
    QItemSelectionModel *secondSelectionModel;

    QStandardItemModel *thirdItemModel;
    QItemSelectionModel *thirdSelectionModel;

    QStandardItemModel *fourthItemModel;
    QItemSelectionModel *fourthSelectionModel;

    QStandardItemModel *fifthItemModel;
    QItemSelectionModel *fifthSelectionModel;

    /*  lineedit  */
    QValidator *validatorTab0 = nullptr;
    QValidator *validatorTab1 = nullptr;
    QValidator *validatorTab4 = nullptr;

    /*  标志位   */
    bool tab0Voice = true;

    /* 自定义类对象 */
    ToolNetworkTest *networkTest = nullptr;
    QThread *netTestThread = nullptr;

    TableDataGather *tableUpdate = nullptr;
    QThread *dataGatherThread = nullptr;

    DingVoice *voice = nullptr;
    QThread *voiceThread = nullptr;


    /* 自定义窗口 */
    UserCheck *userWidget = nullptr;


};

#endif // MAINWINDOW_H
