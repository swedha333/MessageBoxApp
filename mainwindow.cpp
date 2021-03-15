#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"BHARATH K 212218104029","this is information box");
}

void MainWindow::on_pushButton_2_clicked()
{   QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"BHARATH K","do like this studies?",QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes){
        QMessageBox::information(this,"Yes Clicked","oh dear");
    }
    else
    {
        QMessageBox::information(this,"No Clicked","good");

    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Custom Message","This is a Custom message",QMessageBox::Yes|QMessageBox::YesToAll|QMessageBox::No|QMessageBox::NoToAll);
    if(reply == QMessageBox::Yes){
        qDebug()<<"nothing to show";
    }
    else if(reply == QMessageBox::YesToAll)
    {
        QMessageBox::information(this,"Message Display","display the message with warming as yes to all");

    }
    else if(reply == QMessageBox::No)
    {
        qDebug()<<"nothing to show";
    }
    else  if(reply == QMessageBox::NoToAll)
    {
        QMessageBox::information(this,"Message Display","display the message with warming as no to all");

    }
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Warning Message","This is a warning box");
}
