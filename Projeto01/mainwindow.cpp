#include "mainwindow.h"
#include "ui_mainwindow.h"


#include "lde.h"
#include "no.h"

using namespace std;


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

void MainWindow::on_pushButton_5_clicked()
{
        QString cpf = ui->cpfConsultarReserva->text();
        NoLdde respostaBusca = listaReserva.buscar(cpf);

        QString hospedeNome = respostaBusca.getHospedeNome();
        QMessageBox::information(this, "EITA", hospedeNome);

    }


void MainWindow::on_reservar_clicked()
{
    QString cpf = ui->cpfReserva->text();
    No* hospede = listaHospede.busca(cpf);

    QString diaCI = ui->dataCI->text();
    QString diaCO = ui->dataCO->text();
    QString hhCI = ui->hhCI->text();
    QString hhCO = ui->hhCO->text();

    if(hospede->getCPF()==0)
        QMessageBox::information(this, "EITA", "hospede não encontrado");
    else{
        if(listaReserva.insere(hospede, diaCI, hhCI, diaCO, hhCO))
            QMessageBox::information(this, "EITA", "Reserva cadastrada com sucesso");
        else
            QMessageBox::information(this, "EITA", "Erro");
    }

}




void MainWindow::on_consultaHospedes_clicked()
{
    QString cpf = ui->buscar->text();
    No *respostaBusca = listaHospede.busca(cpf);

    QString nome = respostaBusca->getNome();
    QString cpfBuscado = respostaBusca->getCPF();
    ui->nomeConsulta->setText(nome);
    ui->cpfConsulta->setText(cpfBuscado);
}

void MainWindow::on_cadastrarHospedes_clicked()
{
    QString nome = ui->nome->text();
    QString cpf = ui->cpf->text();

    if(listaHospede.insere(nome, cpf)){
       QMessageBox::information(this, "EITA", "Cadastrado com sucesso");
    }
    else{
       QMessageBox::information(this, "EITA", "Já existe estre cadastro");
    }

    ui->nome->clear();
    ui->cpf->clear();

}


void MainWindow::on_deleteHospedes_clicked()
{
    {
        {
            QString hospedes = ui->deletar->text();
            if(listaHospede.remove(hospedes))
                QMessageBox::information(this, "EITA", "Cadastro deletado");
            else
                QMessageBox::information(this, "EITA", "Este cadastro não existe");

    }
    }
}
