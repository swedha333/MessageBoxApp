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
    QMessageBox::information(this,"Raghu Veer","THIS IS INFORMATION BOX");
}

void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Raghu Veer","Do you like apples?",QMessageBox::Yes | QMessageBox::No);
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
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Raghu Veer","This is a custom message",QMessageBox::Yes | QMessageBox::YesToAll | QMessageBox::No | QMessageBox::NoToAll);
    if(reply == QMessageBox::Yes)
    {
        qDebug() <<"Nothing is displayed";
    }
    if(reply == QMessageBox::YesToAll)
    {
       QMessageBox::warning(this,"Raghu Veer","Display the message with warning as YesToAll");
    }
    if(reply == QMessageBox::NoToAll)
    {
       QMessageBox::warning(this,"Raghu Veer","Don't Display the message with warning as YesToAll");
    }


}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Raghu Veer","This is a warning message");
}
