#ifndef NO_H
#define NO_H

#include <iostream>
#include "ListaEncadeada.h"

/*A estrutura No contem uma lista com as adjacencias do nó
e seu valor turístico (VT)*/
struct No
{
    int VT;
    ListaEncadeada adjacencia;
};

void criaAdjacencia(No *nos);


#endif