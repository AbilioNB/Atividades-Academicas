#include <stdio.h>
#include <math.h>
//cabeçalhos 
float dec (float x);
float cen (float x);
float mil (float x);

int main () {

	//var 
	int op;
	float m,conv;
	//exec
	do 
	{
		//opção de converter
		printf("Informe a opção que dseja converter : \n");
		printf ("1-- Para Decimetros.\n");
		printf ("2-- Para Centimetros.\n");
		printf ("3-- Para Milimetros.\n");
		scanf("%i",&op);
		//teste de validação 
		while (op!=1&&op!=2&&op!=3)
		{
			printf("OPÇÃO INVALIDA!!!!!");
			printf("Informe uma opção valida !");
			printf ("1-- Para Decimetros.\n");
			printf ("2-- Para Centimetros.\n");
			printf ("3-- Para Milimetros.\n");
			scanf("%i",&op);
		}
		//pedindo o numero
		printf("Informe o numero em metros que deseja converter para a unidade informada : ");
		scanf("%f",&m);
		if (op==1)
		{
			conv = dec(m);
		}
		else if (op== 2)
		{
			conv = cen(m);
		}
		else
		{
			conv = mil(m);
		}
		printf("O convertido na unidade de sua escolha é : %.2f\n",conv);
		printf("Deseja converter outro valor ? \n");
		printf("1---Para Sim\n");
		printf("0---Para Não\n");
		scanf("%i",&op);
	}
	while(op!=0);
	return 0;
} 

float dec (float x)
{
	float resp;

	resp = x * 10;
	return resp;
}
float cen (float x)
{
	float resp;

	resp = x * 100;
	return resp;
}
float mil (float x)
{
	float resp;

	resp = x * 1000;
	return resp;
}