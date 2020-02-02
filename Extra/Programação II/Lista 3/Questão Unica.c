/*Desenvolvido por : Abílio Nogueira 
Email : abilionbarros@gmail.com*/
#define TAM 50
#include <stdio.h>
void cadastrar(int codigo[TAM], int quantidade[TAM], int *ct, int cd);
int busca(int codigo[TAM], int ped_cod, int ct);
void venda(int codigo[TAM], int quantidade[TAM], int ct, int ped_cod, int ped_qt);
void consulta(int codigo[TAM], int quantidade[TAM], int ped_cod, int ct);
void repor(int codigo[TAM], int quantidade[TAM], int ped_cod, int ped_qt, int ct);
int main() {

	//var 
	int codigo[TAM], quantidade[TAM], resp = 1, ct = 0, cd, ped_cod = 0, ped_qt = 0, cont;
	char op;
	//cadastro de produto
	do
	{
		system("cls");
		printf("$$$$$$$$$$$$$$$ TELA DE CADASTRO DE PRODUTOS $$$$$$$$$$$$\n");
		printf("\n");
		printf("\n");
		printf("INFORME O CODIGO DO PRODUTO = \n");
		scanf("%i", &cd);
		cadastrar(codigo, quantidade,&ct,cd);
		system("cls");
		printf("$$$$$$$$$$$$$$$ MENU DOS PRODUTOS $$$$$$$$$$$$\n");
		printf("\n");
		printf("\n");
		printf("1-Cadastre  outro produto  \n");
		printf("0-Menu principal \n");
		printf("\n");
		scanf("%i", &resp);
		system("cls");
	} while (resp == 1);
	//menu
	
	//opções 
	do
	{
		
		printf("#################### Sistema de Controle de Estoque #########################\n");
		printf("\n");
		printf("\n");
		printf("1- Venda de Produto\n");
		printf("2-Consulta de estoque\n");
		printf("3-Atualização de estoque\n");
		printf("4-Encerrar programa\n");
		scanf(" %c", &op);
		switch (op)
	{
		case '1':
		{
			printf("Qual o codigo do produto que deseja fazer a compra ?\n");
			scanf("%i",&ped_cod);
			venda(codigo, quantidade,ct, ped_cod, ped_qt);
			break;
		}

		case '2':
		{
			printf("Qual o codigo do produto que deseja consultar ?\n");
			scanf("%i", &ped_cod);
			consulta(codigo, quantidade,ped_cod,ct);
			break;

		}

		case '3':
		{
			printf("Qual o codigo do produto que deseja abastecer o estoque ?\n");
			scanf("%i", &ped_cod);
			printf("Em quantas unidades será acrescentado o produto de codigo %i\n",ped_cod);
			scanf("%i",&ped_qt);
			repor(codigo, quantidade, ped_cod, ped_qt, ct);
			break;

		}

		case '4':
		{


			break;

		}
	}
	} while (op!='4');
	system("cls");
	printf("**************** ESTOQUE ATUALIZADO******************\n");
	for (cont = 0;cont<ct;cont++)
	{
		printf("O PRODUTO DE CODIGO %i TEM : %i UNIDADES EM ESTOQUE\n",codigo[cont],quantidade[cont]);
	}
	return 0;
}
void cadastrar(int codigo[TAM], int quantidade[TAM], int *ct, int cd)
{
	int cont, r = 0;
	//teste de codigo igual & r=1 já existe 
	for (cont = 0; cont < *ct; cont++)
	{
		if (cd == codigo[cont])
		{
			r = 1;
		}
	}
	//testando se existe posição vaga no vetor & armazenando 
	if (r != 1 && *ct < TAM) {

		//agora posso guardar o codigo 
		codigo[*ct] = cd;
		//pergunto a quantidade do produto
		printf("Informe a quantidade do produto cadastrado : \n");
		scanf("%i", &quantidade[*ct]);
		*ct = *ct + 1;
	}
	else 
	{
		if (r == 1) {
			printf("O produto que você tentou cadastrar já foi cadastrado!\n");
			
		}
		else{
			printf("Não é mais possivel acrescentar produtos!\n");
			}		
	}
}
int busca(int codigo[TAM], int ped_cod, int ct) {

	int cont, resp = 0;
	for (cont = 0; cont < ct; cont++)
	{
		if (ped_cod == codigo[cont])
		{
			resp = cont;
			break;
		}
		else
		{
			resp = -1;
		}
	}
	return resp;

}
void venda(int codigo[TAM], int quantidade[TAM], int ct, int ped_cod, int ped_qt)
{
	int resp = 0;

	//chama a função busca para validar o codigo informado 
	resp = busca(codigo, ped_cod, ct);
	if (resp != -1)
	{
		//checa o estoque pode atender a demanda 
		printf("Qual a quantidade desejada ?\n");
		scanf("%i", &ped_qt);
		if (quantidade[resp] >= ped_qt)
		{

			printf("Pedido atendido com Sucesso!\n");
			quantidade[resp] = quantidade[resp] - ped_qt;

			if (quantidade[resp] == 0)
			{
				printf("Estoque zerado! Favor entrar em contato com o fornecedor !\n");
			}
		}
		else
		{
			printf("Não existe estoque suficiente para atender esse pedido!\n Favor entrar em contato com o fornecedor!\n");
		}
	}
	else
	{
		printf("Codigo inexistente!\n");
	}
}
void consulta(int codigo[TAM], int quantidade[TAM], int ped_cod, int ct) {
	int resp = 0;
	resp = busca(codigo, ped_cod, ct);
	if (resp != -1)
	{
		printf("A quantidade atual do produto de codigo %i é %i unidades\n", ped_cod, quantidade[resp]);
	}
	else
	{
		printf("Codigo inexistente!\n");
	}
}
void repor(int codigo[TAM], int quantidade[TAM], int ped_cod, int ped_qt, int ct) {

	int resp;
	resp = busca(codigo, ped_cod, ct);
	if (resp != -1)
	{
		quantidade[resp] = quantidade[resp] + ped_qt;
		printf("Estoque do produto de codigo %i atualizado!\n", ped_cod);
	}
	else
	{
		printf("Codigo inexistente!\n");
	}
}