#ifndef NO_H
#define NO_H

#include <iostream>
#include <list>
#include <bits/stdc++.h>
#include "ListaEncadeada.h"

/*A estrutura No contem uma lista com as adjacencias do nó
e seu valor turístico (VT)*/
struct No
{
    int VT;
    std::list<int> adjacencia;
};

void criaAdjacencia(No *nos, ListaEncadeada &arestas);//Criar adjacência e ler lista de arestas
void ordena(ListaEncadeada &arestas, int n);//Função para ordenar a lista de arestas
void DFS(int n,bool visitados[]);//Função DFS
bool conectado(No *nos,int qdtNos);//Checa se grafo é conectado
//Função que transforma o grafo na árvore geradora mínima
void reverseDelete(ListaEncadeada &arestas,ListaEncadeada &arvoreGM,No *nos,int qdtNos,int &cTotal,int &vtTotal);

#endif