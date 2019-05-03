#ifndef NOLDDE2_H
#define NOLDDE2_H

#include<iostream>
#include<cstdlib>

#include "no2.h"
#include<QString>

class NoLdde2{

public:
  NoLdde2(No2* hospede, QString diaCheckOut, QString horaCheckOut): prx(NULL), ant(NULL){
    hospede=hospede;
    diaCheckOut=diaCheckOut;
    horaCheckOut=horaCheckOut;
  }


  No2*hospede;
  NoLdde2*prx;
  NoLdde2*ant;

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
