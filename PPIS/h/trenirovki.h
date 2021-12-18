#ifndef TRENIROVKI_H
#define TRENIROVKI_H

#include <QMainWindow>

namespace Ui {
class trenirovki;
}

class trenirovki : public QMainWindow
{
    Q_OBJECT

public:
    explicit trenirovki(QWidget *parent = nullptr);
    ~trenirovki();

private slots:
    void on_pushButton_6_clicked();

    void on_run_clicked();

    void on_lyagushka_clicked();

    void on_myach_clicked();

    void on_up_clicked();

    void on_press_clicked();

    void on_jim_clicked();

    void on_pushButton_3_clicked();

    void on_velik_clicked();

private:
    Ui::trenirovki *ui;
};

#endif // TRENIROVKI_H
