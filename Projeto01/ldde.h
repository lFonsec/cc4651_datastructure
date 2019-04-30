#ifndef LDDE_H
#define LDDE_H

#include<iostream>
#include<cstdlib>

#include"no.h"
#include"no-ldde.h"

class Ldde{
private:
    int size;
    NoLdde* primeiro;
    NoLdde* ultimo;

public:
    Ldde():primeiro(NULL), size(0){}

    bool insere(No*hospede, QString diaCI, QString hhCI, QString diaCO, QString hhCO){
            NoLdde* novo = new NoLdde(hospede, diaCI, hhCI, diaCO, hhCO);

            if(!novo){
                return false;
            }

            NoLdde* anterior = NULL;
            NoLdde* atual = primeiro;

            while(atual){
                anterior = atual;
                atual = atual->prx;
            }
            if(anterior)
                anterior->prx = novo;
            else
                primeiro = novo;

            if(atual)
                atual->ant=novo;
            else
                ultimo= novo;

            novo->prx = atual;
            novo->ant = anterior;

            size++;
            return true;

  }

    NoLdde buscar(QString cpf){
        if(!primeiro){

            No* a= new No("Hospede não encontrado", "");
            NoLdde* b = new NoLdde(a, "","", "", "");
            return *b;

        }

        if(primeiro->getCpfHospede() == cpf)
            return *primeiro;


    }



};
#endif // LDDE_H
