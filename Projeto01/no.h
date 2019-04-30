#ifndef NO_H
#define NO_H

#include<cstdlib>
using namespace std;

class No{
private:
  QString nome;
  QString cpf;


public:
  No(QString nomeP, QString cpfP){
      nome =nomeP;
      cpf=cpfP;
  }

  No* proximo;

  QString getNome(){
      return nome;
  }

  QString getCPF(){
      return cpf;
  }

};
#endif
