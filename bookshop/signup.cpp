#include "signup.h"
#include "ui_signup.h"
#include "login.h"
#include "book.h"
#include <QMessageBox>
Signup::Signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
    login conn;
       if(!conn.connOpen())
           ui->label_9->setText("Failed to open the database :(");
       else
           ui->label_9->setText("Data base is conected! :)");
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_pushButton_Save_clicked()
{
    login conn;
     QString name_user=ui->lineEdit_firstname->text();
     QString surname=ui->lineEdit_secondname->text();
     QString email_user=ui->lineEdit_email->text();
     QString phone=ui->lineEdit_phone->text();
      QString address=ui->lineEdit_address->text();
       QString password=ui->lineEdit_pass->text();
     if(!conn.connOpen())
      {
         qDebug()<<"Failed to opne the database";
         return;
     }
     conn.connOpen();

     if(password==ui->lineEdit_confirmpass->text())
     {
         QSqlQuery qry;
         qry.prepare("insert into user (name_user, surname, email_user, phone, address, password) values ('"+name_user+"','"+surname+"','"+email_user+"','"+address+"','"+phone+"','"+password+"')");

     if(qry.exec( ))
        {
         QMessageBox::critical(this, "Singup", "Account created succesfully!");
         conn.connClose();
            }
     else
          {
            QMessageBox::critical(this, tr("Error:("), qry.lastError().text());
                }
    }
     else
     {
         QMessageBox::information(this, "Password", "Passwords do not match");
     }
}


void Signup::on_pushButton_login_clicked()
{
    this->hide();
    Book book;
    book.setModal(true);
    book.exec();
}

