#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QSettings>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    textDlg = new TextDlg(this);
    textDlg->hide();

    QSettings setting("SIPO-HN", "PatentCheck2");

    connect(ui->actionSettings_2, SIGNAL(triggered()), this, SLOT(showSettings()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(check()));

}

void MainWindow::check(){


    // 生成通知书
    textDlg->show();

}

void MainWindow::showSettings(){
    ui->stackedWidget->setCurrentIndex(1);  // 0 is input widget, 1 is settings widget
    return;

}

MainWindow::~MainWindow()
{
    delete ui;
}
