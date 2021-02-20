#ifndef NO_H
#define NO_H

#include <iostream>
#include <vector>
#include "ListaEncadeada.h"

/*A estrutura No contem uma lista com as adjacencias do nó
e seu valor turístico (VT)*/
struct No
{
    int VT;
    std::vector<int> adjacencia;
};

void criaAdjacencia(No *nos, ListaEncadeada &arestas);
void bolha(ListaEncadeada &arestas, int n);

#endif