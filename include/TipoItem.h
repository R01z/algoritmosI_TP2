//Código por Igor Roiz, 12/2020
/*
A classe 'TipoItem' tem por objetivo criar os itens que serão armazenados nas células das estruturas,
Essa classe deve ser editada conforme o que se deseja guardar nas células, podendo ser tanto o item em si
quanto possuir apontadores para outros objetos e structs
*/

/*
TipoItem para TP02 de Algoritmos I, contém o segundo nó que forma a aresta,
o custo dessa aresta(Ct) e o VT da conexão (soma dos VTs dos dois nós que formam a aresta)
*/

#ifndef TIPOITEM_H
#define TIPOITEM_H

class TipoItem
{
    private:
        int no,vt,custo;

    public:
        TipoItem();
        TipoItem(int no,int vt, int custo); //Construtor

        void setItem(int n); //Sets
        int getItem(); //gets
        void imprime(); //imprimir componentes do item
};


#endif