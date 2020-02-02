#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "pilha.h"
#include "hash.h"

//Variavel Global do Hash
int TABLE_SIZE = 100000000;
int CT_NUM=0;


FILE * open_arq_let(char nomearq[]){
    FILE *pt;
    pt=fopen(nomearq,"r");
   /* if(pt==NULL){
        pt=fopen(nomearq,"a+");
    }*/
    return pt;
}
FILE * open_arq_red(char nomeard[]){
    FILE *pt;
    pt=fopen(nomeard,"a+b");
    return pt;
}


int main() {


    //Definições do arquivo
    char arq_leitura[] = "inputvl.txt";
    char arq_grav[] = "output.txt";
    FILE *arq_input;
    FILE *arq_output;
    //Cria Arquivos de leitura e gravação
    arq_input = open_arq_let(arq_leitura);
    arq_output = open_arq_red(arq_grav);
    if (arq_input != NULL) {
        //Certifica que o apontador está na primeira posição
        rewind(arq_input);
        //Implementação da Fila
        Fila *fila_rle;
        fila_rle = cria_fila();
        //Implementação da Pilha
        Pilha *pilha_piramide;
        pilha_piramide = cria_pilha();
        //Implementação do Hash
        Hash *ha;
        ha=criaHash(TABLE_SIZE);

        //variaveis de controle da pilha
        int desc = 0;
        int ctp_atual = 0;
        int ctp_max = -1;


        //Lendo do arquivo e jogando para lista
        int num_ant = -1;
        int ct_rpt = 1;
        int fn = 0;
        while (!feof(arq_input)) {
            //Leitura do Numero do Arquivo
            int num_lido;
            fscanf(arq_input, "%i", &num_lido);
            //Teste da parte do RLE
            if (fn != 0) {
                if (num_lido == num_ant) {
                    //Para numeros iguais
                    ct_rpt++;
                } else {
                    //Não é igual então vamos gravar \o
                    Tcarreira aux;
                    aux.num = num_ant;
                    aux.ct_rpt = ct_rpt;
                    insere_fila(fila_rle, aux);
                    ct_rpt = 1;
                }
            } else {
                fn = 1;
            }
            num_ant = num_lido;

           //parte relativa a filha
            Tnumeral elemento_atual;
            elemento_atual.num=num_lido;
            if(pilha_vazia(pilha_piramide)){
                insere_pilha(pilha_piramide,elemento_atual);
            } else{

                    Tnumeral topo_fila;
                    consulta_topo_pilha(pilha_piramide,&topo_fila);
                    if(elemento_atual.num>topo_fila.num){
                        insere_pilha(pilha_piramide,elemento_atual);
                    }
                    if(elemento_atual.num<topo_fila.num){
                        ctp_atual=0;
                        libera_Pilha(pilha_piramide);
                        pilha_piramide=cria_pilha();
                        insere_pilha(pilha_piramide,elemento_atual);
                    }else{
                        if(elemento_atual.num==topo_fila.num){
                            ctp_atual++;
                            remove_pilha(pilha_piramide);
                            if(pilha_vazia(pilha_piramide)){
                                ctp_atual=ctp_atual*2;
                                if(ctp_atual>ctp_max){
                                    ctp_max=ctp_atual;
                                }
                                ctp_atual=0;
                            }

                        }
                    }
            }
            //Parte Relativa ao Hash
            //primeiro buscamos se aquele hash já existe
            int aux_resp;
            struct compInt aux_compInt;
            aux_resp=buscaHash(ha,num_lido,&aux_compInt);
            if(aux_resp==-1){
                //quer dizer que não existe este numero logo irei adicina-lo pela primeira vez
                aux_compInt.ct_n=1;
                aux_compInt.n=num_lido;
                insereHash(ha,aux_compInt);
            }else if(aux_resp==1){
                //quer dizer que já existe,logo eu carrego ele , altero o contador de repetição e re-insiro na tabela
                aux_compInt.ct_n++;
                insereHash(ha,aux_compInt);
            }
            CT_NUM++;
        }
        //Faz com que salve depois de esgotar o arquivo
        Tcarreira aux;
        aux.num=num_ant;
        aux.ct_rpt=ct_rpt;
        insere_fila(fila_rle,aux);
        //Libera a fila e imprime no arquivo
        libera_fila(fila_rle,arq_output);
        //Imprime a pilha
        fprintf(arq_output,"%i",ctp_max);
        //Destroi a pilha e o ponteiro
        libera_Pilha(pilha_piramide);
        free(pilha_piramide);
        //Vou definir aqui o N , que quem repetir esse N vezes será printado ao final.
        int Nvezes=9;
        //Destroi o hash e imprime no arquivo
        liberaHash(ha,arq_output,CT_NUM,Nvezes);
        //fim do IFão
    }

    return 0;
    }









