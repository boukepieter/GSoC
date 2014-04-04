#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "savanne.h"
#include "water.h"
#include "hospital.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::PushButtonFormHandler()
{
    if (ui->radioButtonSavanne->isChecked())
    {
    Savanne savanne;
    savanne.setModal(true);
    savanne.exec();
    }
    else if (ui->radioButtonWater->isChecked()) {
        Water water;
        water.setModal(true);
        water.exec();

    }
    else if (ui->radioButtonHospital->isChecked()) {
        Hospital hospital;
        hospital.setModal(true);
        hospital.exec();

    }
}
