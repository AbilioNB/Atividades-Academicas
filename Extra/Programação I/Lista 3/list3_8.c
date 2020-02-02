#include <stdio.h>

int main()
{

	float nt1,nt2,md;


	printf("Informe a nota da primeira prova:");
	scanf("%f",&nt1);
	printf("Informe a nota da segunda prova: ");
	scanf("%f",&nt2);

	md=(nt1+nt2)/2

	if (md>=7)
	{
		printf("O aluno obteve média %.1f e está APROVADO.",md );
	}

	else if (md>=3)
	{
		printf("O aluno obteve média %.1f e está EM RECUPERAÇÃO.",md );
	}
	else {
		printf("O aluno obteve média %.1f e está REPROVADO.",md );
	}


	return 0;
}