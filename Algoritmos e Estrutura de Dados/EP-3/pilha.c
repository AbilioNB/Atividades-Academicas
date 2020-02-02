//
// Created by abili on 23/01/2019.
//
#include <stdlib.h>
#include "pilha.h"

struct elemento{
    Tnumeral dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

Pilha* cria_pilha(){
    Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi!=NULL){
        *pi = NULL;
    }
    return pi;
}
void libera_Pilha(Pilha *pi){
    if(pi !=NULL){
        Elem* aux;
        while ((*pi)!=NULL){
            aux=*pi;
            *pi = (*pi)-> prox;
            free(aux);
        }
        free(pi);
    }
}
int pilha_vazia(Pilha *pi){
    if(pi==NULL){
        return 1;
    }
    if(*pi==NULL){
        return 1;
    }
    return 0;
}
int insere_pilha(Pilha* pi,Tnumeral dado){
    if(pi==NULL){
        return 0;
    }
    Elem* aux = (Elem*) malloc(sizeof(Elem));
    if(aux==NULL){
        return 0;
    }
    aux->dados=dado;
    aux->prox=(*pi);
    *pi = aux;
    return 1;
}
int remove_pilha(Pilha* pi){
    if(pi==NULL) {
        return 0;
    }
    if((*pi)==NULL){
        return 0;
    }
    Elem *aux = *pi;
    *pi = aux->prox;
    free(aux);
    return 1;
}
int consulta_topo_pilha(Pilha *pi,Tnumeral *dado){
    if(pi==NULL){
        return 0;
    }
    if((*pi)==NULL){
        return 0;
    }
    *dado = (*pi)->dados;
    return 1;

}
int tam_pilha(Pilha *pi){
    if(pi==NULL){
        return 1;
    }
    if(*pi==NULL){
        return 1;
    }
    int ct=0;
    Elem* aux;
    while (aux!=NULL){
        ct++;
        aux=aux->prox;
    }
    return ct;
}
