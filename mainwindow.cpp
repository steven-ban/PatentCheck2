#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QSettings>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSettings setting("SIPO-HN", "PatentCheck2");

    connect(ui->actionSettings_2, SIGNAL(QAction::triggered()), this, SLOT(showSettings()));

}

void MainWindow::showSettings(){
    ui->stackedWidget->setCurrentIndex(1);  // 0 is input widget, 1 is settings widget
    return;

}

MainWindow::~MainWindow()
{
    delete ui;
}
