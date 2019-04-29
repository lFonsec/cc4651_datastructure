#include "mostrar.h"
#include "ui_mostrar.h"

Mostrar::Mostrar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mostrar)
{
    ui->setupUi(this);
}

Mostrar::~Mostrar()
{
    delete ui;
}
