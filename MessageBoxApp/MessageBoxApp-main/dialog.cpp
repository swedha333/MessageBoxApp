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
    QMessageBox::information(this,"NandinisreeVS 212218205031","This is information");
}

void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "NandinisreeVS", "Do you like Biriyani?", QMessageBox::Yes|QMessageBox::No);
      if (reply == QMessageBox::Yes) {
          QMessageBox::information(this,"Yes","You selected Yes");
      }
      else {
          QMessageBox::information(this,"No","You selected No");
      }
}

void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply;
      reply =  QMessageBox::question(this, "Custom","This is a custom message",QMessageBox::Yes | QMessageBox::YesToAll | QMessageBox::No | QMessageBox::NoToAll);
      switch (reply) {
        case QMessageBox::Yes:
          qDebug() << "Message is displayed";
          break;
        case QMessageBox::YesToAll:
          QMessageBox::warning(this,"Yes to all","Display the message with YES to all ");
          break;
        case QMessageBox::No:
          qDebug() << "Nothing is displayed";
          break;
        default:
          QMessageBox::warning(this,"No to all","Display the message with NO to all ");
            break;
      }

}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Warning","This is a warning message");
}
