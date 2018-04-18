#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "options.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();

    void on_options_clicked();

    void on_actionOptions_triggered();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    Options optDLG;
};

#endif // MAINWINDOW_H
