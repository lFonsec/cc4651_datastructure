/********************************************************************************
** Form generated from reading UI file 'buscar.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCAR_H
#define UI_BUSCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buscar
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *nome;
    QLineEdit *cpf;
    QLineEdit *dia;
    QLineEdit *mes;
    QLineEdit *ano;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *buscar)
    {
        if (buscar->objectName().isEmpty())
            buscar->setObjectName(QStringLiteral("buscar"));
        buscar->resize(400, 428);
        horizontalLayoutWidget = new QWidget(buscar);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 10, 351, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayoutWidget_2 = new QWidget(buscar);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 390, 351, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        gridLayoutWidget = new QWidget(buscar);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 200, 331, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nome = new QLineEdit(gridLayoutWidget);
        nome->setObjectName(QStringLiteral("nome"));

        gridLayout->addWidget(nome, 0, 0, 1, 1);

        cpf = new QLineEdit(gridLayoutWidget);
        cpf->setObjectName(QStringLiteral("cpf"));

        gridLayout->addWidget(cpf, 0, 1, 1, 1);

        dia = new QLineEdit(gridLayoutWidget);
        dia->setObjectName(QStringLiteral("dia"));

        gridLayout->addWidget(dia, 1, 0, 1, 1);

        mes = new QLineEdit(gridLayoutWidget);
        mes->setObjectName(QStringLiteral("mes"));

        gridLayout->addWidget(mes, 1, 1, 1, 1);

        ano = new QLineEdit(gridLayoutWidget);
        ano->setObjectName(QStringLiteral("ano"));

        gridLayout->addWidget(ano, 1, 2, 1, 1);

        horizontalLayoutWidget_3 = new QWidget(buscar);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(30, 40, 351, 101));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(buscar);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 160, 131, 23));

        retranslateUi(buscar);

        QMetaObject::connectSlotsByName(buscar);
    } // setupUi

    void retranslateUi(QDialog *buscar)
    {
        buscar->setWindowTitle(QApplication::translate("buscar", "Dialog", nullptr));
        label->setText(QApplication::translate("buscar", "Buscar Reserva", nullptr));
        pushButton->setText(QApplication::translate("buscar", "Buscar", nullptr));
        nome->setText(QApplication::translate("buscar", "Nome", nullptr));
        cpf->setText(QApplication::translate("buscar", "CPF", nullptr));
        dia->setText(QApplication::translate("buscar", "Dia Checkin", nullptr));
        mes->setText(QApplication::translate("buscar", "Mes Checkin", nullptr));
        ano->setText(QApplication::translate("buscar", "Ano Checkin", nullptr));
        lineEdit->setText(QApplication::translate("buscar", "Nome", nullptr));
        lineEdit_2->setText(QApplication::translate("buscar", "CPF", nullptr));
        pushButton_2->setText(QApplication::translate("buscar", "Buscar Cliente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buscar: public Ui_buscar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCAR_H
