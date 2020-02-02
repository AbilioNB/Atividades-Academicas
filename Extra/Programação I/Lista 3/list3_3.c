#include <stdio.h>

int main () {
	
	int n,r;
	
	printf ("Informe o Número:");
	scanf ("%i",&n);
	r=n%2;
		if (r!= 0)
		{
			printf ("O Número não é par ");

		}
		else
		{
			printf ("O Número informado é par.");
		}		
	
	return 0;
}