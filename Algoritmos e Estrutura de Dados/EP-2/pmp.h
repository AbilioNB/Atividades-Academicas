//
// Created by Abilio on 30/11/2018.
//

#ifndef EP_2_PMP_H
#define EP_2_PMP_H
#include "ponto.h"

// Estrutura que representa um par de pontos
// Guarda também a distância (aproximada)
// entre esses pontos
typedef struct {
    ponto a;
    ponto b;
    float dist;
} par;

par pmp(int, ponto *);
par pmp_dc(ponto *, int, int);
#endif //EP_2_PMP_H
