#include <stdio.h>

int main ()
{
	
	int tsp;
	float sl_b,vgrat,sl_l;


	printf("Informe o tempo de serviço na empresa:");
	scanf("%i",&tsp);
	printf("Informe seu salário:");
	scanf ("%f",&sl_b);

if (tsp>=10)
{
	vgrat=sl_b*0.2;
	printf("O valor da gratificação foi : R$%.2f\n",vgrat);
	sl_l=sl_b+vgrat;
	printf("E o valor final do salário foi : R$ %.2f\n",sl_l );
}
else{
	vgrat=sl_b*0.1;
	printf("O valor da gratificação foi : R$%.2f\n",vgrat);
	sl_l=sl_b+vgrat;
	printf("E o valor final do salário foi : R$ %.2f\n",sl_l );
}

	return 0;
}