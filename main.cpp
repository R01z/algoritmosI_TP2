#include <iostream>
#include "include/No.h"

using namespace std;


int main(){
    int N,T; //Qtd de pontos de interesse(nós), Qtd de trechos possíveis(arestas)
    int i,j;
    int custoMinimo=0,vtAgregado=0;
    
    cin >> N >> T; //Lê qtd de nós e arestas

    No nos[N]; //Cria um vetor de Nos

    ListaEncadeada arestas; //Lista de arestas do grafo
    ListaEncadeada arvoreGM; //Lista de aresta que fazem parte da árvore geradora mínima

    for(i=0;i<N;i++) cin >> nos[i].VT; //Lê os valores turísticos de cada nó

    for(i=0;i<T;i++) criaAdjacencia(nos,arestas); //Ler cada uma das arestas

    ordena(arestas,T);//Ordenar a lista de arestas

    reverseDelete(arestas,arvoreGM,nos,N,custoMinimo,vtAgregado);//Usa método reverse-delete para obter AGM

    //Saída de dados
    printf("%d %d\n",custoMinimo,vtAgregado);//Custo mínimo para construção da ciclovia e atratividade agregada
    for(i=0;i<N;i++)//Qtde de trechos da ciclovia partindo/chegando no ponto de interesse
        printf("%d ",nos[i].adjacencia.size());
    printf("\n");
    arvoreGM.imprime();//Relacão dos trechos selecionados para ciclovia no mesmo formato da entrada

    return 0;
}