#ifndef BUSCAR_H
#define BUSCAR_H

#include <QDialog>

namespace Ui {
class buscar;
}

class buscar : public QDialog
{
    Q_OBJECT

public:
    explicit buscar(QWidget *parent = 0);
    ~buscar();

private:
    Ui::buscar *ui;
};

#endif // BUSCAR_H
