#include "polzovatel.h"
#include "ui_polzovatel.h"

polzovatel::polzovatel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::polzovatel)
{
    ui->setupUi(this);
}

polzovatel::~polzovatel()
{
    delete ui;
}


void polzovatel::on_pushButton_4_clicked()
{
    nWin = new napominanie;
    nWin->show();
}


void polzovatel::on_pushButton_2_clicked()
{
    hide();
    p1 = new trenirovki;
    p1->show();
}

