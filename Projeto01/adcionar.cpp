#include "adcionar.h"
#include "ui_adcionar.h"

Adcionar::Adcionar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adcionar)
{
    ui->setupUi(this);
}

Adcionar::~Adcionar()
{
    delete ui;
}
