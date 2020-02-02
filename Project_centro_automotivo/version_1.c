#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define tam 20
typedef struct Tcad_produto
{
    char nome[20];
    int id_produto;
    float valor;
    int qt_estoque;
}Tcad_produto;

typedef struct Tcad_pedido
{
    int id_prod;
    int qt_pedido;
}Tcad_pedido;

typedef struct Tcad_mesa
{
    int id_mesa;
    Tcad_pedido   *vet;

}Tcad_mesa;

void cadastrar_produto (Tcad_produto *produto){

    printf("Informe o nome do produto:\n");
    gets(produto->nome);
    printf("Informe o valor do produto:\n");
    scanf("%f",&produto->valor);
    printf("Informe a quantidade em estoque:\n");
    scanf("%i",&produto->qt_estoque);
    printf("Informe o codigo do produto:\n");
    scanf("%i",&produto->id_produto);

    printf("Produto cadastrado !Retornando ao menu!\n");
    Sleep(1000);
}
void realizar_pedido(Tcad_produto *estoque,int qt_est,Tcad_pedido *vetor){

    int ped=0,ct,qt_prod=0,uni=0,resp,voltas=0;

   do{
            printf("Codigo do produto:\n");
            scanf("%i",&ped);
            for(ct=0;ct<qt_est;ct++){
            if(ped==estoque[ct].id_produto){
                    printf("Informe a quantidade :\n");
                    scanf("%i",&uni);
                    if(uni<=estoque[ct].qt_estoque){
                        estoque[ct].qt_estoque=estoque[ct].qt_estoque-uni;
                        vetor->id_prod=ped;
                        vetor->qt_pedido=uni;
                        break;
                    }else{
                        printf("Não temos essa quantidade !Desculpe!\n");
                        break;
                    }
            }else{
                printf("Produto não encontrado!Desculpe!");
                break;
            }
        }
            printf("Deseja realizar mais um pedido ? Podem ser feitos 5 pedidos de uma vez só pra uma mesma mesa!");
            scanf("%i",&resp);
            if(!resp){
                resp=0;
            }else{
                resp=1;
                voltas=voltas+1;
            }
            if(voltas>4){
                printf("Informamos que o limite de pedido ao mesmo tempo por mesa é de 5. Finalize esse pedido para acrescentar mais !\n");                
            }

   }while(resp!=0&&voltas<5);

}
int main () {

    //alocação do vetor de produtos
    int tamanho=5,ct_prod=0;
    Tcad_produto *estoque=malloc(tamanho*sizeof(Tcad_produto));

    Tcad_mesa  mesas[5];
    int mesa,op=0;
    int esp_mesas[5];

    //numerando as mesas

    for(int c1=0;c1<5;c1++){
        mesas[c1].id_mesa=c1+1;
        esp_mesas[c1]=5;
        mesas[c1].vet=malloc(esp_mesas[c1]*sizeof(Tcad_pedido));
        //começa com 5 pedidos
    }

    //função comprar
    
        do{
            system("cls");
            printf("###########################MENU DE OPÇÕES################################\n\n\n");
            printf("[1]--Cadastrar Produto\n");
            printf("[2]--Realizar Pedido\n");
            printf("[3]--Fechar Conta\n");
            printf("[4]--Fechar Caixa e Finalizar o programa\n");
            scanf("%i",&op);
            switch (op){

        case 1:
            //cadastrar
            cadastrar_produto(&estoque[ct_prod]);
            ct_prod++;
            //realocando caso precise gravar mais produtos.
            if(ct_prod+1==tamanho){
                tamanho=tamanho+ct_prod;
                estoque=realloc(estoque,tamanho*sizeof(Tcad_produto));
            }
            break;
        case 2:
                printf("Informe o numero da mesa: \n");
                scanf("%i",&mesa);
                while(mesa<0||mesa>5){
                    printf("Mesa informada, invalida\n!Informe um numero de mesa valido!");
                    scanf("%i",&mesa);
                }
                realizar_pedido(&estoque,ct_prod,&mesas[mesa].vet);
            break;
        case 3:
            break;
        case 4:
            break;

            }

        }while(1==1);
    return 0;
}
