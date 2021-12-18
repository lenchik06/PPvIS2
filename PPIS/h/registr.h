#ifndef REGISTR_H
#define REGISTR_H

#include <QMainWindow>
#include "polzovatel.h"

namespace Ui {
class registr;
}

class registr : public QMainWindow
{
    Q_OBJECT

public:
    explicit registr(QWidget *parent = nullptr);
    ~registr();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::registr *ui;
    polzovatel *nwin;
};

#endif // REGISTR_H
