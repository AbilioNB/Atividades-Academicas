#include<stdio.h>

int main() {
	//var
	float  h = 0,n;
	//exec
	printf("Digite um numero inteiro positivo N: ");
	scanf("%f", &n);
	while (n < 0)
	{
		printf("Numero invalido! Digite um numero inteiro positivo N: ");
		scanf("%f", &n);
	}
	for (n; n != 1; --n)
	{
		h = h + (1 / n);
	}
	h = h + 1;
	printf("O resultado de H  e: %.3f \n", h);
	return 0;
}