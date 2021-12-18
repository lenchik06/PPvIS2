#ifndef POLZOVATEL_H
#define POLZOVATEL_H

#include <QMainWindow>
#include "napominanie.h"
#include "trenirovki.h"

namespace Ui {
class polzovatel;
}

class polzovatel : public QMainWindow
{
    Q_OBJECT

public:
    explicit polzovatel(QWidget *parent = nullptr);
    ~polzovatel();

private slots:

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::polzovatel *ui;
    napominanie *nWin;
    trenirovki *p1;
};

#endif // POLZOVATEL_H
