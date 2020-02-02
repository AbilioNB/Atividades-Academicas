#include "fila.h"
//Definições
struct noh{

    Tcarreira dado;
    struct noh *prox;
};

struct fila{
    struct noh *inicio;
    struct noh *fim;
};
//ps.: Elemento
typedef struct noh Noh;

Fila * cria_fila(){

    Fila* fi = (Fila*) malloc(sizeof(Fila));
    if(fi != NULL){
        fi->fim=NULL;
        fi->inicio=NULL;
    }
    return fi;
}
void libera_fila(Fila *fi, FILE *arq){
    if(fi !=NULL){
        Noh* aux;
        if(fi->inicio != NULL){
            while (fi->inicio != NULL){
                aux= fi->inicio;
                fprintf(arq,"%i.%i ",aux->dado.ct_rpt,aux->dado.num);
                fprintf(arq," ");
                fi->inicio = fi->inicio->prox;
                free(aux);
            }
           free(fi);
        }
    }
}
int tamanho_fila(Fila *fi){
    if(fi==NULL) {
        return 0;
    }
    int ct=0;
    Noh * aux=fi->inicio;
    while (aux!= NULL){
        ct++;
        aux=aux->prox;
    }
    return ct;
}
int fila_cheia(Fila* fi){
    return 0;
}
int fila_vazia(Fila * fi){
    if(fi==NULL){
        return 1;
    }else if(fi->inicio==NULL){
        return 1;
    }
    return 0;
}
int insere_fila(Fila* fi,Tcarreira carreira){
    if(fi == NULL){
        return 0;
    }
    Noh *aux= (Noh*)malloc(sizeof(Noh));
    if(aux==NULL){
        return 0;
    }
    aux->dado=carreira;
    aux->prox=NULL;
    if(fi->fim==NULL){
        //fila vazia
        fi->inicio=aux;
    }else{
       fi->fim->prox=aux;
    }
    fi->fim=aux;
    return 1;
}
int remove_fila(Fila* fi){
    if(fi==NULL){
        return 0;
    }
    if(fi->inicio==NULL){
        return 0;
    }
    Noh *aux= fi->inicio;
    fi->inicio=fi->inicio->prox;
    if(fi->inicio==NULL){
        fi->fim=NULL;
    }
    free (aux);
    return 1;
}
int consulta_fila(Fila* fi, Tcarreira *aux){
    if(fi==NULL){
        return 0;
    }
    if(fi->inicio==NULL){
        return 0;
    }
    *aux = fi->inicio->dado;
    return 1;
}
