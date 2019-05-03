#ifndef NOLDDE_H
#define NOLDDE_H

#include<iostream>
#include<cstdlib>
#include<QString>
#include "no.h"

class NoLdde{

public:
  NoLdde( No* hospede, QString diaCheckIn, QString horaCheckIn,QString diaCheckOut, QString horaCheckOut): prx(NULL), ant(NULL){
    hospede=hospede;
    diaCheckIn=diaCheckIn;
    horaCheckIn=horaCheckIn;
    diaCheckOut=diaCheckOut;
    horaCheckOut=horaCheckOut;
  }


  No*hospede;
  NoLdde*prx;
  NoLdde*ant;

  QString diaCheckIn;
  QString horaCheckIn;
  QString diaCheckOut;
  QString horaCheckOut;

  QString getCpfHospede(){
    return hospede->getCPF();
  }

  QString getHospedeNome(){
      return hospede->getNome();
  }


};

#endif // NOLDDE_H
