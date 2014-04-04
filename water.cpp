#include "water.h"
#include "ui_water.h"
#include "mainwindow.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include <QPlainTextEdit>
#include <iostream>
#include <fstream>
using namespace std;

Water::Water(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Water)
{
    ui->setupUi(this);
}

Water::~Water()
{
    delete ui;
}

void Water::on_buttonBox_accepted()
{
    ofstream myfile;

    myfile.open ("data.txt", ios::out | ios::app);

      myfile << "NEW MEASUREMENT WATER-QUALITY\n";

      myfile << "Sample-ID: " ;
      std::string current_locale_text = (ui->lineSample->text().toLocal8Bit().constData());
      myfile << current_locale_text;
      myfile << " \n" ;

      myfile << "Quality: " ;
      current_locale_text = (ui->lineQuality->text().toLocal8Bit().constData());
      myfile << current_locale_text;
      myfile << " \n" ;

      myfile << "Date: " ;
      current_locale_text = (ui->lineDate->text().toLocal8Bit().constData());
      myfile << current_locale_text;
      myfile << " \n" ;

      myfile << "Location: " ;
      current_locale_text = (ui->lineLocation->text().toLocal8Bit().constData());
      myfile << current_locale_text;
      myfile << " \n" ;

      myfile << "- - - - - - - - - - -\n";
      myfile.close();

}

void Water::on_buttonBox_rejected()
{
    MainWindow main;
    main.show();
}

