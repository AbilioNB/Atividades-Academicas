#include <stdio.h>
#include <stdlib.h>
#define MAX_TAM 5000
#define PASSO 50
//Variaveis Globais
int cont_maxIt=0;
int cont_crescIt=0;
int cont_locIt=0;
int cont_segIt=0;

FILE *cria_arquivo(char nome[]);
int * cria_vetor();
int max_it (int v[]);
int cresc_it(int v[]);
int loc_it(int n , int v[]);
int seg_it(int vet[]);

    int main() {


        int max,ord,busc,n=249950;

        int *vetor=cria_vetor();
        // vetor[tam-1]=10000;
        //1º fun Interativa
        max=max_it(vetor);
        //2º fun Interativa
        ord=cresc_it(vetor);
        //3º fun Interativa
        busc=loc_it(n,vetor);
        //4º fun Interativa
        int segMaxi= seg_it(vetor);
        printf("  1º = %i |2º= %i  | 3º= %i | 4º= %i",max,ord,busc,segMaxi);

        return 0;
    }
//====================================================================
//Criação de Ponteiros pros  arquivos
FILE *arqMaxIt;
FILE *arqCrescIt;
FILE *arqLocIt;
FILE *arqSegIt;
//Funções de uso geral
FILE *cria_arquivo(char nome[]){
    FILE *pt;
    pt=fopen(nome,"wb");
    return pt;
}
int * cria_vetor() {
    int ct = 0;
    int *vet = malloc(MAX_TAM * sizeof(int));
    for (ct = 0; ct < MAX_TAM; ct++) {
        vet[ct] = ct * PASSO;
    }
    return vet;
}
//Fim
//Funções Interativas
//Está função  recebe um vetor  e logo apos devolve o maior termo dele.
int max_it (int v[]){
    arqMaxIt=cria_arquivo("arqMaxInt");
    int max=v[0],ct;
    for(ct=1;ct<=MAX_TAM;ct++){
        cont_maxIt++;
        fprintf(arqMaxIt,"%i %i\n",ct,cont_maxIt);
        if(max<v[ct]){
            max=v[ct];
        }
    }
    return max;
}
//Está  função recebe um  vetor para assim determinar se esta ordenado ou nao, caso esteja retorna 0
//caso nao retorna 1.
int cresc_it(int v[]){
    arqCrescIt=cria_arquivo("arqCrescIt");
    int ct=0,flag=0;
    for(ct;ct<MAX_TAM-1;ct++){
        cont_crescIt++;
        fprintf(arqCrescIt,"%i  %i\n",ct,cont_crescIt);
        if(v[ct]>v[ct+1]){
            flag=1;
            break;
        }
    }
    return flag;
}
//Está função recebe um vetor e um numero e busca por ele dentro do vetor
// caso ele está contido neste vetor ele retorna a posição, caso não retorna -1
int loc_it(int n , int v[]){
    int pos=-1;
    arqLocIt=cria_arquivo("arqLocIt");
    for(int cont=0;cont<MAX_TAM;cont++){
        cont_locIt++;
        fprintf(arqLocIt,"%i  %i\n",cont,cont_locIt);
        if(v[cont]==n){
            pos=cont;
            break;
        }else if (n < v[cont]){
            break;
        }
    }
    return pos;
}
//Está Função recebe um vetor , e devolve o maior segmento do mesmo.[teste realizado no modo PASSO 50/MAX 5000]
int seg_it(int vet[]){
    int max = vet[0];
    arqSegIt=cria_arquivo("arqSegIt");
    for(int ct = 0;ct<MAX_TAM;ct++){
        cont_segIt++;
        fprintf(arqSegIt,"%i \n",ct);
        int seg=vet[ct];
        for(int ct2= ct+1;ct2 < MAX_TAM;ct2++ ){
            cont_segIt++;
            fprintf(arqSegIt,"%i  %i\n",ct,cont_segIt);
            seg = vet[ct2]+seg;
            if(seg > max){
                max= seg;
            }
        }
    }
    return max;
}
//Divisão Conquista
