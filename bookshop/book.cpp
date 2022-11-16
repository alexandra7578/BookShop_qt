#include "book.h"
#include "ui_book.h"
#include <QMessageBox>
#include "login.h"
Book::Book(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Book)
{
    ui->setupUi(this);
    login conn;
       if(!conn.connOpen())
           ui->label_sec_book->setText("Failed to open the database :(");
       else
           ui->label_sec_book->setText("Data base is conected! :)");
}

Book::~Book()
{
    delete ui;
}

void Book::on_pushButton_Save_clicked()
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
        qry.prepare("insert into books (book_name, author, price, tipe) values ('"+book_name+"','"+author+"','"+price+"','"+tipe+"')");
        if(qry.exec( ))
        {
            QMessageBox::critical(this, "Add book", "Book added");
            conn.connClose();
        }
        else
        {
            QMessageBox::critical(this, tr("Error:("), qry.lastError().text());
        }
}


void Book::on_pushButton_Update_clicked()
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


void Book::on_pushButton_delete_clicked()
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
        qry.prepare("delete  from books where book_name='"+book_name+"'");
        if(qry.exec( ))
        {
            QMessageBox::critical(this, "Delete", "Book delete");
            conn.connClose();
        }
        else
        {
            QMessageBox::critical(this, tr("Error:("), qry.lastError().text());
        }
}


void Book::on_pushButton_load_tbl_clicked()
{
    login conn;
    QSqlQueryModel *modal=new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery *qry=new QSqlQuery(conn.database);
    qry->prepare("select *from books");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    conn.connClose();
    qDebug() <<(modal->rowCount());
}

