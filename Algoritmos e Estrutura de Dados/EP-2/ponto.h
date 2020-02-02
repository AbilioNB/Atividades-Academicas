//
// Created by Abilio on 30/11/2018.
//

#ifndef EP_2_PONTO_H
#define EP_2_PONTO_H
typedef struct {
    int x, y;
}ponto;

float dist(ponto, ponto);
void ordenaX(int, ponto *);
#endif //EP_2_PONTO_H
