#include <stdio.h>

int main () {
				
	int id;

	printf ("Informe a idade : ");
	scanf ("%i",&id);
	if (id >= 18)
	{
		printf("Esta pessoa tem %i anos é  maior de idade.",id);
	}

	else
	{
		printf ("Esta pessoa tem %i anos e  não é maior de idade.",id);
	}
	return 0;
}