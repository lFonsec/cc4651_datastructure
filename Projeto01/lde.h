#ifndef LDE_H
#define LDE_H

#include<QMessageBox>
#include<cstdlib>
#include<iostream>

#include "no.h"
using namespace std;

class Lde{
private:
    No *primeiro;

public:
    Lde():primeiro(NULL){}

    bool insere(QString nome, QString cpf){
        No*n = this->busca(cpf);


        No *novo = new No(nome, cpf);
        if(!novo){
           return false;
        }

        No* anterior = NULL;
        No* atual = primeiro;

        while(atual!=NULL){
          anterior = atual;
          atual = atual->proximo;
        }

        if(anterior)
          anterior->proximo = novo;
        else
          primeiro = novo;

        novo->proximo = atual;
        return true;


    }


    No* busca(QString valor){

      No* a=primeiro;
      while(a){
        if(a->getCPF()==valor)
          return a;
        a=a->proximo;
      }

      a = new No("Hospede não encontrado", "");
      return a;

    }

    bool remove(QString valor){
      if(!primeiro)
          return false;

      bool cond=false;

      No* anterior = NULL;
      No* atual=primeiro;

      if(atual->getCPF() == valor){
        primeiro = atual->proximo;
        delete atual;
        return true;
      }

      while(atual){
        if(atual->getCPF()==valor){
          cond=true;
          break;
        }
        anterior = atual;
        atual=atual->proximo;
      }

      if(cond){
        anterior->proximo = atual->proximo;
        delete atual;
        return true;
      }else{

        return false;
      }

    }



};

#endif // LDE_H
