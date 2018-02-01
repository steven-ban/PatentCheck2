#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "textdlg.h"
#include "ui_textdlg.h"

#include <QMainWindow>
#include<QStringList>

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

    QStringList claimList;
    QStringList descriptionList;
    QStringList figureList;

    void initPatent();
    void checkClaims();
    void checkDesriptions();
    void checkFigures();

public slots:
    void showSettings();
    void check();

};

#endif // MAINWINDOW_H
