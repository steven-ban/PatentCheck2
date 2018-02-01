#include "textdlg.h"
#include "ui_textdlg.h"

TextDlg::TextDlg(QWidget *parent) :
    QDialog(parent),
    ui2(new Ui::TextDlg)
{
    ui2->setupUi(this);
}

TextDlg::~TextDlg()
{
    delete ui2;
}
