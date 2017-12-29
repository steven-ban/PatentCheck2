#include "textdlg.h"
#include "ui_textdlg.h"

textDlg::textDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::textDlg)
{
    ui->setupUi(this);
}

textDlg::~textDlg()
{
    delete ui;
}
