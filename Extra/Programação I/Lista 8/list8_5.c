#include<stdio.h>

int main() {
	//var
	int n, soma = 0;
	//exec
	printf("Digite um numero inteiro positivo N: ");
	scanf("%i", &n);
	while (n < 0)
	{
		printf("Numero invalido! Digite um numero inteiro positivo N: ");
		scanf("%i", &n);
	}
	for (n; n != 0; --n)
	{
		soma = soma + n;
	}
	printf("A soma dos N numeros e: %i \n", soma);

	return 0;
}