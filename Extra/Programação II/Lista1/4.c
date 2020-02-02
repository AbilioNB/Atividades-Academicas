/*Desenvolvido por : Abílio Nogueira 
Email : abilionbarros@gmail.com*/

#include <stdio.h>
#include <stdlib.h>
void pre(float vet[100]);
float soma(float vet[100]);
int main() {
	//var 
	float vet[100],total=0;
	int cont;
	
	pre(vet);
	total = soma(vet);
	printf("A soma de todos os numeros informados é  = %.2f", total);
	return 0;
}
void pre(float vet[100])
{
	int cont;
	for (cont = 0; cont < 100; cont++)
	{
		printf("Informe o %iº valor : ",(cont + 1));
		scanf("%f",&vet[cont]);
	}

}
float soma(float vet[100]) {
	int cont;
	float total = 0;
	for (cont = 0; cont < 100; cont++)
	{
		total = vet[cont] + total;
	}
	return total;
}

