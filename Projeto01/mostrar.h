#ifndef MOSTRAR_H
#define MOSTRAR_H

#include <QDialog>

namespace Ui {
class Mostrar;
}

class Mostrar : public QDialog
{
    Q_OBJECT

public:
    explicit Mostrar(QWidget *parent = 0);
    ~Mostrar();

private:
    Ui::Mostrar *ui;
};

#endif // MOSTRAR_H
