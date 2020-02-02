#include <stdio.h>
int main()
{
	//var 
	int cont;
	float alt,cont_alt=0,med_alt;

	//exec
	for (cont = 1; cont <= 100; ++cont)
	{
		printf("Informe a  %i ª altura \n",cont );
		scanf ("%f",&alt);
		//teste
		while (id>3.0||id<0.1)
		{
			printf("Altura INVALIDA!!!! \n");
			printf("Por favor insira uma altura valida [0.1 a 3.0]\n");
			scanf ("%f",&alt);

		}
		cont_alt= cont_alt + alt;
		
	}
	//med cont
	med_alt = cont_alt / 100;
	printf("A media das alturas informadas foi de %.2f \n",med_alt);
	return 0;
}