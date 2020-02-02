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
    float valor_ped;
}Tcad_pedido;

typedef struct Tcad_mesa
{
    int id_mesa;
    Tcad_pedido   *vet;

}Tcad_mesa;
void cadastrar_produto (Tcad_produto *produto){


    getchar();
    printf("Informe o nome do produto:\n");
    gets(produto->nome);

    printf("Informe o valor do produto:\n");
    scanf("%f",&produto->valor);
    printf("Informe a quantidade em estoque:\n");
    scanf("%i",&produto->qt_estoque);
    printf("Informe o codigo do produto:\n");
    scanf("%i",&produto->id_produto);



    printf("Produto cadastrado !Pressione uma tecla para retornar ao menu!\n");
    system("pause");

}
void realizar_pedido(Tcad_produto estoque[],int qt_est,Tcad_pedido vetor){

    int ped=0,ct=0,uni=0,achou=0;


            printf("Codigo do produto:\n");
            scanf("%i",&ped);
            for(ct=0;ct<qt_est;ct++){
                if(ped==estoque[ct].id_produto){
                        printf("Informe a quantidade :\n");
                        scanf("%i",&uni);
                        if(estoque[ct].qt_estoque>=uni)
                        {
                            vetor.valor_ped=estoque[ct].valor*uni;
                            estoque[ct].qt_estoque=estoque[ct].qt_estoque-uni;
                            vetor.id_prod=ped;
                            vetor.qt_pedido=uni;
                            printf("\n cod :%i = vl:%.2f * qt:%i==total:%2.f \n",vetor.id_prod,estoque[ct].valor,vetor.qt_pedido,vetor.valor_ped);
                            achou=1;
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
        if(!achou){
            printf("Produto não existente no sistema!\n");
        }
}
void finalizar_mesa(int ct_mesa,Tcad_pedido vetor[]){

float total=0,dezpcent=0,valor_p=0,troco=0;
int ct,op=0;

printf("\nct mesa :%i\n",ct_mesa);
for(ct=0;ct<ct_mesa;ct++){

    printf("entrei no for\n");
    printf("%.2f",vetor[ct].valor_ped);
    total=vetor[ct].valor_ped+total;
}
dezpcent=total+(total*0.1);
printf("O valor a ser pago é : \n");
printf("R$%.2f :Com 10%%\n",dezpcent);
printf("R$%.2f :Sem os 10%%\n",total);
printf("Informe o valor pago pelo cliente R$:");
scanf("%f",&valor_p);
printf("Será com ou sem os 10%%\n [1]--Com \n [0]--Sem");
scanf("%i",&op);
if(!op){
    troco=valor_p-total;
    printf("Troco= R$ %.2f",troco);
}else {
    troco=valor_p-dezpcent;
    printf("Troco= R$ %.2f",troco);
}

}
int main () {

    //alocação do vetor de produtos
    int tamanho=5,ct_prod=0;
    Tcad_produto *estoque=malloc(tamanho*sizeof(Tcad_produto));

    Tcad_mesa  mesas[5];
    int mesa,op=0,op2=-1;
    int esp_mesas[5];
    int contador[5]={0,0,0,0,0};

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
                    printf("Mesa informada, invalida!\nInforme um numero de mesa valido!");
                    scanf("%i",&mesa);
                }
                realizar_pedido(estoque,ct_prod,mesas[mesa].vet[contador[mesa]]);

                printf("%i %i",mesa,contador[0]);
                 printf("\n cod= %i || qt= %i||valor= %.2f",mesas[0].vet[0].id_prod,mesas[0].vet[0].qt_pedido,mesas[0].vet[0].valor_ped);
                contador[mesa]++;
                 do{
                    printf("Deseja realizar outro pedido para a mesma mesa:\n[1]--Sim\n[0]--Não?");
                    scanf("%i",&op2);
                    if(op2==1){
                        realizar_pedido(estoque,ct_prod,mesas[mesa].vet[contador[mesa]]);
                        contador[mesa]++;
                    }
                    if(contador[mesa]+1==esp_mesas[mesa]){
                        esp_mesas[mesa]=esp_mesas[mesa]+esp_mesas[mesa];
                        mesas[mesa].vet=realloc(mesas[mesa].vet,esp_mesas[mesa]*sizeof(Tcad_pedido));
                    }

                }while(op2>0);
                    if(contador[mesa]+1==esp_mesas[mesa]){
                        esp_mesas[mesa]=esp_mesas[mesa]+esp_mesas[mesa];
                        mesas[mesa].vet=realloc(mesas[mesa].vet,esp_mesas[mesa]*sizeof(Tcad_pedido));
                    }
            break;
        case 3:
                printf("Informe o numero da mesa: \n");
                scanf("%i",&mesa);
                while(mesa<0||mesa>5){
                    printf("Mesa informada, invalida!\nInforme um numero de mesa valido!");
                    scanf("%i",&mesa);
                }
                finalizar_mesa(contador[mesa],mesas[mesa].vet);
                //é preciso gravar no arquivo e zerar a mesa
            break;
        case 4:
                op=-1;
            break;

            }

        }while(op!=-1);
    return 0;
}
