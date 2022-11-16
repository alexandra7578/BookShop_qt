#ifndef SINUP_H
#define SINUP_H

#include <QDialog>

namespace Ui {
class Sinup;
}

class Sinup : public QDialog
{
    Q_OBJECT

public:
    explicit Sinup(QWidget *parent = nullptr);
    ~Sinup();

private:
    Ui::Sinup *ui;
};

#endif // SINUP_H
