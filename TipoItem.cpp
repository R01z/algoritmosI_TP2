//Código por Igor Roiz, 12/2020
/*
Implementação do TipoItem, adaptar conforme necessidade de adaptação
*/

#include <iostream>
#include "include/TipoItem.h"

//Construtores
TipoItem::TipoItem(){
    no1 = -1;
    no2 = -1;
    vt = -1;
    custo = -1;
};

TipoItem::TipoItem(int No1,int No2,int Vt, int Custo){
    no1 = No1;
    no2 = No2;
    vt = Vt;
    custo = Custo;
};


//Set, Get e Imprime
void TipoItem::setNo1(int n){
    no1 = n;
};

void TipoItem::setNo2(int n){
    no2 = n;
};

void TipoItem::setVt(int n){
    vt = n;
};

void TipoItem::setCusto(int n){
    custo = n;
};

int TipoItem::getNo1(){
    return no1;
};

int TipoItem::getNo2(){
    return no2;
};


int TipoItem::getVt(){
    return vt;
};

int TipoItem::getCusto(){
    return custo;
};

void TipoItem::imprime(){
    printf("%d-%d|%d|%d\n", no1,no2,vt,custo);
};