#include <stdio.h>


int main()
{
	int anf;
	float vl_c,imp;

	printf("Informe o ano de fabricação do veículo: ");
	scanf ("%i",&anf);
	printf("Informe o valor do veículo:");
	scanf ("%f",&vl_c);
	if (anf>1990)
	{
		imp=vl_c*0.015;
	}
		else
		{
			imp=vl_c*0.01;
		}

	printf("O valor do imposto a ser pago é : R$%.2f",imp );

	return 0;
}