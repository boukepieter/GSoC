#include "hospital.h"
#include "ui_hospital.h"
#include "mainwindow.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include <QPlainTextEdit>
#include <iostream>
#include <fstream>
using namespace std;

Hospital::Hospital(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hospital)
{
    ui->setupUi(this);
}

Hospital::~Hospital()
{
    delete ui;
}

void Hospital::on_buttonBox_accepted()
{
    ofstream myfile;

    myfile.open ("data.txt", ios::out | ios::app);

      myfile << "NEW MEASUREMENT HOSPITAL\n";

      myfile << "Sample-ID: " ;
      std::string current_locale_text = (ui->lineSample->text().toLocal8Bit().constData());
      myfile << current_locale_text;
      myfile << " \n" ;

      myfile << "City: " ;
      current_locale_text = (ui->lineCity->text().toLocal8Bit().constData());
      myfile << current_locale_text;
      myfile << " \n" ;

      myfile << "Number of beds: " ;
      current_locale_text = (ui->lineNumber->text().toLocal8Bit().constData());
      myfile << current_locale_text;
      myfile << " \n" ;

      myfile << "Accessibility: " ;
      current_locale_text = (ui->lineAccessibility->text().toLocal8Bit().constData());
      myfile << current_locale_text;
      myfile << " \n" ;

      myfile << "- - - - - - - - - - -\n";
      myfile.close();

}

void Hospital::on_buttonBox_rejected()
{
    MainWindow main;
    main.show();
}
