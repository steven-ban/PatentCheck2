#ifndef TEXTDLG_H
#define TEXTDLG_H

#include <QDialog>

namespace Ui {
class textDlg;
}

class textDlg : public QDialog
{
    Q_OBJECT

public:
    explicit textDlg(QWidget *parent = 0);
    ~textDlg();

private:
    Ui::textDlg *ui;
};

#endif // TEXTDLG_H
