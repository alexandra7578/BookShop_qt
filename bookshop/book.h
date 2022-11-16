#ifndef BOOK_H
#define BOOK_H
#include "login.h"
#include <QDialog>

namespace Ui {
class Book;
}

class Book : public QDialog
{
    Q_OBJECT

public:
    explicit Book(QWidget *parent = nullptr);
    ~Book();

private slots:
    void on_pushButton_Save_clicked();

    void on_pushButton_Update_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_load_tbl_clicked();

private:
    Ui::Book *ui;
};

#endif // BOOK_H
