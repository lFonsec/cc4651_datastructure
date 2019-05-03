include <iostream>
#include <stdlib.h>

#define MAX 5

#ifndef Estatica_H
#define Estatica_H

using namespace std;

class ListaEstatica{
    private:
        int inicio;
        int fim;
        int v[MAX];

    public:

        ListaEstatica();
        void enfilera(int);
        int desenfilera(int*);
    };


ListaEstatica::ListaEstatica(){
    inicio = 0;
    fim = 0;
    }

void ListaEstatica::enfilera(int numero){
    if((fim + 1)%MAX == inicio)
        return;

    v[fim] = numero;
    fim = (fim + 1) % MAX;

    }

int ListaEstatica::desenfilera(int * num){
    if(inicio == fim){
        cout<<"\nSem Elementos!"<<endl<<endl;
        return 0;
        }

        *num = v[inicio];
        inicio = (inicio + 1) % MAX;
        return 1;
    }
