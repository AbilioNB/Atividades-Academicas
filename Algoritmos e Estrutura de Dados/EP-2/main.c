// Algoritmos e Estruturas de Dados 2018.2
// Bacharelado em Ciência da Computação
//
// Exercício-Programa 2
//
// <Abílio Nogueira Barros>
//
// (repita esse cabeçalho em todos os arquivos)

#include <stdio.h>
#include <stdlib.h>
#include "pmp.h"

ponto *le_arquivo();

// Você pode supor que o número n de pontos
// é uma variável global em main.c e que é
// lida do arquivo pontos.dat
int n;

int main(void) {

    // A função principal simplesmente lê os pontos
    // do arquivo pontos.dat (o nome é sempre esse)
    // e chama o algoritmo Shamos-Hoey.
    // Finalmente, imprime as coordenadas do par de
    // pontos devolvido pelo algoritmo.

    ponto *v = le_arquivo();
    par p = pmp(n, v);
    printf("Par mais próximo: (%d, %d), (%d, %d)\n", p.a.x, p.a.y, p.b.x, p.b.y);
    return 0;
}

// Abre o arquivo pontos.dat e grava os pontos
// nesse arquivo em um vetor de pontos (ver tipo ponto em ponto.h).
// O número n de pontos é uma variável global declarada antes do
// main.
// Veja o formato do arquivo de
// entrada no enunciado.
ponto *le_arquivo() {

    // *** INÍCIO EDITAR ***
    FILE *arq;
    arq=fopen("pontos.dat","r");

    int nPar;
    fscanf(arq,"%i",&nPar);
    ponto *vertorP = malloc(nPar* sizeof(ponto));
    for(int i=0;i< nPar;i++){
        fscanf(arq,"%i",&vertorP[i].x);
    }
    for(int i=0;i< nPar;i++){
        fscanf(arq,"%i",&vertorP[i].y);
    }
    return vertorP;
    // *** FIM EDITAR ***
}