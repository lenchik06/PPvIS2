#include "registr.h"
#include "ui_registr.h"

registr::registr(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::registr)
{
    ui->setupUi(this);
}

registr::~registr()
{
    delete ui;
}

void registr::on_pushButton_2_clicked()
{
    hide();
    nwin = new polzovatel;
    nwin->show();
}

