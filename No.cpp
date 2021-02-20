#include <iostream>
#include <stdio.h>
#include "include/No.h"

using namespace std;

void criaAdjacencia(No *nos, ListaEncadeada &arestas){
    TipoItem *aux;

    int no1,no2,valor,vtSomado;

    cin >> no1 >> no2 >> valor;

    vtSomado = nos[no1].VT + nos[no2].VT;

    nos[no1].adjacencia.push_back(no2);
    nos[no2].adjacencia.push_back(no1);

    aux = new TipoItem(no1,no2,vtSomado,valor);

    arestas.insereFinal(*aux);

    free(aux);
}

void bolha(ListaEncadeada &arestas, int n){
    int i,j;
    TipoItem itemA, itemB;

    for(i=0;i<=n-1;i++){
        for(j=1;j<=n-i;j++){
            itemA = arestas.getItem(j);
            itemB = arestas.getItem(j-1);
            if(itemA.getCusto() < itemB.getCusto())
                arestas.troca(j,j-1); 
            else if(itemA.getCusto() == itemB.getCusto())
                if(itemA.getVt() > itemB.getVt())
                    arestas.troca(j-1,j); 
        }
    }
};