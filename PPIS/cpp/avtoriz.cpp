#include "avtoriz.h"
#include "ui_avtoriz.h"

avtoriz::avtoriz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::avtoriz)
{
    ui->setupUi(this);
}

avtoriz::~avtoriz()
{
    delete ui;
}

void avtoriz::on_pushButton_clicked()
{
    hide();
    nwin = new polzovatel;
    nwin->show();
}

