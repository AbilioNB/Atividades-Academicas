#include <math.h>
#include <malloc.h>
#include "ponto.h"


// Devolve a distância euclidiana
// entre os pontos "a" e "b".
float dist(ponto a, ponto b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

// *** INÍCIO EDITAR ***

// Recebe um vetor v[0..n-1] de pontos
// Permuta os elementos nesse vetor
// de forma a torná-lo crescente
// de acordo com a coordenada x.
// O código abaixo é a ordenação por inserção.
// Essa alternativa não é satisfatória porque
// não garante a complexidade n lg n do algoritmo
// Shamos-Hoey (porque a ordenação é utilizada
// como etapa preliminar do algoritmo.)
// Você deve substituir esse código por outro
// algoritmo de ordenação, de complexidade n lg n.
//Criar Heap
void troca(int num1,int num2){
    int aux= num1;
    num1=num2;
    num2=aux;
}
static void constroiHeap (int m, ponto v[])
{
    for (int k = 1; k < m; ++k) {
        int f = k+1;
        while (f > 1 && v[f/2].x < v[f].x) {
            troca (v[f/2].x, v[f].x);
            f /= 2;
        }
    }
}
static void peneira (int m, ponto v[])
{
    int p = 1, f = 2;
    ponto aux = v[1];
    while (f <= m) {
        if (f < m && v[f].x < v[f+1].x) ++f;
        if (aux.x >= v[f].x) break;
        v[p] = v[f];
        p = f, f = 2*p;
    }
    v[p] = aux;
}
void ordenaX(int n, ponto v[]) {
    constroiHeap (n, v);
    for (int m = n; m >= 2; --m) {
        troca (v[1].x, v[m].x);
        peneira (m-1, v);
    }
}
// *** FIM EDITAR ***


// *** INÍCIO EDITAR ***
int* constroiHeapY(int m, ponto v[]){
    int *aux = (int) malloc(m * sizeof(int));
    for(int k = 1; k < m; ++k){
        int f = k;
        while(f > 1 && aux[v[f/2].y] < aux[v[f].y]){
            troca(aux[v[f/2].y], aux[v[f].y]);
            f=f/2;

        }
    }
    return aux;
}
void peneiraY(int m, ponto v[], int w[]){

    int p = 1, f = 2, y = v[1].y;
    while(f <= m){
        if(f < m && v[w[f]].y < v[f+1].y){
            ++f;
        }
        if(y >= v[f].y){
            break;
        }
        w[p] = w[f];
        p = f, f = 2*p;
    }
    w[p] = y;
}
int* ordenaY(int n, ponto v[]) {
    int m;
    int *w = constroiHeapY(n, v);

    for(m = n; m >= 2; --m){
        troca(w[1], w[m]);
        peneiraY(m - 1, v, w);
    }
}
// *** FIM EDITAR ***
