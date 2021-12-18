#ifndef AVTORIZ_H
#define AVTORIZ_H

#include <QMainWindow>
#include "polzovatel.h"
#include <QString>

namespace Ui {
class avtoriz;
}

class avtoriz : public QMainWindow
{
    Q_OBJECT

public:
    explicit avtoriz(QWidget *parent = nullptr);
    ~avtoriz();

private slots:
    void on_pushButton_clicked();

private:
    QString login; // FIO
    QString password; // пароль
    QString gmail; // почта
    QString data; // рождения
    bool Sex; // пол
    QString Rost; // рост
    QString Massa; // вес
    QString Body; // телосложение
    int kollich; // желаемое колличество тренировок в неделю
    Ui::avtoriz *ui;
    polzovatel *nwin;
};

#endif // AVTORIZ_H
