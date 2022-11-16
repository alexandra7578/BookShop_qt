/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_firstname;
    QLineEdit *lineEdit_secondname;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_phone;
    QLineEdit *lineEdit_address;
    QLineEdit *lineEdit_pass;
    QLineEdit *lineEdit_confirmpass;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_login;
    QLabel *label_9;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(682, 475);
        groupBox = new QGroupBox(Signup);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 40, 541, 381));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 30, 81, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 91, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 90, 63, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 120, 63, 20));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 150, 63, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 190, 63, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 220, 91, 20));
        lineEdit_firstname = new QLineEdit(groupBox);
        lineEdit_firstname->setObjectName("lineEdit_firstname");
        lineEdit_firstname->setGeometry(QRect(120, 30, 271, 26));
        lineEdit_secondname = new QLineEdit(groupBox);
        lineEdit_secondname->setObjectName("lineEdit_secondname");
        lineEdit_secondname->setGeometry(QRect(120, 60, 271, 26));
        lineEdit_email = new QLineEdit(groupBox);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(120, 90, 271, 26));
        lineEdit_phone = new QLineEdit(groupBox);
        lineEdit_phone->setObjectName("lineEdit_phone");
        lineEdit_phone->setGeometry(QRect(120, 120, 271, 26));
        lineEdit_address = new QLineEdit(groupBox);
        lineEdit_address->setObjectName("lineEdit_address");
        lineEdit_address->setGeometry(QRect(120, 150, 271, 26));
        lineEdit_pass = new QLineEdit(groupBox);
        lineEdit_pass->setObjectName("lineEdit_pass");
        lineEdit_pass->setGeometry(QRect(120, 180, 271, 26));
        lineEdit_confirmpass = new QLineEdit(groupBox);
        lineEdit_confirmpass->setObjectName("lineEdit_confirmpass");
        lineEdit_confirmpass->setGeometry(QRect(120, 210, 271, 26));
        pushButton_Save = new QPushButton(groupBox);
        pushButton_Save->setObjectName("pushButton_Save");
        pushButton_Save->setGeometry(QRect(30, 280, 93, 29));
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(320, 280, 93, 29));
        label_9 = new QLabel(Signup);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(70, 409, 181, 41));

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Signup", "SingUp", nullptr));
        label->setText(QCoreApplication::translate("Signup", "Fisrt name", nullptr));
        label_2->setText(QCoreApplication::translate("Signup", "Second name", nullptr));
        label_3->setText(QCoreApplication::translate("Signup", "Email", nullptr));
        label_4->setText(QCoreApplication::translate("Signup", "Phone", nullptr));
        label_5->setText(QCoreApplication::translate("Signup", "Address", nullptr));
        label_6->setText(QCoreApplication::translate("Signup", "Password", nullptr));
        label_7->setText(QCoreApplication::translate("Signup", "Confirm pass", nullptr));
        pushButton_Save->setText(QCoreApplication::translate("Signup", "Save", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Signup", "Login", nullptr));
        label_9->setText(QCoreApplication::translate("Signup", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
