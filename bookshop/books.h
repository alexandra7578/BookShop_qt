#ifndef BOOKS_H
#define BOOKS_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "login.h"
namespace Ui {
class Books;
}

class Books : public QDialog
{
    Q_OBJECT

public:

    explicit Books(QWidget *parent = nullptr);
    ~Books();

private slots:
    void on_groupBox_clicked();
    void on_pushButton_Update_clicked();

private:
    Ui::Books *ui;
};

#endif // BOOKS_H
