#include "books.h"
#include "ui_books.h"
#include <QMessageBox>
#include "login.h"
Books::Books(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Books)
{
    ui->setupUi(this);
     login conn;
    if(!conn.connOpen())
        ui->label_sec_book->setText("Failed to open the database :(");
    else
        ui->label_sec_book->setText("Data base is conected! :)");

}

Books::~Books()
{
    delete ui;
}



void Books::on_pushButton_Update_clicked()
{
    login conn;
        QString book_name=ui->lineEdit_bookname->text();
        QString author=ui->lineEdit_author->text();
        QString price=ui->lineEdit_price->text();
        QString tipe=ui->lineEdit_tipe->text();
        if(!conn.connOpen())
         {
            qDebug()<<"Failed to opne the database";
            return;
        }
        conn.connOpen();
        QSqlQuery qry;
        qry.prepare("update books set book_name='"+book_name+"', author='"+author+"', price='"+price+"', tipe='"+tipe+"' where book_name='"+book_name+"'");
        if(qry.exec( ))
        {
            QMessageBox::critical(this, "Edit", "Update");
            conn.connClose();
        }
        else
        {
            QMessageBox::critical(this, tr("Error:("), qry.lastError().text());
        }
}

