
#include "headrs.h"

int * cria_vetor();

int main() {


    int max,ord,busc,n=6;

    int *vetor=cria_vetor();
   // vetor[tam-1]=10000;
   //1º fun Interativa
   max=max_it(MAX_TAM,vetor);
    //2º fun Interativa
    ord=cresc_it(MAX_TAM,vetor);
    //3º fun Interativa
    busc=loc_it(n,vetor,MAX_TAM);
    //4º fun Interativa
    int segMaxi= seg_it(vetor,MAX_TAM);
    printf("  1º = %i |2º= %i  | 3º= %i | 4º= %i",max,ord,busc,segMaxi);

    return 0;
}
int * cria_vetor(){
    int ct=0;
    int *vet = malloc(MAX_TAM * sizeof(int));
    for(ct=0;ct<MAX_TAM;ct++){
        vet[ct]=ct*PASSO;
    }
    return vet;
}