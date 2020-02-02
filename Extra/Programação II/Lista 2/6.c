/*Desenvolvido por : Abílio Nogueira 
Email : abilionbarros@gmail.com*/
#define TAM 50
#include <stdio.h>
void prenc(int Vet[], int*cont, int n);
int busca(int Vet[], int *cont, int n);
void exib(int Vet[], int *cont);
int main() 
{
	int a[TAM], b[TAM], op = 0, conta = 0, n, contb = 0, resp;

	while (op != 5)
{

		system("cls");
		printf("#############  ESCOLHA SUA OPÇÃO ##############\n");
		printf("1-Armazenar número \n");
		printf("2-Procurar número\n");
		printf("3-Exibir números pares\n");
		printf("4-Exibir números impares\n");
		printf("5-Encerrar Programa\n");
		scanf("%i", &op);
		printf("\n");
		printf("\n");
		if (op == 1)
		{
			//opção 1
			printf("Informe o Nº");
			scanf("%i", &n);
			if (n % 2 == 0)
			{

				prenc(a, &conta, n);

			}
			else if (n % 2 != 0)
			{
				prenc(b, &contb, n);
			}
			system("pause");
		}
		else if (op == 2) {
			//opção 2	
			printf("Informe o Nº");
			scanf("%i", &n);
			if (n % 2 == 0)
			{

				resp=busca(a,&conta,n);
				printf("O numero %i foi encontrado um total de %i vezes\n",n,resp);

			}
			else if (n % 2 != 0)
			{
				resp=busca(b,&contb,n);
				printf("O numero %i foi encontrado um total de %i vezes\n",n,resp);
			}
			system("pause");
		}
		else if (op == 3) {
			//opção 3
			exib(a,&conta);
			system("pause");
		}
		else if (op == 4) {
			//opção 4

			exib(b, &contb);
			system("pause");
		}
		else {
			//opção 5
			op = 5;
		}

		
} 
	return 0;
}
void prenc(int Vet[], int*cont, int n)
{
	if (*cont < TAM)
	{

		Vet[*cont] = n;
		*cont = *cont + 1;
	}
	else
	{
		printf("Não há mais espaço disponivel para inserção de valores!!\n");

	}
}
int busca(int Vet[], int *c, int n) {
	int ct,resp=0;
	for (ct = 0; ct < *c; ct++)
	{
		if (n == Vet[ct]) 
		{
			resp = 1 + resp;
		}	
	}
	return resp;


}
void exib(int Vet[], int *cont)
{
	int ct;

	for (ct = 0; ct < *cont; ct++) 
	{
		printf("%i\n", Vet[ct]);
		printf("\n");
	}
}