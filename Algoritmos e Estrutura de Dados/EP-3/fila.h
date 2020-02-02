#include <stdlib.h>
#include <stdio.h>
typedef struct carreira{

    int num;
    int ct_rpt;
}Tcarreira;

typedef struct fila Fila;
//Função para a criação da Fila
Fila* cria_fila();
//Libera o espaço alocado pela Fila
void libera_fila(Fila *fi,FILE *arq);
//Tamanho da Fila
int tamanho_fila(Fila *fi);
//Checagem de Fila Cheia
int fila_cheia(Fila* fi);
//Checagem de fila vazia
int fila_vazia(Fila * fi);
//Inserir na fila
int insere_fila(Fila* fi,Tcarreira carreira);
//Remover na fila
int remove_fila(Fila* fi);
//Consultar a fila [apenas o primeiro elemento é consultado]
int consulta_fila(Fila* fi, Tcarreira *aux);
