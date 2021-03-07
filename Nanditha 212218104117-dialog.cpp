#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QDebug>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}
Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
   QMessageBox::StandardButton reply=QMessageBox::information(this,"NANDITHA 212218104117","THIS IS AN INFORMATION");
}


void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"NANDITHA","Do you like icecream",QMessageBox::Yes | QMessageBox::No);
    if(reply==QMessageBox::No)
    {
       QMessageBox::StandardButton reply=QMessageBox::information(this,"NANDITHA","Doesn't like favourite for all");
       QApplication::quit();
    }
    else
    {
        QMessageBox::StandardButton reply=QMessageBox::information(this,"NANDITHA","Icecream is favourite for all");
        qDebug() <<"yes,icecream is favourite for all";
    }
}



void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Custom message","This is a custom message",QMessageBox::Yes | QMessageBox::YesToAll | QMessageBox::No | QMessageBox::NoToAll);
    if(reply==QMessageBox::Yes)
    {
        qDebug() <<"Nothing is Displayed";
        QApplication::quit();
    }
    else if(reply==QMessageBox::YesToAll)
    {
        QMessageBox::StandardButton reply=QMessageBox::warning(this,"Display message","Display the message with warning as Yes to All");

    }
    else if(reply==QMessageBox::No)
    {
        QMessageBox::StandardButton reply=QMessageBox::critical(this,"Display message","No message displayed");

    }
        else
    {
        QMessageBox::StandardButton reply=QMessageBox::warning(this,"No Display message","Don't Display the message with warning as No to All");

       }


    }


void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::warning(this,"Critical message","This is an warning message");
}
