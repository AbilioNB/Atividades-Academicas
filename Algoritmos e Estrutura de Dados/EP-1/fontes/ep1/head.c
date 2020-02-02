//
// Created by abili on 15/10/2018.
//
#include <stdio.h>
#include <stdlib.h>

#ifndef UNTITLED_HEADRS_H
#define UNTITLED_HEADRS_H
//Constantes globais
#define MAX_TAM 20000
#define PASSO 500
//Variaveis Globais
int cont_maxIt=0;
int cont_crescIt=0;
int cont_locIt=0;
int cont_segIt=0;


int max_it (int tam,int v[]);
int cresc_it(int tam,int v[]);
int loc_it(int n , int v[],int tam);
int seg_it(int vet[],int tam);

#endif //UNTITLED_HEADRS_H
