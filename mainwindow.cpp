#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QSettings>
#include<QMessageBox>
#include<QDebug>

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
    connect(ui->generateButton, SIGNAL(clicked()), this, SLOT(generateDecision()));

}

void MainWindow::initPatent(){
    // 使用正则表达式来分割权利要求，得到权利要求列表
    QRegularExpression claimRx("^(\\d+).", QRegularExpression::MultilineOption);
    this->claimList = ui->claimsTextEdit->toPlainText().split(claimRx);
    qDebug()<<"Claims: "<<ui->claimsTextEdit->toPlainText();
    qDebug()<<"Claim number: "<<this->claimList.count();

    // 使用正则表达式来分割说明书，得到说明书段落列表
    QRegularExpression descriptionRx("^\\[(\\d){4}\\]", QRegularExpression::MultilineOption);
    this->descriptionList = ui->descriptionTextEdit->toPlainText().split(descriptionRx);
    qDebug()<<"Description number: "<<this->descriptionList.count();

}

void MainWindow::checkClaims(){

}

void MainWindow::checkDesriptions(){

}

void MainWindow::checkFigures(){

}

void MainWindow::check(){
    // 如果内容全部为空
    if(ui->claimsTextEdit->toPlainText() == "" && \
            ui->descriptionTextEdit->toPlainText() == "" && \
            ui->drawingsTextEdit->toPlainText() == ""){
        int ret = QMessageBox::warning(this, tr("NO Content Input!"), \
                                                tr("No content is input.\nPlease paste your content here."), \
                                                QMessageBox::Cancel | QMessageBox::Ok);
        return;
    }

    // 从输入的文本中提取信息
    this->initPatent();




}

void MainWindow::generateDecision(){
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
