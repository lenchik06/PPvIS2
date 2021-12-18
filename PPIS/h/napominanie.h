#ifndef NAPOMINANIE_H
#define NAPOMINANIE_H

#include <QMainWindow>

namespace Ui {
class napominanie;
}

class napominanie : public QMainWindow
{
    Q_OBJECT

public:
    explicit napominanie(QWidget *parent = nullptr);
    ~napominanie();

private slots:


private:
    Ui::napominanie *ui;
};

#endif // NAPOMINANIE_H
