/*Desenvolvido por : Abílio Nogueira 
Email : abilionbarros@gmail.com*/
#include <stdio.h>
void prenc(int Vet[10]);
int maior(int Vet[10]);
int menor(int Vet[10]);
int main() {

	int Vet[10], mai=0, men=0;

	prenc(Vet);
	mai = maior(Vet);
	men = menor(Vet);

	printf("O maior numero dos informado foi : %i\n", mai);
	printf("O menor numero dos informado foi : %i\n", men);


	return 0;
}
void prenc(int Vet[10]) {
	
	int cont;

	for (cont = 0; cont < 10; cont++) {
	
		printf("Informe o %i nuemro:",cont+1);
		scanf("%i",&Vet[cont]);	
	}
}
int maior(int Vet[10])
{
	int cont,m=0;
	m = Vet[0];
	for (cont = 0; cont < 10; cont++) {

		if (m < Vet[cont]){

			m = Vet[cont];
		}
		
	}
	return m;
}
int menor(int Vet[10])
{
	int cont, m=0;
	m = Vet[0];
	for (cont = 0; cont < 10; cont++) {

		if (m > Vet[cont]) {

			m = Vet[cont];
		}

	}
	return m;
}