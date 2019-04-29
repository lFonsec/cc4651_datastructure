#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "delete.h"
#include "adcionar.h"
#include "buscar.h"
#include "mostrar.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Adcionar adcionar;
    adcionar.setModal(true);
    adcionar.exec();


}


void MainWindow::on_pushButton_2_clicked()
{
    buscar busca;
    busca.setModal(true);
    busca.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    Delete deletar;
    deletar.setModal(true);
    deletar.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    Mostrar mostra;
    mostra.setModal(true);
    mostra.exec();
}
