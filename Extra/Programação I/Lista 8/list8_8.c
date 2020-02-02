#include<stdio.h>

int main()
{
	//var
	int i, id, cont, id_cs2 = 0, cont_cs1 = 0, cont_cs2 = 0, cont_cs3 = 0, cont_cs4 = 0;
	float ps, alt,med_cs2,perct_blue=0;
	char co=' ', cc=' ';
	//exec
	printf("Quantas vezes deseja executar o programa  [MIN: 1]:\n");
	scanf("%i", &cont);
	while (cont <= 0)
	{
		printf("OPÇÃO INVALIDA !!DEVE INFORMAR AO MENOS 1 TENTATIVA\n");
		scanf("%i", &cont);
	}
	i = cont;
	for (cont; cont > 0; cont = cont - 1)
	{
		printf("################_________PESSOA %i____________##################### \n", cont);
		//idade
		printf("INFORME SUA IDADE [1 a 120] \n");
		scanf("%i", &id);
		while (id < 1)
		{
			printf("IDADE INVALIDA! INFORME UM IDADE ENTRE [ 1 A 120 ] : ");
			scanf("%i", &id);
		}
		//peso
		printf("INFORME SEU PESO  [ 3 A 300] : \n");
		scanf("%f", &ps);
		while (ps>300||ps < 3)
		{
			printf("PESO INVALIDO! INFORME UM PESO ENTRE [ 3 A 300 ] : ");
			scanf("%f", &ps);
		}
		//altura
		printf("INFORME SUA ALTURA [0.5 A 2.5]\n");
		scanf("%f", &alt);
		while (alt < 0.5 || alt > 2.5)
		{
			printf("ALTURA INVALIDA !! INFORME UM ALTURA VALIDA [ 0.5 A 2.5]\n");
			scanf("%f", &alt);
		}
		//cor dos olhos
		printf("Informe a cor dos olhos baseado na table a baixo : \n");
		printf(" A  para AZUL \n");
		printf(" P  para PRETO \n");
		printf(" V  para VERDE \n");
		printf(" C  para CASTANHO \n");
		scanf(" %c", &co);
		while (co != 'A'&& co != 'a' && co != 'P' && co != 'p' && co != 'V' && co != 'v' && co != 'C'&& co != 'c')
		{
			printf("OPÇÃO INVALIDA ! INFORME UMA OPÇÃO VALIDA : \n");
			printf(" A  para AZUL \n");
			printf(" P  para PRETO \n");
			printf(" V  para VERDE \n");
			printf(" C  para CASTANHO \n");
			scanf(" %c", &co);
		}
		//cor do cabelo
		printf("INFORME A COR DO SEU CABELO BASEADO NA TABELA A BAIXO : \n");
		printf(" L  para LOIRO \n");
		printf(" P  para PRETO \n");
		printf(" R  para RUIVO \n");
		printf(" C  para CASTANHO \n");
		scanf(" %c", &cc);
		while (cc != 'L' && cc != 'l' && cc != 'P' && cc != 'p' && cc != 'R' && cc != 'r' && cc != 'C' && cc != 'c')
		{
			printf("OPÇÃO INVALIDA ! INFORME UMA OPÇÃO VALIDA :");
			printf(" L  para LOIRO \n");
			printf(" P  para PRETO \n");
			printf(" R  para RUIVO \n");
			printf(" C  para CASTANHO \n");
			scanf(" %c", &cc);
		}
		//testes
		//id > 50 && ps < 60
		if (id > 50 && ps < 60)
		{
			cont_cs1 = cont_cs1 + 1;
		}
		//med id [ alt < 1.50]
		if (alt < 1.50)
		{
			cont_cs2 = cont_cs2 + 1;
			id_cs2 = id_cs2 + id;
		}
		//olhos blue
		if (co == 'A' || co == 'a')
		{
			cont_cs3 = cont_cs3 + 1;
		}
		//ruivas não blue eyes 
		if (co != 'A'&&co != 'a' && (cc == 'R' || cc == 'r'))
		{
			cont_cs4 = cont_cs4 + 1;
		}
	}
	//exibição
	printf("A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos : \n");
	if (cont_cs1 < 0 )
	{
		printf("%i pessoas! \n", cont_cs1);
	}
	else
	{
		printf("Não existiram pessoas que preencheram estes requisitos !!! \n");
	}
	printf("A média das idades das pessoas com altura menor que 1.50 foi : ");
	if (cont_cs2 > 0)
	{
		med_cs2 = id_cs2 / cont_cs2;
		printf("%.2f", med_cs2);
	}
	else
	{
		printf("Não existiram pessoas que preencheram estes requisitos !!! \n");
	}
	printf("A percentagem de pessoas com olhos azuis entre todas as pessoas analisadas foi de : ");
	if (cont_cs3 > 0)
	{
		perct_blue = cont_cs3 * 100 / i;
		printf("%.2f%%", perct_blue);
	}
	else
	{
		printf("Não existiram pessoas que preencheram estes requisitos !!! \n");
	}
	printf("Quantidade de pessoas ruivas do olhos azuis: \n");
	if (cont_cs4 > 0)
	{
		printf("%i", cont_cs4);
	}
	else
	{
		printf("Não existiram pessoas que preencheram estes requisitos !!! \n");
	}


	return 0;
}