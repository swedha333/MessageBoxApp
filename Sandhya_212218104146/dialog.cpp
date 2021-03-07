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
   QMessageBox::information(this,"Sandhya R 212218104146","This is INFORMATION Box..");
}
void Dialog::on_pushButton2_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Sandhya","Do you like Chocolates?");
    if(reply==QMessageBox::Yes)
    {
        QMessageBox::information(this,"Chocolates","Yes");
    }
    if(reply==QMessageBox::No)
    {
        QMessageBox::information(this,"Chocolates","No");
    }
}

void Dialog::on_pushButton3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Sandhya","This is a CUSTOM message",QMessageBox::Yes|QMessageBox::YesToAll|QMessageBox::No|QMessageBox::NoToAll);
    if(reply==QMessageBox::Yes)
    {
        qDebug()<<"Nothing Is Displayed..";
    }
    if(reply==QMessageBox::YesToAll)
    {
        QMessageBox::warning(this,"Sandhya 4146","Display the message with warning as YesToAll");
    }
    if(reply==QMessageBox::NoToAll)
    {
        QMessageBox::warning(this,"Sandhya 4146","Dont Display the message with warning as YesToAll");
    }
}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Sandhya R 212218104146","This is a WARNING message!");
}
