#ifndef ADCIONAR_H
#define ADCIONAR_H

#include <QDialog>

namespace Ui {
class Adcionar;
}

class Adcionar : public QDialog
{
    Q_OBJECT

public:
    explicit Adcionar(QWidget *parent = 0);
    ~Adcionar();

private:
    Ui::Adcionar *ui;
};

#endif // ADCIONAR_H
