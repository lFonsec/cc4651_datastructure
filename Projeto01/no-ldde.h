#ifndef NOLDDE_H
#define NOLDDE_H

#include<iostream>
#include<cstdlib>

#include "no.h"

class NoLdde{

public:
  NoLdde( No* hospede, QString diaCheckIn, QString horaCheckIn): prx(NULL), ant(NULL){
    hospede=hospede;
    diaCheckIn=diaCheckIn;
    horaCheckIn=horaCheckIn;
  }


  No*hospede;
  NoLdde*prx;
  NoLdde*ant;

  QString diaCheckIn;
  QString horaCheckIn;

  QString getCpfHospede(){
    return hospede->getCPF();
  }

  QString getHospedeNome(){
      return hospede->getNome();
  }


};

#endif // NOLDDE_H
