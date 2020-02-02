#include <stdio.h>

int main (){

	int p1,p2;

	printf ("Informe o primeiro número: ");
	scanf ("%i",&p1);
	printf ("Informe o segundo número:");
	scanf ("%i",&p2);

	if (p1>p2)
	{
		printf ("O maior número informado foi : %i",p1);
	}
	else if (p1<p2)
		{
			printf ("O maior número informado foi : %i",p2);
			
		}
		else
		{
			printf ("Os números informados são iguais");

		}
	return 0;
}