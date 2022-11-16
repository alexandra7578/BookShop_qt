#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>

namespace Ui {
class Signup;
}

class Signup : public QDialog
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();

private slots:
    void on_pushButton_Save_clicked();

    void on_pushButton_login_clicked();

private:
    Ui::Signup *ui;
};

#endif // SIGNUP_H
