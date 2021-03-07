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
    QMessageBox::information(this,"Raphael Thacker 212218104136","This is INFORMATION Box..");
}


void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Raphael","Do you like Fruits?");
    if(reply==QMessageBox::Yes)
    {
        QMessageBox::information(this,"Fruits","Yes");
    }
    if(reply==QMessageBox::No)
    {
        QMessageBox::information(this,"Fruits","No");
    }
}

void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Raphael","This is a CUSTOM message",QMessageBox::Yes|QMessageBox::YesToAll|QMessageBox::No|QMessageBox::NoToAll);
    if(reply==QMessageBox::Yes)
    {
        qDebug()<<"Nothing Is Displayed..";
    }
    if(reply==QMessageBox::YesToAll)
    {
        QMessageBox::warning(this,"Raphael 4136","Display the message with warning as YesToAll");
    }
    if(reply==QMessageBox::NoToAll)
    {
        QMessageBox::warning(this,"Raphael 4136","Dont Display the message with warning as YesToAll");
    }
}


void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Raphael S 212218104136","This is a WARNING message!");
}
