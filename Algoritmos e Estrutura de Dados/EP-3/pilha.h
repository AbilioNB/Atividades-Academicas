//
// Created by abili on 23/01/2019.
//
typedef struct numeral{
    int num;
}Tnumeral;
typedef  struct elemento* Pilha;

//Cria a pilha dinamica
Pilha* cria_pilha();
//Libera o espaço alocado para aquela pilha
void libera_Pilha(Pilha *pi);
//Checa se a lista é vazia
int pilha_vazia(Pilha *pi);
//Inseri um elemento na pilha
int insere_pilha(Pilha* pi,Tnumeral aux);
//Remove o primeiro elemento de uma pilha
int remove_pilha(Pilha* pi);
//Consulta o elemento do topo da pilha
int consulta_topo_pilha(Pilha *pi,Tnumeral *dado);
//Retorna o tamanho da pilha atual
int tam_pilha(Pilha *pi);
