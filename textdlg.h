#ifndef TEXTDLG_H
#define TEXTDLG_H

#include <QDialog>

namespace Ui {
class TextDlg;
}

class TextDlg : public QDialog
{
    Q_OBJECT

public:
    explicit TextDlg(QWidget *parent = 0);
    ~TextDlg();

public slots:
    void changeText(QString);

private:
    Ui::TextDlg *ui2;

};

#endif // TEXTDLG_H
