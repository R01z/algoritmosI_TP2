#include <iostream>
#include "No.h"

using namespace std;

int main(){
    int N,T; //Qtd de pontos de interesse(nós), Qtd de trechos possíveis(arestas)
    int i;
    
    cin >> N >> T; //Lê qtd de nós e arestas

    No *nos; //Cria um vetor de Nos
    nos = (No*)malloc(N*sizeof(No*)); //Aloca dinâmicamete

    for(i=0;i<N;i++) cin >> nos[i].VT; //Lê os valores turísticos de cada nó

    for(i=0;i<T;i++) criaAdjacencia(*nos); //Ler cada uma das arestas

    for(i=0;i<N;i++){
        printf("No %d:\nVT = %d\n",i,nos[i].VT);
        printf("Arestas:\n");
        nos[i].adjacencia.imprime();
        printf("\n-------------------------------------------------------\n");
    }

    return 0;
}