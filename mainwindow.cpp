#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QSplashScreen>
#include <QTimer>

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

void MainWindow::on_options_clicked()
{
    qDebug() << "Options Dialog triggered";

    optDLG.setModal(true);
    optDLG.exec();
}

void MainWindow::on_actionOptions_triggered()
{
    qDebug() << "Options Dialog triggered from actions menu";

    this->on_options_clicked();
}

void MainWindow::on_actionAbout_triggered()
{
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/resources/img/aboutSplash.jpg")); // splash picture
    splash->show();

    QTimer::singleShot(2500, splash,SLOT(close()));
}
