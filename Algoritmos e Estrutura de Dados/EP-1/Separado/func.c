
#include "headrs.h"

//
// Created by Abilio N on 15/10/2018.
//
/*FILE *cria_arquivo(){
    FILE *pt;
    pt= fopen("ArqMaxIt","w");
    return pt;
}*/
//Criação de arquivos

    //FILE *arqMaxIt;



//Funções Interativas


//A função max_it recebe um vetor e seu tamanho e logo apos devolve o maior termo dele
int max_it (int tam,int v[]){
   // arqMaxIt=cria_arquivo();
    int max=v[0],ct;

    for(ct=1;ct<=tam;ct++){
        cont_maxIt++;
        //fprintf(arqMaxIt,"%i %i",v[ct],cont_maxIt);
        if(max<v[ct]){
            max=v[ct];
        }
    }
    return max;
}
//A função "cresc_it" recebe o tamanho e o vetor para assim determinar se esta ordenado ou nao, caso esteja retorna 0
//caso nao retorna 1.
int cresc_it(int tam,int v[]){
    int ct=0,flag=0;
    for(ct;ct<tam-1;ct++){
        if(v[ct]>v[ct+1]){
            flag=1;
            break;
        }
    }
    return flag;
}

//A função busca e retorna a posição que o numero esta no vetor e caso não encontre retorna -1
int loc_it(int n , int v[],int tam){

    int pos=-1;

    for(int cont=0;cont<tam;cont++){
        if(v[cont]==n){
            pos=cont;
            break;
        }else if (n < v[cont]){
            break;
        }
    }
    return pos;
}
//A função segMax recebe um vetor e o tamanho e devolve o valor do maior segmento encotnrado.
int seg_it(int vet[],int tam){

    int max = vet[0];
    for(int ct = 0;ct<tam;ct++){
        int seg=vet[ct];
        for(int ct2= ct+1;ct2 < tam;ct2++ ){

            seg = vet[ct2]+seg;

            if(seg > max){
                max= seg;
            }
        }
    }
    return max;
}