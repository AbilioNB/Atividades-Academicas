#include "hash.h"
#include <stdio.h>
#include <stdlib.h>
struct hash{
        int qtd,TABLE_SIZE;
        struct compInt **itens;
};
Hash* criaHash(int TABLE_SIZE){
    Hash *ha = (Hash*) malloc(sizeof(Hash));
    if(ha != NULL){
        int ct;
        ha-> TABLE_SIZE = TABLE_SIZE;
        ha->itens = (struct compInt**)malloc(TABLE_SIZE * sizeof(struct compInt*));
        if(ha->itens==NULL){
            free(ha);
            return NULL;
        }
        ha->qtd=0;
        for(int i=0;i < ha->TABLE_SIZE;i++){
            ha->itens[i]=NULL;
        }
    }
    return ha;
    /*Para criar uma hash na main basta chamar Hash* ha = criaHash(tamHash);*/
}
void liberaHash(Hash* ha,FILE *arq,int ct_geral,int num){

    if(ha!= NULL){
        int tam =5;
        int *vet=malloc(tam*sizeof(int));
        int pos =0;

        for(int ct=0;ct < ha-> TABLE_SIZE;ct++){
            if(ha->itens[ct] != NULL){
               //Imrpimir valores
                float res = ha->itens[ct]->ct_n/ct_geral;
                fprintf(arq,"%i  %i  %lf",ha->itens[ct]->n,ha->itens[ct]->ct_n,res);
                fprintf(arq," ");
                if(num==ha->itens[ct]->ct_n){
                    vet[pos]=ha->itens[ct]->n;
                    pos++;
                    if(pos+1==tam){
                        tam=tam+2;
                        realloc(vet,tam* sizeof(int));
                    }
                }
                free(ha->itens[ct]);
            }
        }
        free(ha->itens);
        free(ha);
       //Imprimo os numeros que se repitirão N vezes
        for(int ct1=0;ct1<pos;ct1++){
            fprintf(arq,"%i",vet[ct1]);
        }
        free(vet);
    }
    /*Para chamar no principal : liberaHash(ha);*/
}
int chaveMult(int chave,int TABLE_SIZE){
    float A=0.618557;
    float val = chave * A;
    val = val - (int) val;
    return  (int) (TABLE_SIZE * val);
}
int insereHash(Hash* ha, struct compInt aux){
    if(ha==NULL||ha->qtd==ha->TABLE_SIZE){
        return 0;
    }
    int key = aux.n;
    int pos = chaveMult(key,ha->TABLE_SIZE);
    struct compInt* new;
    new = (struct compInt*) malloc(sizeof(struct compInt));
    if(new==NULL){
        return 0;
    }
    *new=aux;
    ha->itens[pos]=new;
    ha->qtd++;
    return 1;
}
//para utilizar esta função na main : insereHash(tableaHash,elemento);
int buscaHash(Hash* ha,int num , struct compInt* aux){

    if(ha==NULL){
        return 0;
    }
    int pos=chaveMult(num,ha->TABLE_SIZE);
    if(ha->itens[pos]==NULL){
        //Não existe este elemento
        return -1;
    }
    *aux=*(ha->itens[pos]);
    return 1;
}
//Para chamar a função na main int resp=buscaHash(tableaHash,num,&recpt);


