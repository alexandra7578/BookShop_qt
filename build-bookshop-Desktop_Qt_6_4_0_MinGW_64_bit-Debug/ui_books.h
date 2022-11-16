/********************************************************************************
** Form generated from reading UI file 'books.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKS_H
#define UI_BOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Books
{
public:
    QGroupBox *groupBox;
    QPushButton *btn_load_tabel;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_bookname;
    QLineEdit *lineEdit_author;
    QLineEdit *lineEdit_price;
    QPushButton *pushButton_Update;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_tipe;
    QLabel *label_4;
    QLabel *label_sec_book;

    void setupUi(QDialog *Books)
    {
        if (Books->objectName().isEmpty())
            Books->setObjectName("Books");
        Books->resize(992, 521);
        groupBox = new QGroupBox(Books);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 10, 921, 501));
        btn_load_tabel = new QPushButton(groupBox);
        btn_load_tabel->setObjectName("btn_load_tabel");
        btn_load_tabel->setGeometry(QRect(600, 400, 93, 29));
        tableView = new QTableView(groupBox);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(380, 40, 511, 331));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 81, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 90, 63, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 120, 63, 20));
        lineEdit_bookname = new QLineEdit(groupBox);
        lineEdit_bookname->setObjectName("lineEdit_bookname");
        lineEdit_bookname->setGeometry(QRect(110, 60, 201, 26));
        lineEdit_author = new QLineEdit(groupBox);
        lineEdit_author->setObjectName("lineEdit_author");
        lineEdit_author->setGeometry(QRect(110, 90, 201, 26));
        lineEdit_price = new QLineEdit(groupBox);
        lineEdit_price->setObjectName("lineEdit_price");
        lineEdit_price->setGeometry(QRect(110, 120, 201, 26));
        pushButton_Update = new QPushButton(groupBox);
        pushButton_Update->setObjectName("pushButton_Update");
        pushButton_Update->setGeometry(QRect(160, 190, 93, 29));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(90, 250, 93, 29));
        lineEdit_tipe = new QLineEdit(groupBox);
        lineEdit_tipe->setObjectName("lineEdit_tipe");
        lineEdit_tipe->setGeometry(QRect(110, 150, 201, 26));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 150, 61, 20));
        label_sec_book = new QLabel(groupBox);
        label_sec_book->setObjectName("label_sec_book");
        label_sec_book->setGeometry(QRect(30, 320, 291, 101));

        retranslateUi(Books);

        QMetaObject::connectSlotsByName(Books);
    } // setupUi

    void retranslateUi(QDialog *Books)
    {
        Books->setWindowTitle(QCoreApplication::translate("Books", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Books", "Books", nullptr));
        btn_load_tabel->setText(QCoreApplication::translate("Books", "Load table", nullptr));
        label->setText(QCoreApplication::translate("Books", "Book name", nullptr));
        label_2->setText(QCoreApplication::translate("Books", "Author", nullptr));
        label_3->setText(QCoreApplication::translate("Books", "Price", nullptr));
        pushButton_Update->setText(QCoreApplication::translate("Books", "Update", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Books", "PushButton", nullptr));
        label_4->setText(QCoreApplication::translate("Books", "Tipe", nullptr));
        label_sec_book->setText(QCoreApplication::translate("Books", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Books: public Ui_Books {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKS_H
