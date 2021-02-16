//Código por Igor Roiz, 12/2020
/*
Implementação do TipoItem, adaptar conforme necessidade de adaptação
*/

#include <iostream>
#include "include/TipoItem.h"

//Construtores
TipoItem::TipoItem(){
    no = -1;
    vt = -1;
    custo = -1;
};

TipoItem::TipoItem(int No,int Vt, int Custo){
    no = No;
    vt = Vt;
    custo = Custo;
};


//Set, Get e Imprime
void TipoItem::setNo(int n){
    no = n;
};

void TipoItem::setVt(int n){
    vt = n;
};

void TipoItem::setCusto(int n){
    custo = n;
};

int TipoItem::getNo(){
    return no;
};

int TipoItem::getVt(){
    return vt;
};

int TipoItem::getCusto(){
    return custo;
};

void TipoItem::imprime(){
    printf("No extremo:%d\nVT da aresta:%d\nCusto da aresta:%d\n", no,vt,custo);
};