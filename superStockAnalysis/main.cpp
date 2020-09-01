#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    qRegisterMetaType<QSqlQuery>("QSqlQuery");
    qRegisterMetaType<QList<QSqlRecord>>("QList<QSqlRecord>");

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
