#include "savanne.h"
#include "ui_savanne.h"
#include "mainwindow.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include <QPlainTextEdit>
#include <iostream>
#include <fstream>
using namespace std;

Savanne::Savanne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Savanne)
{
    ui->setupUi(this);
}

Savanne::~Savanne()
{
    delete ui;
}

void Savanne::on_buttonBox_accepted()
{
    ofstream myfile;

    myfile.open ("data.txt", ios::out | ios::app);

      myfile << "NEW MEASUREMENT SAVANNE\n";

      myfile << "Sample-ID: " ;
      std::string current_locale_text = (ui->lineSample->text().toLocal8Bit().constData());
      myfile << current_locale_text;
      myfile << " \n" ;

      myfile << "Animal-name: " ;
      current_locale_text = (ui->lineAnimal->text().toLocal8Bit().constData());
      myfile << current_locale_text;
      myfile << " \n" ;

      myfile << "Number: " ;
      current_locale_text = (ui->lineNumber->text().toLocal8Bit().constData());
      myfile << current_locale_text;
      myfile << " \n" ;

      myfile << "Location: " ;
      current_locale_text = (ui->lineLocation->text().toLocal8Bit().constData());
      myfile << current_locale_text;
      myfile << " \n" ;

      myfile << "- - - - - - - - - - -\n";
      myfile.close();

}

void Savanne::on_buttonBox_rejected()
{
    MainWindow main;
    main.show();
}

void Savanne::on_lineSample_editingFinished()
{

}
