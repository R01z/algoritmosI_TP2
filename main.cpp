#include <iostream>
#include "include/No.h"

using namespace std;

int main(){
    int N,T; //Qtd de pontos de interesse(nós), Qtd de trechos possíveis(arestas)
    int i;
    
    cin >> N >> T; //Lê qtd de nós e arestas

    No nos[N]; //Cria um vetor de Nos

    for(i=0;i<N;i++) cin >> nos[i].VT; //Lê os valores turísticos de cada nó

    for(i=0;i<T;i++) criaAdjacencia(nos); //Ler cada uma das arestas

    

    return 0;
}