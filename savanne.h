#ifndef SAVANNE_H
#define SAVANNE_H

#include <QDialog>

namespace Ui {
class Savanne;
}

class Savanne : public QDialog
{
    Q_OBJECT
    
public:
    explicit Savanne(QWidget *parent = 0);
    ~Savanne();
    
private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_lineSample_editingFinished();

private:
    Ui::Savanne *ui;
};

#endif // SAVANNE_H
