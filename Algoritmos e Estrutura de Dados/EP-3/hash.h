
#include <stdio.h>

struct compInt
{
    int n;
    int ct_n;
};
typedef struct hash Hash;
Hash* criaHash(int TABLE_SIZE);
void liberaHash(Hash* ha,FILE *arq,int ct_geral,int num);
int chaveMult(int chave,int TABLE_SIZE);
int insereHash(Hash* ha, struct compInt aux);
int buscaHash(Hash* ha,int num , struct compInt* aux);
