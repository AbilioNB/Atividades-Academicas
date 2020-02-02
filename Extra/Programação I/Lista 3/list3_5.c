#include <stdio.h>

int main () {
	int hr;
	float sl_m,sl_b,sl_l,desc;
	printf  ("Informe o valor do salario minimo: ");
		scanf("%f",&sl_m);
	printf ("Informe a quantidade de horas trabalhadas:");
		scanf ("%i",&hr);
		sl_b = hr * (sl_m*0.075);
		if (sl_b > 1500)
		{
			desc= sl_b*0.075;
		}
		else
		{
			desc=0;
		}
		sl_l= sl_b - desc;
		printf("O desconto  e : R$ %.2f\n",desc);
		printf ("Seu salario foi no valor de : R$ %.2\n",sl_l);
	return 0;
}