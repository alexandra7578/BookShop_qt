#include "signp.h"
#include "ui_signp.h"

signp::signp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signp)
{
    ui->setupUi(this);
}

signp::~signp()
{
    delete ui;
}
