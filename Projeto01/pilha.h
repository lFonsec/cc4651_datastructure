#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#ifndef PILHA_ESTATICA_H
#define PILHA_ESTATICA_H

#define MAX 100
using namespace std;

template<typename T>
class PilhaEstatica{
   private:
       T v[MAX];
       int topo;
       int x=0;
   public:

   friend void operator<<(ostream& out, const PilhaEstatica<T>& p);

   PilhaEstatica(){
       topo = -1;
       }

   bool empilha(T valor){

       if(topo+1 == MAX)
           return false;

       topo++;
       v[topo] = valor;
       x++;
       return true;
   }

   T desempilha(bool *erro=NULL){
       if(topo == -1){
           if(erro){
               *erro = true;
               return v[0];
               }
           }
       T r = v[topo];
       topo--;

       if(erro)
           *erro = false;
       for(int y = 0 ;y<x; y++){
       return r;
       }
   }
};

#endif
