#include "napominanie.h"
#include "ui_napominanie.h"

napominanie::napominanie(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::napominanie)
{
    ui->setupUi(this);
}

napominanie::~napominanie()
{
    delete ui;
}



