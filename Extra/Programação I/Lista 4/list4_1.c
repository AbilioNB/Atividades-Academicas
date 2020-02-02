#include <stdio.h>

int main () 
{
	int md;

	printf("Infome a média :");
	scanf ("%f",&md);

	if (md >= 9.0)
	{
		printf("O aluno é Altamente recomendado.");

	}
		else if (8.0 <= md <= 9.0)
		{
			printf("O aluno é fortemente recomendado.");
		}
			else if (7.0 <= md <8.0)
			{
				printf("O aluno é recomendado.");
			}
				else 
				{
					printf("O aluno não é recomendado.");
			
	return 0;
}