#include <stdio.h>
int main()
{
	
	//var 
	int cont,id,cont_id=0;
	//exec
	for (cont = 1; cont <= 20; ++cont)
	{
		printf("Informe a  %i ª idade \n",cont );
		scanf ("%i",&id);
		//teste
		while (id>120||id<1)
		{
			printf("Idade INVALIDA!!!! \n");
			printf("Por favor insira um idade valida [1 a 120]\n");
			scanf ("%i",&id);

		}
		if(id>=18&&id>=35)
		{
			cont_id= cont_id + 1;
		}
	}
	if (cont_id>0)
	{
		printf("O numero de idades entre 18 e 35 foi : %i \n",cont_id);
	}
	else 
	{
		printf("Não houve nenhuma idade no intervalo estabelecido!\n");
	}

	return 0;
}