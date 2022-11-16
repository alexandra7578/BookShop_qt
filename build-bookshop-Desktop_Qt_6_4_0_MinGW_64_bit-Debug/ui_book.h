/********************************************************************************
** Form generated from reading UI file 'book.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_H
#define UI_BOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Book
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_bookname;
    QLineEdit *lineEdit_author;
    QLineEdit *lineEdit_price;
    QLineEdit *lineEdit_tipe;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_Update;
    QLabel *label_sec_book;
    QPushButton *pushButton_delete;
    QTableView *tableView;
    QPushButton *pushButton_load_tbl;
    QLabel *label_5;

    void setupUi(QDialog *Book)
    {
        if (Book->objectName().isEmpty())
            Book->setObjectName("Book");
        Book->resize(1053, 564);
        label = new QLabel(Book);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 210, 91, 20));
        label_2 = new QLabel(Book);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 240, 63, 20));
        label_3 = new QLabel(Book);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 270, 63, 20));
        label_4 = new QLabel(Book);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 300, 63, 20));
        lineEdit_bookname = new QLineEdit(Book);
        lineEdit_bookname->setObjectName("lineEdit_bookname");
        lineEdit_bookname->setGeometry(QRect(110, 200, 191, 26));
        lineEdit_author = new QLineEdit(Book);
        lineEdit_author->setObjectName("lineEdit_author");
        lineEdit_author->setGeometry(QRect(110, 240, 191, 26));
        lineEdit_price = new QLineEdit(Book);
        lineEdit_price->setObjectName("lineEdit_price");
        lineEdit_price->setGeometry(QRect(110, 270, 191, 26));
        lineEdit_tipe = new QLineEdit(Book);
        lineEdit_tipe->setObjectName("lineEdit_tipe");
        lineEdit_tipe->setGeometry(QRect(110, 300, 191, 26));
        pushButton_Save = new QPushButton(Book);
        pushButton_Save->setObjectName("pushButton_Save");
        pushButton_Save->setGeometry(QRect(30, 350, 93, 29));
        pushButton_Update = new QPushButton(Book);
        pushButton_Update->setObjectName("pushButton_Update");
        pushButton_Update->setGeometry(QRect(210, 350, 93, 29));
        label_sec_book = new QLabel(Book);
        label_sec_book->setObjectName("label_sec_book");
        label_sec_book->setGeometry(QRect(50, 450, 211, 81));
        pushButton_delete = new QPushButton(Book);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setGeometry(QRect(120, 400, 93, 29));
        tableView = new QTableView(Book);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(400, 70, 551, 291));
        pushButton_load_tbl = new QPushButton(Book);
        pushButton_load_tbl->setObjectName("pushButton_load_tbl");
        pushButton_load_tbl->setGeometry(QRect(660, 440, 93, 29));
        label_5 = new QLabel(Book);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 30, 321, 161));
        label_5->setPixmap(QPixmap(QString::fromUtf8("download (1).jpg")));
        label_5->setScaledContents(true);

        retranslateUi(Book);

        QMetaObject::connectSlotsByName(Book);
    } // setupUi

    void retranslateUi(QDialog *Book)
    {
        Book->setWindowTitle(QCoreApplication::translate("Book", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Book", "Book Name", nullptr));
        label_2->setText(QCoreApplication::translate("Book", "Author", nullptr));
        label_3->setText(QCoreApplication::translate("Book", "Price", nullptr));
        label_4->setText(QCoreApplication::translate("Book", "Tipe", nullptr));
        pushButton_Save->setText(QCoreApplication::translate("Book", "Save", nullptr));
        pushButton_Update->setText(QCoreApplication::translate("Book", "Update", nullptr));
        label_sec_book->setText(QCoreApplication::translate("Book", "TextLabel", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Book", "Delete", nullptr));
        pushButton_load_tbl->setText(QCoreApplication::translate("Book", "Load table", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Book: public Ui_Book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_H
