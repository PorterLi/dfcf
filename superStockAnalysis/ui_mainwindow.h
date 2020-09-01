/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionInputData;
    QAction *actionOutputData;
    QAction *actionsetMaxGxNum;
    QAction *actionCheckIn;
    QAction *actionCheckOut;
    QAction *actionChangeUser;
    QAction *actionSoftwareInfo;
    QAction *actionUserManual;
    QAction *actionPaint;
    QAction *actionInputExampleFile;
    QAction *actionSetGxMaxDay;
    QAction *actionSetServer;
    QAction *actionnet;
    QAction *tool_column;
    QAction *actionRefresh;
    QAction *actionMainTool;
    QAction *actionSetChime;
    QAction *actionSetBell;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_8;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *scrollArea_tab0;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_9;
    QTableView *tableView;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_10;
    QTableView *tableView_1;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView_2;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_11;
    QTableView *tableView_3;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_12;
    QTableView *tableView_4;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_7;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_6;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page;
    QFormLayout *formLayout;
    QCheckBox *checkBoxTab0Voice;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButtonStopTab0;
    QPushButton *pushButtonStartTab0;
    QLabel *label_2;
    QLineEdit *lineEditTab0Time;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFormLayout *formLayout_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QLineEdit *lineEditAddCondition;
    QPushButton *pushButton;
    QWidget *page_3;
    QWidget *page_5;
    QFormLayout *formLayout_3;
    QWidget *page_4;
    QFormLayout *formLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEditTab4Stockid;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonTab4GX;
    QRadioButton *radioButtonTab4Daily;
    QPushButton *pushButton_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(704, 500);
        MainWindow->setMinimumSize(QSize(700, 500));
        actionInputData = new QAction(MainWindow);
        actionInputData->setObjectName(QString::fromUtf8("actionInputData"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/input_data"), QSize(), QIcon::Normal, QIcon::Off);
        actionInputData->setIcon(icon);
        actionOutputData = new QAction(MainWindow);
        actionOutputData->setObjectName(QString::fromUtf8("actionOutputData"));
        actionOutputData->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/output_data"), QSize(), QIcon::Normal, QIcon::Off);
        actionOutputData->setIcon(icon1);
        actionsetMaxGxNum = new QAction(MainWindow);
        actionsetMaxGxNum->setObjectName(QString::fromUtf8("actionsetMaxGxNum"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/settings"), QSize(), QIcon::Normal, QIcon::Off);
        actionsetMaxGxNum->setIcon(icon2);
        actionCheckIn = new QAction(MainWindow);
        actionCheckIn->setObjectName(QString::fromUtf8("actionCheckIn"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/checkin"), QSize(), QIcon::Normal, QIcon::Off);
        actionCheckIn->setIcon(icon3);
        actionCheckOut = new QAction(MainWindow);
        actionCheckOut->setObjectName(QString::fromUtf8("actionCheckOut"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/checkout"), QSize(), QIcon::Normal, QIcon::Off);
        actionCheckOut->setIcon(icon4);
        actionChangeUser = new QAction(MainWindow);
        actionChangeUser->setObjectName(QString::fromUtf8("actionChangeUser"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/changeuser"), QSize(), QIcon::Normal, QIcon::Off);
        actionChangeUser->setIcon(icon5);
        actionSoftwareInfo = new QAction(MainWindow);
        actionSoftwareInfo->setObjectName(QString::fromUtf8("actionSoftwareInfo"));
        actionUserManual = new QAction(MainWindow);
        actionUserManual->setObjectName(QString::fromUtf8("actionUserManual"));
        actionPaint = new QAction(MainWindow);
        actionPaint->setObjectName(QString::fromUtf8("actionPaint"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/paint_black"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QString::fromUtf8(":/icon/paint_lightgray"), QSize(), QIcon::Active, QIcon::Off);
        icon6.addFile(QString::fromUtf8(":/icon/paint_black"), QSize(), QIcon::Active, QIcon::On);
        icon6.addFile(QString::fromUtf8(":/icon/paint_gray"), QSize(), QIcon::Selected, QIcon::Off);
        icon6.addFile(QString::fromUtf8(":/icon/paint_black"), QSize(), QIcon::Selected, QIcon::On);
        actionPaint->setIcon(icon6);
        actionInputExampleFile = new QAction(MainWindow);
        actionInputExampleFile->setObjectName(QString::fromUtf8("actionInputExampleFile"));
        actionSetGxMaxDay = new QAction(MainWindow);
        actionSetGxMaxDay->setObjectName(QString::fromUtf8("actionSetGxMaxDay"));
        actionSetServer = new QAction(MainWindow);
        actionSetServer->setObjectName(QString::fromUtf8("actionSetServer"));
        actionnet = new QAction(MainWindow);
        actionnet->setObjectName(QString::fromUtf8("actionnet"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/repair"), QSize(), QIcon::Normal, QIcon::Off);
        actionnet->setIcon(icon7);
        tool_column = new QAction(MainWindow);
        tool_column->setObjectName(QString::fromUtf8("tool_column"));
        tool_column->setCheckable(true);
        tool_column->setChecked(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/notselected"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QString::fromUtf8(":/icon/notselected"), QSize(), QIcon::Disabled, QIcon::Off);
        icon8.addFile(QString::fromUtf8(":/icon/notselected"), QSize(), QIcon::Active, QIcon::Off);
        icon8.addFile(QString::fromUtf8(":/icon/selected"), QSize(), QIcon::Active, QIcon::On);
        icon8.addFile(QString::fromUtf8(":/icon/notselected"), QSize(), QIcon::Selected, QIcon::Off);
        icon8.addFile(QString::fromUtf8(":/icon/selected"), QSize(), QIcon::Selected, QIcon::On);
        tool_column->setIcon(icon8);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QString::fromUtf8("actionRefresh"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icon/refreash"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh->setIcon(icon9);
        actionMainTool = new QAction(MainWindow);
        actionMainTool->setObjectName(QString::fromUtf8("actionMainTool"));
        actionMainTool->setCheckable(true);
        actionMainTool->setChecked(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/notselected"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QString::fromUtf8(":/icon/selected"), QSize(), QIcon::Normal, QIcon::On);
        actionMainTool->setIcon(icon10);
        actionSetChime = new QAction(MainWindow);
        actionSetChime->setObjectName(QString::fromUtf8("actionSetChime"));
        actionSetChime->setCheckable(true);
        actionSetChime->setIcon(icon10);
        actionSetBell = new QAction(MainWindow);
        actionSetBell->setObjectName(QString::fromUtf8("actionSetBell"));
        actionSetBell->setCheckable(true);
        actionSetBell->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_8 = new QVBoxLayout(centralWidget);
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(2, 4, 2, 4);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        scrollArea_tab0 = new QScrollArea(tab);
        scrollArea_tab0->setObjectName(QString::fromUtf8("scrollArea_tab0"));
        scrollArea_tab0->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 487, 380));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_9->setSpacing(2);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(3, 3, 3, 3);
        tableView = new QTableView(scrollAreaWidgetContents_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_9->addWidget(tableView);

        scrollArea_tab0->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_2->addWidget(scrollArea_tab0);

        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icon/tab_all"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon11, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        scrollArea_3 = new QScrollArea(tab_2);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 487, 380));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_10->setSpacing(2);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(3, 3, 3, 3);
        tableView_1 = new QTableView(scrollAreaWidgetContents_3);
        tableView_1->setObjectName(QString::fromUtf8("tableView_1"));

        verticalLayout_10->addWidget(tableView_1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_2->addWidget(scrollArea_3);

        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icon/tab_mostuse"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon12, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setSpacing(1);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        scrollArea_4 = new QScrollArea(tab_3);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 487, 380));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents_4);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 3, 3, 3);
        tableView_2 = new QTableView(scrollAreaWidgetContents_4);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));

        horizontalLayout->addWidget(tableView_2);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_3->addWidget(scrollArea_4);

        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icon/tab_personal"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon13, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_7 = new QVBoxLayout(tab_5);
        verticalLayout_7->setSpacing(1);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(2, 2, 2, 2);
        scrollArea_5 = new QScrollArea(tab_5);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 487, 380));
        verticalLayout_11 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_11->setSpacing(2);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(3, 3, 3, 3);
        tableView_3 = new QTableView(scrollAreaWidgetContents_5);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));

        verticalLayout_11->addWidget(tableView_3);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_7->addWidget(scrollArea_5);

        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icon/serching"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_5, icon14, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_4 = new QVBoxLayout(tab_4);
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(2, 2, 2, 2);
        scrollArea_6 = new QScrollArea(tab_4);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 487, 380));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_12->setSpacing(2);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(3, 3, 3, 3);
        tableView_4 = new QTableView(scrollAreaWidgetContents_6);
        tableView_4->setObjectName(QString::fromUtf8("tableView_4"));

        verticalLayout_12->addWidget(tableView_4);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_4->addWidget(scrollArea_6);

        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icon/tab_history"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_4, icon15, QString());

        verticalLayout_8->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 704, 23));
        menuBar->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(50);
        font.setStrikeOut(false);
        menuBar->setFont(font);
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        QIcon icon16;
        QString iconThemeName = QString::fromUtf8("save_red");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon16 = QIcon::fromTheme(iconThemeName);
        } else {
            icon16.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        menu->setIcon(icon16);
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_7 = new QMenu(menu_3);
        menu_7->setObjectName(QString::fromUtf8("menu_7"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        menu_6 = new QMenu(menuBar);
        menu_6->setObjectName(QString::fromUtf8("menu_6"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMinimumSize(QSize(0, 20));
        mainToolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(statusBar->sizePolicy().hasHeightForWidth());
        statusBar->setSizePolicy(sizePolicy);
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy1);
        dockWidget->setMinimumSize(QSize(180, 251));
        dockWidget->setMaximumSize(QSize(200, 524287));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icon/tool_column"), QSize(), QIcon::Normal, QIcon::Off);
        dockWidget->setWindowIcon(icon17);
        dockWidget->setFloating(false);
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        verticalLayout = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        toolBox = new QToolBox(dockWidgetContents_3);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMinimumSize(QSize(140, 0));
        QPalette palette;
        QBrush brush(QColor(167, 167, 167, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(181, 181, 181, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        toolBox->setPalette(palette);
        toolBox->setFrameShape(QFrame::Box);
        toolBox->setLineWidth(1);
        toolBox->setMidLineWidth(1);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 190, 241));
        formLayout = new QFormLayout(page);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(2);
        formLayout->setVerticalSpacing(2);
        formLayout->setContentsMargins(3, 3, 3, 3);
        checkBoxTab0Voice = new QCheckBox(page);
        checkBoxTab0Voice->setObjectName(QString::fromUtf8("checkBoxTab0Voice"));
        checkBoxTab0Voice->setChecked(true);

        formLayout->setWidget(0, QFormLayout::SpanningRole, checkBoxTab0Voice);

        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, pushButton_3);

        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, pushButton_2);

        pushButtonStopTab0 = new QPushButton(page);
        pushButtonStopTab0->setObjectName(QString::fromUtf8("pushButtonStopTab0"));
        pushButtonStopTab0->setEnabled(false);
        pushButtonStopTab0->setCheckable(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButtonStopTab0);

        pushButtonStartTab0 = new QPushButton(page);
        pushButtonStartTab0->setObjectName(QString::fromUtf8("pushButtonStartTab0"));
        pushButtonStartTab0->setCheckable(true);
        pushButtonStartTab0->setChecked(true);

        formLayout->setWidget(6, QFormLayout::LabelRole, pushButtonStartTab0);

        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_2);

        lineEditTab0Time = new QLineEdit(page);
        lineEditTab0Time->setObjectName(QString::fromUtf8("lineEditTab0Time"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditTab0Time);

        toolBox->addItem(page, icon11, QString::fromUtf8("\345\205\250\351\207\217\346\225\260\346\215\256\345\205\250\350\207\252\345\212\250"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 170, 241));
        verticalLayout_6 = new QVBoxLayout(page_2);
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(4, 4, 4, 4);
        scrollArea = new QScrollArea(page_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 160, 184));
        formLayout_2 = new QFormLayout(scrollAreaWidgetContents);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        radioButton_4 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, radioButton_4);

        radioButton_3 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, radioButton_3);

        radioButton_2 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, radioButton_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollArea);

        lineEditAddCondition = new QLineEdit(page_2);
        lineEditAddCondition->setObjectName(QString::fromUtf8("lineEditAddCondition"));

        verticalLayout_6->addWidget(lineEditAddCondition);

        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(114, 181, 137, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        pushButton->setPalette(palette1);

        verticalLayout_6->addWidget(pushButton);

        toolBox->addItem(page_2, icon12, QString::fromUtf8("\345\270\270\347\224\250\346\225\260\346\215\256\345\272\223"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 170, 241));
        toolBox->addItem(page_3, icon13, QString::fromUtf8("\344\270\252\344\272\272\346\225\260\346\215\256\345\272\223"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 170, 241));
        formLayout_3 = new QFormLayout(page_5);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        toolBox->addItem(page_5, icon14, QString::fromUtf8("\350\207\252\345\212\251\346\243\200\347\264\242"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 190, 241));
        formLayout_4 = new QFormLayout(page_4);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setHorizontalSpacing(2);
        formLayout_4->setContentsMargins(3, 3, 3, 3);
        groupBox = new QGroupBox(page_4);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(10, 10));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(3, 3, 5, 3);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEditTab4Stockid = new QLineEdit(groupBox);
        lineEditTab4Stockid->setObjectName(QString::fromUtf8("lineEditTab4Stockid"));

        horizontalLayout_3->addWidget(lineEditTab4Stockid);


        formLayout_4->setWidget(1, QFormLayout::LabelRole, groupBox);

        groupBox_2 = new QGroupBox(page_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(20, 20));
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButtonTab4GX = new QRadioButton(groupBox_2);
        radioButtonTab4GX->setObjectName(QString::fromUtf8("radioButtonTab4GX"));
        radioButtonTab4GX->setChecked(true);

        horizontalLayout_4->addWidget(radioButtonTab4GX);

        radioButtonTab4Daily = new QRadioButton(groupBox_2);
        radioButtonTab4Daily->setObjectName(QString::fromUtf8("radioButtonTab4Daily"));

        horizontalLayout_4->addWidget(radioButtonTab4Daily);


        formLayout_4->setWidget(2, QFormLayout::LabelRole, groupBox_2);

        pushButton_4 = new QPushButton(page_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        formLayout_4->setWidget(3, QFormLayout::SpanningRole, pushButton_4);

        toolBox->addItem(page_4, icon15, QString::fromUtf8("\345\216\206\345\217\262\346\225\260\346\215\256\346\237\245\347\234\213"));

        verticalLayout->addWidget(toolBox);

        dockWidget->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_6->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(actionInputData);
        menu->addAction(actionOutputData);
        menu_2->addAction(actionRefresh);
        menu_2->addAction(actionPaint);
        menu_2->addAction(actionnet);
        menu_3->addAction(actionsetMaxGxNum);
        menu_3->addAction(actionSetGxMaxDay);
        menu_3->addAction(actionSetServer);
        menu_3->addAction(menu_7->menuAction());
        menu_7->addAction(actionSetChime);
        menu_7->addAction(actionSetBell);
        menu_4->addAction(actionCheckIn);
        menu_4->addAction(actionCheckOut);
        menu_4->addAction(actionChangeUser);
        menu_5->addAction(actionSoftwareInfo);
        menu_5->addAction(actionUserManual);
        menu_5->addAction(actionInputExampleFile);
        menu_6->addAction(tool_column);
        menu_6->addAction(actionMainTool);
        mainToolBar->addAction(actionCheckIn);
        mainToolBar->addAction(actionCheckOut);
        mainToolBar->addAction(actionChangeUser);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionOutputData);
        mainToolBar->addAction(actionInputData);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionnet);
        mainToolBar->addAction(actionPaint);
        mainToolBar->addAction(actionRefresh);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionInputData->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245\346\225\260\346\215\256", nullptr));
        actionOutputData->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272\346\225\260\346\215\256", nullptr));
        actionsetMaxGxNum->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\234\200\345\244\247\351\207\221\345\217\211\351\227\264\351\232\224\346\225\260", nullptr));
        actionCheckIn->setText(QApplication::translate("MainWindow", "\347\231\273\351\231\206", nullptr));
        actionCheckOut->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\231\273\351\231\206", nullptr));
        actionChangeUser->setText(QApplication::translate("MainWindow", "\346\233\264\346\215\242\347\224\250\346\210\267", nullptr));
        actionSoftwareInfo->setText(QApplication::translate("MainWindow", "\350\275\257\344\273\266\347\211\210\346\234\254", nullptr));
        actionUserManual->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\346\211\213\345\206\214", nullptr));
        actionPaint->setText(QApplication::translate("MainWindow", "\347\273\230\345\233\276", nullptr));
        actionInputExampleFile->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245\350\202\241\347\245\250\346\225\260\346\215\256\347\244\272\344\276\213\346\226\207\344\273\266", nullptr));
        actionSetGxMaxDay->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\351\207\221\345\217\211\346\234\200\345\244\247\351\227\264\351\232\224\345\244\251\346\225\260", nullptr));
        actionSetServer->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\234\215\345\212\241\345\231\250\345\217\202\346\225\260", nullptr));
        actionnet->setText(QApplication::translate("MainWindow", "\347\275\221\347\273\234\344\277\256\345\244\215", nullptr));
#ifndef QT_NO_TOOLTIP
        actionnet->setToolTip(QApplication::translate("MainWindow", "\347\275\221\347\273\234\344\277\256\345\244\215", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionnet->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionnet->setWhatsThis(QApplication::translate("MainWindow", "\347\275\221\347\273\234\344\277\256\345\244\215", nullptr));
#endif // QT_NO_WHATSTHIS
        tool_column->setText(QApplication::translate("MainWindow", "\344\276\247\350\276\271\345\267\245\345\205\267\346\240\217", nullptr));
        actionRefresh->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\345\275\223\345\211\215\351\241\265\351\235\242", nullptr));
        actionRefresh->setIconText(QApplication::translate("MainWindow", "\345\210\267\346\226\260\345\275\223\345\211\215\351\241\265\351\235\242", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRefresh->setToolTip(QApplication::translate("MainWindow", "\345\210\267\346\226\260\345\275\223\345\211\215\351\241\265\351\235\242", nullptr));
#endif // QT_NO_TOOLTIP
        actionMainTool->setText(QApplication::translate("MainWindow", "\345\270\270\347\224\250\345\267\245\345\205\267\346\240\217", nullptr));
        actionSetChime->setText(QApplication::translate("MainWindow", "\347\274\226\351\222\237", nullptr));
        actionSetBell->setText(QApplication::translate("MainWindow", "\346\270\205\350\204\206\351\223\203\345\243\260", nullptr));
#ifndef QT_NO_TOOLTIP
        tableView->setToolTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\220\204\346\227\266\351\227\264\346\256\265\346\234\200\346\226\260\345\272\225\350\203\214\347\246\273\346\227\266\351\227\264", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tableView->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        tableView->setWhatsThis(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\220\204\346\227\266\351\227\264\346\256\265\346\234\200\346\226\260\345\272\225\350\203\214\347\246\273\346\227\266\351\227\264", nullptr));
#endif // QT_NO_WHATSTHIS
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\205\250\351\207\217\346\225\260\346\215\256\350\277\275\350\270\252", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\345\270\270\347\224\250\346\225\260\346\215\256\345\272\223", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\344\270\252\344\272\272\346\225\260\346\215\256\345\272\223", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\350\207\252\345\212\251\346\243\200\347\264\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\345\216\206\345\217\262\346\225\260\346\215\256\345\272\223", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        menu_7->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\217\220\351\206\222\351\237\263\351\242\221", nullptr));
        menu_4->setTitle(QApplication::translate("MainWindow", "\347\224\250\346\210\267", nullptr));
        menu_5->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        menu_6->setTitle(QApplication::translate("MainWindow", "\347\252\227\345\217\243", nullptr));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "\345\270\270\347\224\250\345\267\245\345\205\267", nullptr));
#ifndef QT_NO_TOOLTIP
        mainToolBar->setToolTip(QApplication::translate("MainWindow", "\345\270\270\347\224\250\345\267\245\345\205\267", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        mainToolBar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        mainToolBar->setWhatsThis(QApplication::translate("MainWindow", "\345\270\270\347\224\250\345\267\245\345\205\267", nullptr));
#endif // QT_NO_WHATSTHIS
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "\344\276\247\350\276\271\345\267\245\345\205\267\346\240\217", nullptr));
        checkBoxTab0Voice->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\345\220\257\345\212\250\345\243\260\351\237\263\351\242\204\350\255\246", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\205\250\351\203\250\346\234\252\350\257\273", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\205\250\351\203\250\345\267\262\350\257\273", nullptr));
        pushButtonStopTab0->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        pushButtonStartTab0->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\345\221\250\346\234\237", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditTab0Time->setToolTip(QApplication::translate("MainWindow", "\345\215\225\344\275\215\357\274\232\347\247\222", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lineEditTab0Time->setStatusTip(QApplication::translate("MainWindow", "\345\215\225\344\275\215\357\274\232\347\247\222", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        lineEditTab0Time->setWhatsThis(QApplication::translate("MainWindow", "\345\215\225\344\275\215\357\274\232\347\247\222", nullptr));
#endif // QT_NO_WHATSTHIS
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "\345\205\250\351\207\217\346\225\260\346\215\256\345\205\250\350\207\252\345\212\250", nullptr));
        radioButton_4->setText(QApplication::translate("MainWindow", "WDHT", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "DHTQ", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "HTQF", nullptr));
        lineEditAddCondition->setText(QString());
        lineEditAddCondition->setPlaceholderText(QApplication::translate("MainWindow", "WDTHQF", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\345\270\270\347\224\250\346\225\260\346\215\256\345\272\223", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\345\270\270\347\224\250\346\225\260\346\215\256\345\272\223", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "\344\270\252\344\272\272\346\225\260\346\215\256\345\272\223", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("MainWindow", "\350\207\252\345\212\251\346\243\200\347\264\242", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\350\202\241\347\245\250\344\273\243\347\240\201\357\274\232", nullptr));
        groupBox_2->setTitle(QString());
        radioButtonTab4GX->setText(QApplication::translate("MainWindow", "\345\272\225\350\203\214\347\246\273\346\225\260\346\215\256", nullptr));
        radioButtonTab4Daily->setText(QApplication::translate("MainWindow", "\346\227\245\347\272\277\346\225\260\346\215\256", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\346\243\200\347\264\242", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MainWindow", "\345\216\206\345\217\262\346\225\260\346\215\256\346\237\245\347\234\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
