#include "mainwindow.h"
#include <QApplication>
#include<QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator tran;
    tran.load(":/tran/zh-cn");
    a.installTranslator(&tran);

    MainWindow w;
    w.show();

    return a.exec();
}
