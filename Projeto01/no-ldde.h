#ifndef NOLDDE_H
#define NOLDDE_H

#include<iostream>
#include<cstdlib>

#include "no.h"

class NoLdde{

public:
  NoLdde( No* hospede, QString diaCI, QString hhCI, QString diaCO, QString hhCO): prx(NULL), ant(NULL){
    hospede=hospede;
    diaCI=diaCI;
    diaCO=diaCO;
    hhCI=hhCI;
    hhCO=hhCO;
  }


  No*hospede;
  NoLdde*prx;
  NoLdde*ant;

  QString diaCI;
  QString hhCI;
  QString diaCO;
  QString hhCO;

  QString getCpfHospede(){
    return hospede->getCPF();
  }

  QString getHospedeNome(){
      return hospede->getNome();
  }


};

#endif // NOLDDE_H
