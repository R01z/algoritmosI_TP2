#include <iostream>
#include <stdio.h>
#include "include/No.h"

using namespace std;

void criaAdjacencia(No *nos, ListaEncadeada &arestas){
    TipoItem *aux;

    int no1,no2,valor,vtSomado;

    cin >> no1 >> no2 >> valor;//Ler entrada padrão

    vtSomado = nos[no1].VT + nos[no2].VT;//VT de uma aresta é a soma dos VTs dos nós que ela liga

    //Adjacência dos nós, tendo em vista que é um grafo não direcionado
    nos[no1].adjacencia.push_back(no2);
    nos[no2].adjacencia.push_back(no1);

    aux = new TipoItem(no1,no2,vtSomado,valor);//Cria a aresta

    arestas.insereFinal(*aux);//Inserir a nova aresta no fim da lista de arestas

    free(aux);
}

/*A lista de arestas é ordenada com o método bolha. Do menor custo ao maior, em caso de custos iguais
O maior VT vem primeiro*/
void ordena(ListaEncadeada &arestas, int n){
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

/*Função de caminhamento em grafos DFS será usada para conferir se o grafo é conectado*/
void DFS(int n,bool visitados[], No *nos){
    vector<int>::iterator i; //Incremento do vetor

    visitados[n] = true; // O nó atual é marcado como visitado

    //Para todos os nós com os quais o nó N se conecta
    for(i=nos[n].adjacencia.begin();i!=nos[n].adjacencia.end();++i)
        if(!visitados[*i]) DFS(*i,visitados,nos); //Se a posição i não foi visitada, chama DFS recursivamente para i
}

bool conectado(No *nos,int qdtNos){
    int i;
    bool visitados[qdtNos];//Vetor que marca os nós como visitados ou não(true = visitado)

    memset(visitados,false,qdtNos);//Vetor de visitados é iniciado como falso em todas as posições

    /*Chama a função DFS que percorrera o grafo conferindo se ele está conectado, começando pela primeira posição
    das listas de adjacência, ao final se todas as posições do vetor visitados[] forem true, o grafo é conectado,
    se pelo menos uma for falsa, não é conectado*/
    DFS(0,visitados,nos);

    for(i=0;i<qdtNos;i++)
        if(visitados[i] == false) return false;//Retorna false se um nó não tiver sido visitado
    
    return true; //Retorna verdadeiro se todos os nós foram visitados
}