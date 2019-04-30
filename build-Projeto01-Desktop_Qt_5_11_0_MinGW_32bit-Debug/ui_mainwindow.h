/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *nome;
    QLineEdit *cpf;
    QPushButton *cadastrarHospedes;
    QWidget *horizontalLayoutWidget_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *nomeConsulta;
    QPushButton *consultaHospedes;
    QSpacerItem *horizontalSpacer;
    QLabel *cpfConsulta;
    QLineEdit *buscar;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *deletar;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *deleteHospedes;
    QWidget *horizontalLayoutWidget_4;
    QGridLayout *gridLayout_2;
    QLineEdit *cpfReserva;
    QLineEdit *dataCI;
    QLineEdit *hhCI;
    QPushButton *reservar;
    QLineEdit *dataCO;
    QLineEdit *hhCO;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QWidget *verticalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *cpfConsultarReserva;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(864, 534);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 100, 331, 25));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        nome = new QLineEdit(horizontalLayoutWidget);
        nome->setObjectName(QStringLiteral("nome"));

        horizontalLayout->addWidget(nome);

        cpf = new QLineEdit(horizontalLayoutWidget);
        cpf->setObjectName(QStringLiteral("cpf"));

        horizontalLayout->addWidget(cpf);

        cadastrarHospedes = new QPushButton(horizontalLayoutWidget);
        cadastrarHospedes->setObjectName(QStringLiteral("cadastrarHospedes"));

        horizontalLayout->addWidget(cadastrarHospedes);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 190, 331, 111));
        gridLayout = new QGridLayout(horizontalLayoutWidget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 1, 2, 1, 1);

        nomeConsulta = new QLabel(horizontalLayoutWidget_2);
        nomeConsulta->setObjectName(QStringLiteral("nomeConsulta"));

        gridLayout->addWidget(nomeConsulta, 1, 0, 1, 1);

        consultaHospedes = new QPushButton(horizontalLayoutWidget_2);
        consultaHospedes->setObjectName(QStringLiteral("consultaHospedes"));

        gridLayout->addWidget(consultaHospedes, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        cpfConsulta = new QLabel(horizontalLayoutWidget_2);
        cpfConsulta->setObjectName(QStringLiteral("cpfConsulta"));

        gridLayout->addWidget(cpfConsulta, 1, 1, 1, 1);

        buscar = new QLineEdit(horizontalLayoutWidget_2);
        buscar->setObjectName(QStringLiteral("buscar"));

        gridLayout->addWidget(buscar, 0, 0, 1, 1);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 370, 331, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        deletar = new QLineEdit(horizontalLayoutWidget_3);
        deletar->setObjectName(QStringLiteral("deletar"));

        horizontalLayout_2->addWidget(deletar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        deleteHospedes = new QPushButton(horizontalLayoutWidget_3);
        deleteHospedes->setObjectName(QStringLiteral("deleteHospedes"));

        horizontalLayout_2->addWidget(deleteHospedes);

        horizontalLayoutWidget_4 = new QWidget(centralWidget);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(340, 10, 491, 151));
        gridLayout_2 = new QGridLayout(horizontalLayoutWidget_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        cpfReserva = new QLineEdit(horizontalLayoutWidget_4);
        cpfReserva->setObjectName(QStringLiteral("cpfReserva"));

        gridLayout_2->addWidget(cpfReserva, 0, 0, 1, 1);

        dataCI = new QLineEdit(horizontalLayoutWidget_4);
        dataCI->setObjectName(QStringLiteral("dataCI"));

        gridLayout_2->addWidget(dataCI, 1, 0, 1, 1);

        hhCI = new QLineEdit(horizontalLayoutWidget_4);
        hhCI->setObjectName(QStringLiteral("hhCI"));

        gridLayout_2->addWidget(hhCI, 1, 1, 1, 1);

        reservar = new QPushButton(horizontalLayoutWidget_4);
        reservar->setObjectName(QStringLiteral("reservar"));

        gridLayout_2->addWidget(reservar, 0, 2, 1, 1);

        dataCO = new QLineEdit(horizontalLayoutWidget_4);
        dataCO->setObjectName(QStringLiteral("dataCO"));

        gridLayout_2->addWidget(dataCO, 2, 0, 1, 1);

        hhCO = new QLineEdit(horizontalLayoutWidget_4);
        hhCO->setObjectName(QStringLiteral("hhCO"));

        gridLayout_2->addWidget(hhCO, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(380, 350, 441, 101));
        horizontalLayout_3 = new QHBoxLayout(verticalLayoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        cpfConsultarReserva = new QLineEdit(verticalLayoutWidget);
        cpfConsultarReserva->setObjectName(QStringLiteral("cpfConsultarReserva"));

        horizontalLayout_3->addWidget(cpfConsultarReserva);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_3->addWidget(pushButton_5);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(710, 300, 121, 51));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 350, 201, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 170, 181, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 70, 141, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 864, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        nome->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        cpf->setText(QApplication::translate("MainWindow", "CPF", nullptr));
        cadastrarHospedes->setText(QApplication::translate("MainWindow", "Cadastrar Hospedes", nullptr));
        nomeConsulta->setText(QString());
        consultaHospedes->setText(QApplication::translate("MainWindow", "Consultar Hospedes", nullptr));
        cpfConsulta->setText(QString());
        buscar->setText(QApplication::translate("MainWindow", "CPF", nullptr));
        deletar->setText(QApplication::translate("MainWindow", "CPF", nullptr));
        deleteHospedes->setText(QApplication::translate("MainWindow", "Deletar Hospedes", nullptr));
        cpfReserva->setText(QApplication::translate("MainWindow", "CPF", nullptr));
        dataCI->setText(QApplication::translate("MainWindow", "Data Checkin", nullptr));
        hhCI->setText(QApplication::translate("MainWindow", "Hora Checkin", nullptr));
        reservar->setText(QApplication::translate("MainWindow", "RESERVAR", nullptr));
        dataCO->setText(QApplication::translate("MainWindow", "Data Checkout", nullptr));
        hhCO->setText(QApplication::translate("MainWindow", "Hora Checkout", nullptr));
        cpfConsultarReserva->setText(QApplication::translate("MainWindow", "CPF de Consulta de Reserva", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Consultar Reserva", nullptr));
        label->setText(QApplication::translate("MainWindow", "Consulta de Reserva", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Deletar Hospedes", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Consultar Hospedes", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Cadastrar Hospedes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
