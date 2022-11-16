#include "login.h"
#include "ui_login.h"
#include "book.h"
#include "signup.h"
login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    if(!connOpen())
        ui->label->setText("Failed to open the database :(");
    else
        ui->label->setText("Data base is conected! :)");
}

login::~login()
{
    delete ui;
}



void login::on_pushButton_clicked()
{
    login conn;
    QString email, password;
    email=ui->lineEdit_email->text();
    password=ui->lineEdit_pass->text();
    if(!connOpen())
     {
        qDebug()<<"Failed to opne the database";
        return;
    }
    connOpen();
    QSqlQuery qry;
    qry.prepare("select *from user where email_user='"+email+"' and password='"+password+"'" );
    if(qry.exec())
    {
        int count=0;
        while(qry.next())
        {
            count++;
        }
        if(count==1)
          {
            ui->label->setText("Email and password are correct");
            this->hide();
            Book book;
            book.setModal(true);
            book.exec();
        }

        if(count>1)
            ui->label->setText("Dublicate user");
        if(count<1)
            ui->label->setText("Email and password are not correct");

    }

}


void login::on_btn_books_clicked()
{
    login conn;

    if(!connOpen())
     {
        qDebug()<<"Failed to opne the database";
        return;
    }
    connOpen();
    this->hide();
    Signup s;
    s.setModal(true);
    s.exec();
}

