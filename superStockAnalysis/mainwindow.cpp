#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/icon/logo"));
    this->setWindowIconText(QString("全景金融解析界面"));
    this->setWindowTitle(QString("全景金融解析界面"));

    /********** 提示 ***********/
    ui->lineEditTab0Time->setPlaceholderText(QString("单位：秒"));

    /* 自定义窗口  */
    userWidget = new UserCheck(nullptr);



    /************************* tableView显示设置 *********************/
    ui->tableView->setAlternatingRowColors(true);




    /************************ model 设置 *****************************/
    firstItemModel = new QSqlQueryModel(this);
    firstSelectionModel = new QItemSelectionModel(firstItemModel);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setModel(firstItemModel);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setMinimumWidth(50);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);//设置选中模式为选中行
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);//设置Ctrl Sheft选中多行

    secondItemModel = new QStandardItemModel(this);
    secondSelectionModel = new QItemSelectionModel(secondItemModel);
    ui->tableView_1->setModel(secondItemModel);
    ui->tableView_1->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView_1->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_1->setMinimumWidth(50);
    ui->tableView_1->setSelectionBehavior(QAbstractItemView::SelectRows);//设置选中模式为选中行
    ui->tableView_1->setSelectionMode(QAbstractItemView::ExtendedSelection);//设置Ctrl Sheft选中多行

    thirdItemModel = new QStandardItemModel(this);
    thirdSelectionModel = new QItemSelectionModel(thirdItemModel);
    ui->tableView_2->setModel(thirdItemModel);
    ui->tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_2->setMinimumWidth(50);
    ui->tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);//设置选中模式为选中行
    ui->tableView_2->setSelectionMode(QAbstractItemView::ExtendedSelection);//设置Ctrl Sheft选中多行

    fourthItemModel = new QStandardItemModel(this);
    fourthSelectionModel = new QItemSelectionModel(fourthItemModel);
    ui->tableView_3->setModel(fourthItemModel);
    ui->tableView_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView_3->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_3->setMinimumWidth(50);
    ui->tableView_3->setSelectionBehavior(QAbstractItemView::SelectRows);//设置选中模式为选中行
    ui->tableView_3->setSelectionMode(QAbstractItemView::ExtendedSelection);//设置Ctrl Sheft选中多行

    fifthItemModel = new QStandardItemModel(this);
    fifthSelectionModel = new QItemSelectionModel(fifthItemModel);
    ui->tableView_4->setModel(fifthItemModel);
    ui->tableView_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView_4->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_4->setMinimumWidth(50);
    ui->tableView_4->setSelectionBehavior(QAbstractItemView::SelectRows);//设置选中模式为选中行
    ui->tableView_4->setSelectionMode(QAbstractItemView::ExtendedSelection);//设置Ctrl Sheft选中多行

    /************************ 自定义tableView模块 ******************************/


    /************************ 底部状态栏 ******************************/
    /*  用户名称  */
    userName = new QLabel(this);
    userName->setText(QString(" User:") + QString("testUser") + QString("  "));
    ui->statusBar->addWidget(userName);
    /* 本机IP显示　*/
    hostIp = new QLabel(this);
    hostIp->setText(QString(" HostIP:127.0.0.1") + QString("  "));
    ui->statusBar->addWidget(hostIp);
    /* 与服务器网络延迟显示 */
    pingDelay = new QLabel(this);
    pingDelay->setText(QString(" Ping：ms  "));
    QPalette pingText(pingDelay->palette());
    pingText.setColor(QPalette::WindowText,Qt::red);
    pingText.setColor(QPalette::Window,QColor(QString("#49616e")));
    pingDelay->setAutoFillBackground(true);
    pingDelay->setPalette(pingText);
    ui->statusBar->addWidget(pingDelay);
    /*  输出警告/错误提示消息  */
    log = new QLineEdit(this);
    log->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Maximum));
    log->setReadOnly(true);
    log->setFrame(false);
    ui->statusBar->addWidget(log);
    log->setText(QString("未连接到服务器"));
    /*  数据更新的状态显示 */
    dataRefresh = new QLineEdit(this);
    dataRefresh->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed));
    dataRefresh->setReadOnly(true);
    dataRefresh->setFrame(false);
    ui->statusBar->addWidget(dataRefresh);
    dataRefresh->setText(QString("数据刷新中"));



    /*  按钮功能 输入限制  */
    QRegExp regxTab0("[0123456789]+$");
    validatorTab1 = new QRegExpValidator(regxTab0, ui->lineEditTab0Time);
    ui->lineEditTab0Time->setValidator(validatorTab1);

    QRegExp regxTab1("[WDHTQF]+$");
    validatorTab1 = new QRegExpValidator(regxTab1, ui->lineEditAddCondition);
    ui->lineEditAddCondition->setValidator(validatorTab1);

    QRegExp regxTab4("[0123456789]+$");
    validatorTab4 = new QRegExpValidator(regxTab4, ui->lineEditTab4Stockid);
    ui->lineEditTab4Stockid->setValidator(validatorTab4);

    /* 网络测试模块 */
    networkTest = new ToolNetworkTest(nullptr);
    netTestThread = new QThread(this);
    networkTest->moveToThread(netTestThread);
    netTestThread->start();
    connect(this,SIGNAL(networkRefresh(void)),networkTest,SLOT(NetworkRefresh(void)));
    connect(networkTest,SIGNAL(NetworkErrorMsg(QString)),this,SLOT(handle_errorMsg(QString)));
    connect(networkTest,SIGNAL(NetworkDelayMsg(QString)),this,SLOT(handle_netDelayMsg(QString)));
    connect(networkTest,SIGNAL(NetworkHostIPMsg(QString)),this,SLOT(handle_hostIPMsg(QString)));
    /* 开始测试网络 */
    emit networkRefresh();

    /* 数据更新模块 */
    tableUpdate = new TableDataGather(nullptr,QString("10.147.18.197"));
    dataGatherThread = new QThread(this);
    tableUpdate->moveToThread(dataGatherThread);
    dataGatherThread->start();
    connect(this,SIGNAL(tableUpdataInit()),tableUpdate,SLOT(init()));
    connect(this,SIGNAL(tableRefresh(QString)),tableUpdate,SLOT(refresh(QString)));
    connect(this,SIGNAL(tab0Regular(bool,int)),tableUpdate,SLOT(regular(bool,int)));
    connect(tableUpdate,SIGNAL(DataGather(QString,QSqlQuery,QString)),this,SLOT(handle_dataGather(QString,QSqlQuery,QString)));

    emit tableUpdataInit();
    emit tableRefresh(QString("all"));


    /* 声音模块 */
    voice = new DingVoice(nullptr);
    voiceThread = new QThread(this);
    voice->moveToThread(voiceThread);
    voiceThread->start();
    connect(this,SIGNAL(dingVoice()),voice,SLOT(dingVoice()));
    emit dingVoice();


    /* 用户模块 */
    user = QString("testUser");




}

MainWindow::~MainWindow()
{
    netTestThread->exit(0);
    netTestThread->terminate();
    networkTest->deleteLater();

    dataGatherThread->exit(0);
    dataGatherThread->terminate();
    dataGatherThread->deleteLater();

    voiceThread->exit(0);
    voiceThread->terminate();
    voiceThread->deleteLater();

    delete validatorTab1;

    delete userWidget;
    delete ui;
}

/*********************** private function ***********************************/




/****************************** public slot *************************************/

/**
 * @brief on_handle_errorMsg
 * @param msg
 * @function 错误消息显示
 */
void MainWindow::handle_errorMsg(QString msg)
{
    this->log->setText(msg);
}

/**
 * @brief handle_netDelayMsg
 * @param msg
 * @function 更新网络延迟
 */
void MainWindow::handle_netDelayMsg(QString msg)
{
    this->pingDelay->setText(QString(" Ping：") + msg + QString("  "));
    int temp_delay = msg.split(QString("ms")).at(0).toInt();
    /*  更新ping的颜色  */
    if(temp_delay < 20){
        QPalette pingText(pingDelay->palette());
        pingText.setColor(QPalette::WindowText,QColor(QString("#2ff22c")));
        pingDelay->setPalette(pingText);
    }else if (temp_delay < 50) {
        QPalette pingText(pingDelay->palette());
        pingText.setColor(QPalette::WindowText,QColor(QString("#98f335")));
        pingDelay->setPalette(pingText);
    }else if(temp_delay < 100){
        QPalette pingText(pingDelay->palette());
        pingText.setColor(QPalette::WindowText,QColor(QString("#dcf335")));
        pingDelay->setPalette(pingText);
    }else if(temp_delay < 200){
        QPalette pingText(pingDelay->palette());
        pingText.setColor(QPalette::WindowText,QColor(QString("#f3c535")));
        pingDelay->setPalette(pingText);
    }else if(temp_delay < 500){
        QPalette pingText(pingDelay->palette());
        pingText.setColor(QPalette::WindowText,QColor(QString("#f36735")));
        pingDelay->setPalette(pingText);
    }else{
        QPalette pingText(pingDelay->palette());
        pingText.setColor(QPalette::WindowText,QColor(QString("#ee2c1b")));
        pingDelay->setPalette(pingText);
    }

}



/**
 * @brief MainWindow::handle_dataGather
 * @param tab
 * @param queryData
 * @function 处理接收到的数据库库表数据
 */
void MainWindow::handle_dataGather(QString tab,QSqlQuery query,QString useTime)
{
    if(tab == QString("all")){
        firstItemModel->setQuery(query);
        QSqlRecord temp = query.record();
        int sort_column = temp.indexOf(QString("D"));
        qDebug()<<sort_column;
        firstItemModel->sort(sort_column,Qt::DescendingOrder);

    }
    QString temp = QString("Tab1") + QString("刷新用时：") + useTime;
    dataRefresh->setText(temp);
}


/******************** private slot *****************************/
/**
 * @brief MainWindow::handle_hostIPMsg
 * @param msg
 * @function 更新hostIP
 */
void MainWindow::handle_hostIPMsg(QString msg)
{
    QString newHostIP = QString(" HostIP:") + msg + QString("  ");
    if(newHostIP != this->hostIp->text()){
        this->hostIp->setText(newHostIP);
    }
}


/**
 * @brief MainWindow::on_tabWidget_currentChanged
 * @param index
 * @function update toolbox index
 */
void MainWindow::on_tabWidget_currentChanged(int index)
{
    ui->toolBox->setCurrentIndex(index);
}
/**
 * @brief MainWindow::on_toolBox_currentChanged
 * @param index
 * @functon update tabWidget index
 */
void MainWindow::on_toolBox_currentChanged(int index)
{
    ui->tabWidget->setCurrentIndex(index);
}

/**
 * @brief MainWindow::on_tool_column_changed
 * @function 是否显示侧边工具栏
 */
void MainWindow::on_tool_column_changed()
{
    if(ui->tool_column->isChecked()){
        if(!ui->dockWidget->isVisible()){
            ui->dockWidget->show();
        }
    }else{
        if(ui->dockWidget->isVisible()){
            ui->dockWidget->close();
        }
    }
}

/**
 * @brief MainWindow::on_actionMainTool_changed
 *
 * 是否显示主工具栏
 */
void MainWindow::on_actionMainTool_changed()
{
    if(ui->actionMainTool->isChecked()){
        if(!ui->mainToolBar->isVisible()){
            ui->mainToolBar->show();
        }
    }else{
        if(ui->mainToolBar->isVisible()){
            ui->mainToolBar->close();
        }
    }
}



/**
 * @brief MainWindow::on_dockWidget_visibilityChanged
 * @param dockWidget visible changed
 */
void MainWindow::on_dockWidget_visibilityChanged(bool visible)
{
    if(ui->tool_column->isChecked() != visible){
        ui->tool_column->setChecked(visible);
    }
}


/**
 * @brief MainWindow::on_actionnet_triggered
 * 网络修复工具
 */
void MainWindow::on_actionnet_triggered()
{
    QString path = QDir::currentPath();

    path.append(QString("/resource/repair.bat"));
    QProcess p;
    p.start("cmd.exe", QStringList() << "/c" << path);
    if(p.waitForFinished(20000)){
        this->log->setText(QString("success: 网络修复脚本已运行完毕。"));
    }else{
        p.terminate();
        p.kill();
        this->log->setText(QString("error:") + p.errorString());
    }
}

/**
 * @brief MainWindow::on_checkBoxTab0Voice_stateChanged
 * @param arg1
 * @function tab0 声音提示设置
 */
void MainWindow::on_checkBoxTab0Voice_stateChanged(int arg1)
{
    if(arg1 == 2){
        /*  有声音提示 */
        tab0Voice = true;
    }else{
        tab0Voice = false;
    }
}

/**
 * @brief MainWindow::on_radioButtonTab4GX_clicked
 *
 * tab4 gx选择按钮
 */
void MainWindow::on_radioButtonTab4GX_clicked()
{
    ui->radioButtonTab4GX->setChecked(true);
    ui->radioButtonTab4Daily->setChecked(false);
}


/**
 * @brief MainWindow::on_radioButtonTab4Daily_clicked
 *
 * tab4 daily 选择按钮
 */
void MainWindow::on_radioButtonTab4Daily_clicked()
{
    ui->radioButtonTab4GX->setChecked(false);
    ui->radioButtonTab4Daily->setChecked(true);
}






/********************  未确定  ****************************/
// SELECT stock_id,wk as 'W',k as 'D',m60k as 'H', m30k as 'T',m15k as 'Q',m5k as 'F' FROM FinatialDB_Test.stock_db_max_date;

void MainWindow::on_actionRefresh_triggered()
{
    int index = ui->tabWidget->currentIndex();

    switch (index) {
    case 0:
        emit tableRefresh(QString("all"));
        break;
    case 1:
        emit tableRefresh(QString("usually"));
        break;
    case 2:
        emit tableRefresh(QString("personal"));
        break;
    case 3:
        emit tableRefresh(QString("self-help"));
        break;

    case 4:
        emit tableRefresh(QString("history"));
        break;

    default:
        emit tableRefresh(QString("all"));
    }
}


/**
 * @brief MainWindow::on_pushButtonStartTab0_clicked
 * @param checked
 * tab0 中的启动按钮
 */
void MainWindow::on_pushButtonStartTab0_clicked(bool checked)
{
    ui->pushButtonStartTab0->setEnabled(checked);
    ui->pushButtonStartTab0->setChecked(checked);
    ui->pushButtonStopTab0->setEnabled(!checked);
    ui->pushButtonStopTab0->setChecked(!checked);

    QString time = ui->lineEditTab0Time->text();
    int t_time = time.toInt();
    if(t_time < 30){
        QMessageBox::information(this, "警告", "刷新时间间隔应大于30秒！\n",QMessageBox::Ok,QMessageBox::NoButton);
    }else{
        emit tab0Regular(true,t_time);
    }
    ui->lineEditTab0Time->setEnabled(false);

}

/**
 * @brief MainWindow::on_pushButtonStopTab0_clicked
 * @param checked
 * tab0 中停止按钮
 */
void MainWindow::on_pushButtonStopTab0_clicked(bool checked)
{
    ui->pushButtonStopTab0->setEnabled(checked);
    ui->pushButtonStopTab0->setChecked(checked);
    ui->pushButtonStartTab0->setEnabled(!checked);
    ui->pushButtonStartTab0->setChecked(!checked);

    emit tab0Regular(false,30);
    ui->lineEditTab0Time->setEnabled(true);
}


/**
 * @brief MainWindow::on_actionCheckIn_triggered
 * 登陆按钮
 */
void MainWindow::on_actionCheckIn_triggered()
{
    userWidget->show();
}
