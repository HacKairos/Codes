#include<stdio.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void divide_lista (celula *l, celula *l1, celula *l2){
int x;
celula *tatu=malloc(sizeof(celula));
celula *elem;
celula *elem1=l1,*elem2=l2;

for(elem=l;elem!=NULL;elem=elem->prox){
tatu->dado=elem->dado;
if(elem->dado%2){
tatu->prox=elem2->prox;
elem2->prox=tatu;
elem2=elem2->prox;
}
else{
tatu->prox=elem1->prox;
elem1->prox=tatu;
elem1=elem1->prox;
}
}
l1=elem1;
l2=elem2;
}