#include <iostream>
#include "include/No.h"

using namespace std;


int main(){
    int N,T; //Qtd de pontos de interesse(nós), Qtd de trechos possíveis(arestas)
    int i,j;
    
    cin >> N >> T; //Lê qtd de nós e arestas

    No nos[N]; //Cria um vetor de Nos

    ListaEncadeada arestas; //Lista de arestas

    for(i=0;i<N;i++) cin >> nos[i].VT; //Lê os valores turísticos de cada nó

    for(i=0;i<T;i++) criaAdjacencia(nos,arestas); //Ler cada uma das arestas

    bolha(arestas,T);


    return 0;
}