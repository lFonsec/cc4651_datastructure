#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "lde.h"
#include "no.h"
#include "ldde.h"
#include "no-ldde.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Lde listaHospede;
    Ldde listaReserva;



private slots:

    void on_pushButton_5_clicked();

    void on_reservar_clicked();

    void on_consultaHospedes_clicked();

    void on_cadastrarHospedes_clicked();

    void on_deleteHospedes_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
