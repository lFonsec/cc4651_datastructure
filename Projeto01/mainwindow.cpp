#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "ldde2.h"
#include "ldde.h"

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
int x=0;
void MainWindow::on_pushButton_5_clicked()
{
        QString cpf = ui->cpfConsultarReserva->text();
        NoLdde respostaBusca = listaReserva.buscar(cpf);
        //NoLdde2 respostaBusca2 = listaReserva2.buscar(cpf);
        QString hospedeNome = respostaBusca.getHospedeNome();
        //QString hospedeNome2 = respostaBusca2.getHospedeNome();
        QMessageBox::information(this, "Notice", hospedeNome,"ok");

    }


void MainWindow::on_reservar_clicked()
{
    QString cpf = ui->cpfReserva->text();
    No* hospede = listaHospede.busca(cpf);
    QString diaCheckIn = ui->dataCheckIn->text();
    QString diaCheckOut = ui->dataCheckOut->text();
    QString horaCheckIn = ui->horaCheckIn->text();
    QString horaCheckOut = ui->horaCheckOut->text();

    if(hospede->getCPF()==0)
        QMessageBox::information(this, "Notice", "hospede não encontrado","ok");
    else{
        if(listaReserva.insere(hospede, diaCheckIn, horaCheckIn,diaCheckOut,horaCheckOut)){

            QMessageBox::information(this, "Notice", "Reserva cadastrada com sucesso","ok");
            ui->horaCheckOut->clear();
            ui->horaCheckIn->clear();
            ui->dataCheckOut->clear();
            ui->dataCheckIn->clear();
        }      else
            QMessageBox::information(this, "Notice", "Erro","ok");
    }

}




void MainWindow::on_consultaHospedes_clicked()
{
    QString cpf = ui->buscar->text();
    No *respostaBusca = listaHospede.busca(cpf);

    QString nome = respostaBusca->getNome();
    QString cpfBuscado = respostaBusca->getCPF();
    QString nomecpf = "Nome do Hospede : " + nome +"  "+ "CPF do Hospede: " + cpfBuscado;
     QMessageBox::information(this, "Notice", nomecpf ,"ok");
}

void MainWindow::on_cadastrarHospedes_clicked()
{
    QString nome = ui->nome->text();
    QString cpf = ui->cpf->text();
    if(listaHospede.insere(nome, cpf)){
       QMessageBox::information(this, "Notice", "Cadastrado com sucesso","ok");
        log.empilha(cpf);
    }
    else{
       QMessageBox::information(this, "Notice", "Já existe estre cadastro","ok");
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
                QMessageBox::information(this, "Notice", "Cadastro deletado","ok");
            else
                QMessageBox::information(this, "Notice", "Este cadastro não existe","ok");

    }
    }
}

void MainWindow::on_pushButton_clicked()
{

   //QMessageBox::information(this,"notice",log.desempilha(),"ok");
   //for (int i = 0; i < sizeof(1); ++i) {

    ui->lista->addItem(log.desempilha());
}

