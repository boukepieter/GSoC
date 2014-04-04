#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <QDialog>

namespace Ui {
class Hospital;
}

class Hospital : public QDialog
{
    Q_OBJECT

public:
    explicit Hospital(QWidget *parent = 0);
    ~Hospital();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Hospital *ui;
};

#endif // HOSPITAL_H
