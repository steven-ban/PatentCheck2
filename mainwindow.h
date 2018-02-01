#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "textdlg.h"
#include "ui_textdlg.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    TextDlg *textDlg;

public slots:
    void showSettings();
    void check();

};

#endif // MAINWINDOW_H
