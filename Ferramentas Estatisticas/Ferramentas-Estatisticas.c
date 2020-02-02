/*Codado no desespero por Abílio Nogueira
Funções para realizar exercicios de Media,Variancia e Frequencias(Acumulada e Relativa)
Para encerar os de entrada basta informar -1 0 . Com essas entradas ele irá encerrar e expor o resultado sem 
qualquer alteração.Já no caso das frequencias a partir do momento que chega a 1 é finalizado.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void calcVar(){

    float num=0;
    double total=0,resul;
    int qt =0,ni;
    printf("Informe a media:\n");
    float med;
    scanf("%f",&med);
    while (num!=-1){
        scanf("%f %i",&num,&ni);

        resul=pow((num-med),2)*ni;
        printf("%3f\n",resul);
        total=total+resul;
    }
    printf("Infome o numero a dividir\n");
    scanf("%i",&ni);
    printf("%5f",total/ni-1);
    return;
}
void freq(){

    int n;
    float nl,acumulada=0;
    printf("Frequencia Relativa | Frequencia Acumulada\n\n");

    printf("Informe o N [Total de Numeros]\n");
    scanf("%i",&n);
    while (acumulada!=1){

        //printf("Informe N[i]:\n");
        scanf("%f",&nl);
        float buff=nl/n;
        acumulada=acumulada+buff;
        printf("Relativa:%.3f Acumulada:%.3f\n",buff,acumulada);
    }

}
void medi(){

    float ni=1,pi;
    double acumula = 0;
    while (ni>0){
        scanf("%f %f",&ni,&pi);
        float buf= ni*pi;
        acumula=buf+acumula;
        printf("%.3f\n",buf);
    }
    printf("%.5f\n",acumula);
}

int main(){

    int op;
    printf("1-- Calcular Media \n 2--Calcular Variancia\n 3--Frequencias\n");
    scanf("%i",&op);
    switch (op) {
        case 1 :
            medi();
            break;
        case 2:
            calcVar();
            break;
        case 3:
            freq();
            break;
    }

    return 0;
}