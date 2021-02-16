#include <iostream>
#include <stdio.h>
#include "include/No.h"

using namespace std;

void criaAdjacencia(No *nos){
    TipoItem *item1, *item2;

    int no1,no2,valor,vtSomado;

    cin >> no1 >> no2 >> valor;

    vtSomado = nos[no1].VT + nos[no2].VT;

    item1 = new TipoItem(no2,vtSomado,valor);
    item2 = new TipoItem(no1,vtSomado,valor);

    nos[no1].adjacencia.insereFinal(*item1);
    nos[no2].adjacencia.insereFinal(*item2);

    free(item1);
    free(item2);
}


