#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide();
    nwin = new avtoriz;
    nwin->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    hide();
    Nwin = new registr;
    Nwin->show();
}

