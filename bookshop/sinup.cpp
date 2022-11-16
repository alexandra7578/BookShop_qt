#include "sinup.h"
#include "ui_sinup.h"

Sinup::Sinup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sinup)
{
    ui->setupUi(this);
}

Sinup::~Sinup()
{
    delete ui;
}
