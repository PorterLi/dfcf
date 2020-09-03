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

    /* 用户模块 */
    user = QString("testUser");

    /********** 提示 ***********/
    ui->lineEditTab0Time->setPlaceholderText(QString("单位：秒"));

    /* 自定义窗口  */
    userWidget = new UserCheck(this);
    userWidget->hide();
    connect(userWidget,SIGNAL(userLogined(QString)),this,SLOT(handle_userLogin(QString)));



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
    userName->setText(QString(" User:") + user + QString("  "));
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







}

MainWindow::~MainWindow()
{
    userWidget->close();
    delete userWidget;

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

void MainWindow::handle_userLogin(QString loginName)
{
    user = loginName;
    userName->setText(QString(" User:") + user + QString("  "));
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
 * @brief MainWindow::on_actionCheckIn_triggered
 * 登陆按钮
 */
void MainWindow::on_actionCheckIn_triggered()
{
    userWidget->show();
}

/**
 * @brief MainWindow::on_actionCheckOut_triggered
 * 推出登陆按钮
 *
 */
void MainWindow::on_actionCheckOut_triggered()
{
    handle_userLogin(QString("testUser"));
}

/**
 * @brief MainWindow::on_actionChangeUser_triggered
 * 切换用户
 */
void MainWindow::on_actionChangeUser_triggered()
{
    userWidget->show();
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
 * @brief MainWindow::on_actionInputData_triggered
 * 导入文件
 */
void MainWindow::on_actionInputData_triggered()
{
    QString filter = "excel文件(*.xlsx);;csv文件(*.csv)";
    QString curpath = QDir::currentPath();
    QString aFileName = QFileDialog::getOpenFileName(this,"导入股票代码", curpath, filter);
    if(aFileName.endsWith(QString(".csv"))){
        QFile txtFile(aFileName);
        if(txtFile.open(QIODevice::ReadOnly|QIODevice::Text)){
            QTextStream in(&txtFile);
            //QString line = in.readAll();
            QString line = in.readLine();
            QStringList lineList = line.split(',');
            if(lineList.contains(QString("代码")) || lineList.contains(QString("stock_id"))){
                int column = -1;
                if(lineList.contains(QString("代码"))){
                    column = lineList.indexOf(QString("代码"));
                }else if(lineList.contains(QString("stock_id"))){
                    column = lineList.indexOf(QString("stock_id"));
                }
                QStringList stockIdList;
                while(!in.atEnd() && column != -1){
                    line = in.readLine();
                    lineList = line.split(',');
                    QString stockId = lineList.at(column);
                    stockIdList.append(stockId);
                }
                if(stockIdList.length() > 0){
                    insert_userStockId(user,stockIdList);

                }
                QMessageBox::information(this,"完成","导入数据成功。导入完成：" + QString::number(stockIdList.length()) + "条！",QMessageBox::Ok,QMessageBox::NoButton);
                txtFile.close();
            }else{
                QMessageBox::warning(this,"文件内容格式错误","首行缺少名为‘代码’或‘stock_id’的列名！", QMessageBox::Ok,QMessageBox::NoButton);
                txtFile.close();
                return;
            }
        }else{
            QString errorStr = "打开文件失败:" + txtFile.errorString();
            QMessageBox::warning(this,"错误",errorStr.toUtf8(), QMessageBox::Ok,QMessageBox::NoButton);
        }
    }else if (aFileName.endsWith(QString(".xlsx"))){
        QAxObject excelFile("Excel.Application");
        if(excelFile.isNull()){
            QMessageBox::warning(this,"Excel库缺失","导入Excel库失败，请使用csv文件进入导入！", QMessageBox::Ok,QMessageBox::NoButton);
            return;
        }
        /*  是否可见excel */
        excelFile.setProperty("Visible",false);
        QAxObject *workbooks = excelFile.querySubObject("WorkBooks");
        workbooks->dynamicCall("Open (const QString&)",aFileName);
        if(workbooks->isNull()){
            QMessageBox::warning(this,"Excel打开失败","打开workbook失败，请使用csv文件进入导入！", QMessageBox::Ok,QMessageBox::NoButton);
            return;
        }
        QAxObject *curWorkBooks = excelFile.querySubObject("ActiveWorkBook");
        QAxObject *workSheets = curWorkBooks->querySubObject("WorkSheets");
        int sheetCount = workSheets->property("Count").toInt();
//        qDebug()<<sheetCount;
        QList<QString> stockIdList;
        QList<QString> stockIdBadList;
        for(int i = 1 ;i <= sheetCount;i++){
            QAxObject *workSheet = curWorkBooks->querySubObject("WorkSheets(int)",i);
            /* 获取 sheet的使用范围 */
            QAxObject *usedRange = workSheet->querySubObject("UsedRange");
            QAxObject *rows = usedRange->querySubObject("Rows");
            QAxObject *columns = usedRange->querySubObject("Columns");
            int intRows = rows->property("Count").toInt();
            int intColumns = columns->property("Count").toInt();
            int intRowStart = usedRange->property("Row").toInt();
            int intColumnStart = usedRange->property("Column").toInt();
            for(int j = intRowStart; j < intRowStart + intRows; j++){
                static int stockIdColumn = -1;
                if(j == intRowStart){
                    for(int k = intColumnStart; k < intColumnStart + intColumns; k++){
                        QAxObject *cell = workSheet->querySubObject("Cells(int,int)",j,k);
                        QString value = cell->dynamicCall("Value2()").toString();
                        if(value == QString("代码") or value == QString("stock_id")){
                            stockIdColumn = k;
                        }
                    }
                }else{
                    if(stockIdColumn == -1){
                        excelFile.dynamicCall("Quit()");
                        QMessageBox::warning(this,"文件内容格式错误","首行缺少名为‘代码’或‘stock_id’的列名！", QMessageBox::Ok,QMessageBox::NoButton);
                        return;
                    }
                    QAxObject *cell = workSheet->querySubObject("Cells(int,int)",j,stockIdColumn);
                    QString value = cell->dynamicCall("Value2()").toString();
                    bool ok = false;
                    value.toInt(&ok);
                    if(value.length() == 6 && ok){
                        stockIdList.append(value);
                    }else{
                        stockIdBadList.append(value);
                    }
                }
            }
        }
        /*  插入数据  */
        insert_userStockId(user,stockIdList);
        /*  退出excel */
        excelFile.dynamicCall("Quit()");
        /*  错误数据（未写入数据库原因说明） */
        if(stockIdBadList.length() > 0){
            QString badId = stockIdBadList.at(0);
            for(int l = 1; l < stockIdBadList.length(); l++){
                badId += ", " + stockIdBadList.at(l);
            }
            if(badId.length() > 60){
                badId = badId.left(60) + "...";
            }
            QMessageBox::information(this,"格式错误数据",badId, QMessageBox::Ok,QMessageBox::NoButton);
        }else{
            QMessageBox::information(this,"完成","数据读取完成,并已经写入到数据库中", QMessageBox::Ok,QMessageBox::NoButton);
        }
    }else{
        return;
    }
}


void MainWindow::insert_userStockId(QString userName,QList<QString> stockIdList)
{
    QSettings settings("./resource/DBSettings.ini",QSettings::IniFormat,this);
    QSqlDatabase  DB;
    if (QSqlDatabase::contains("insertStockId")) {
        DB = QSqlDatabase::database("insertStockId");
    } else {
        DB = QSqlDatabase::addDatabase("QMYSQL", "insertStockId");
    }
    DB.setHostName(settings.value("DBsettings/IP").toString());
    DB.setPort(settings.value("DBsettings/PORT").toInt());
    DB.setDatabaseName(settings.value("DBsettings/DBNAME").toString());
    DB.setUserName(settings.value("DBsettings/USER").toString());
    DB.setPassword(settings.value("DBsettings/PASSWORD").toString());
    if(!DB.open()){
        QMessageBox::warning(this, "错误", "Excel数据已读取，但无法连接远程服务器"+DB.lastError().text(),QMessageBox::Ok,QMessageBox::NoButton);
        DB.close();
    }else{
        QSqlQuery sqlquery(DB);
        QString sql("SELECT `index` FROM FinatialDB_Test.user_main where user_name = ':userName' limit 1;");
        sql.replace(QString(":userName"),userName);
        sqlquery.prepare(sql);
        sqlquery.exec();
        int fieldNo = sqlquery.record().indexOf("index");
        QString userIndex;
        while(sqlquery.next()){
            userIndex = sqlquery.value(fieldNo).toString();
        }
        sqlquery.clear();

        sqlquery.exec("START TRANSACTION");
        QString insertSql("replace into FinatialDB_Test.user_stock_id(`user_index`,`user_name`,`user_stock_id`) value (:userIndex,':userName',':stockId');");
        foreach(QString stockId,stockIdList){
            QString temp = insertSql;
            temp.replace(":userIndex",userIndex);
            temp.replace(":userName",userName);
            temp.replace(":stockId",stockId);
            sqlquery.prepare(temp);
            sqlquery.exec();
//            qDebug()<<sqlquery.lastQuery();
            sqlquery.clear();
        }
        sqlquery.exec("COMMIT");
        sqlquery.exec("ROLLBACK");
    }
}
