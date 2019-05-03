#ifndef NO2_H
#define NO2_H


#include<cstdlib>
using namespace std;

class No2{
private:
  QString nome;
  QString cpf;


public:
  No2(QString nomeP, QString cpfP){
      nome = nomeP;
      cpf = cpfP;
  }

  No2* proximo;

  QString getNome(){
      return nome;
  }

  QString getCPF(){
      return cpf;
  }

};
#endif
