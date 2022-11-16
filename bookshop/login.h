#ifndef login_H
#define login_H
#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT
public:
    QSqlDatabase database;
    void connClose()
    {
        database.close();
        database.removeDatabase( QSqlDatabase::defaultConnection);
    }
    bool connOpen(){
        database= QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("C:/Users/alen274444/Desktop/database/database_books.db");
        if(!database.open())
          {
            qDebug()<<("Failed to open the database :(");
            return false;
        }
        else
           {
            qDebug("Data base is conected! :)");
            return true;
        }
    }
public:
    login(QWidget *parent = nullptr);
    ~login();


private slots:
    void on_pushButton_clicked();

    void on_btn_books_clicked();

private:
    Ui::login *ui;

};
#endif // login_H
