#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "options.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::exit();
}

void MainWindow::on_pushButton_2_clicked()
{
    Options optDLG;
    optDLG.show();
}
