#include<stdio.h>
int main() {
	int n1, n2, cont, sm_par = 0, mult_imp = 1;
	printf("Digite o primeiro numero inteiro: ");
	scanf("%i", &n1);
	printf("Digite o segundo numero inteiro maior que o primeiro: ");
	scanf("%i", &n2);
	while (n2 < n1)
	{
		printf("Numero invalido! Digite um numero maior que o primeiro: ");
		scanf("%i", &n2);
	}
	cont = n2 - (n1-1);
	while (cont > 0)
	{
		if (n2 % 2 == 0) {
			sm_par = sm_par + n2;
		}
		else {
			mult_imp = mult_imp * n2;
		}
		--n2;
		--cont;
	}
	printf("Soma dos numeros pares: %i \n", sm_par);
	printf("Multiplicaçao dos numeros impares: %i \n", mult_imp);
	return 0;
}