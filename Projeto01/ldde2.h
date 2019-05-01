#ifndef LDDE2_H
#define LDDE2_H

#include<iostream>
#include<cstdlib>

#include"no.h""
#include"no-ldde2.h"

class Ldde2{
private:
    int size;
    NoLdde2* primeiro;
    NoLdde2* ultimo;

public:
    Ldde2():primeiro(NULL), size(0){}

    bool insere(No*hospede,QString dataCheckOut, QString horaCheckOut){
            NoLdde2* novo = new NoLdde2(hospede, dataCheckOut, horaCheckOut);

            if(!novo){
                return false;
            }

            NoLdde2* anterior = NULL;
            NoLdde2* atual = primeiro;

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

    NoLdde2 buscar(QString cpf){
        if(!primeiro){

            No* a= new No("Hospede não encontrado", "");
            NoLdde2* b = new NoLdde2(a, "","");
            return *b;

        }

        if(primeiro->getCpfHospede() == cpf)
            return *primeiro;


    }



};
#endif // LDDE_H
