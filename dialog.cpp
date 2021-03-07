#include "dialog.h"
#include "ui_dialog.h"
#include<QMessageBox>
#include<QDebug>
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
    QMessageBox::information(this,"Samathmika 212218205044","THIS IS INFORMATION BOX");
}

void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Abishekk 212218104007","Do you like apples?",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QMessageBox::information(this,"APPLE","Yes");
    }
    if(reply == QMessageBox::No)
    {
        QMessageBox::information(this,"NO APPLE","No");
    }

}

void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Abishekk 212218104007","This is a custom message",QMessageBox::Yes | QMessageBox::YesToAll | QMessageBox::No | QMessageBox::NoToAll);
    if(reply == QMessageBox::Yes)
    {
        qDebug() <<"Nothing is displayed";
    }
    if(reply == QMessageBox::YesToAll)
    {
       QMessageBox::warning(this,"Abishekk 212218104007","Display the message with warning as YesToAll");
    }
    if(reply == QMessageBox::NoToAll)
    {
       QMessageBox::warning(this,"Abishekk 212218104007","Don't Display the message with warning as YesToAll");
    }


}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Abishekk 212218104007","This is a warning message");
}
