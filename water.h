#ifndef WATER_H
#define WATER_H

#include <QDialog>

namespace Ui {
class Water;
}

class Water : public QDialog
{
    Q_OBJECT

public:
    explicit Water(QWidget *parent = 0);
    ~Water();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Water *ui;
};

#endif // WATER_H
