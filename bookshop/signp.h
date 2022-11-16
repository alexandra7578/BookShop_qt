#ifndef SIGNP_H
#define SIGNP_H

#include <QDialog>

namespace Ui {
class signp;
}

class signp : public QDialog
{
    Q_OBJECT

public:
    explicit signp(QWidget *parent = nullptr);
    ~signp();

private:
    Ui::signp *ui;
};

#endif // SIGNP_H
