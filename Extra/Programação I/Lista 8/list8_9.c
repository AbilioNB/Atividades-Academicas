#include <stdio.h>

int main() {

	//var
	int d_i, cont_pre = 0, cont_pre_m = 0, cont_pre_f = 0, pre_dias = 0, cont_b = 0, max_di = 0;
	char sx = ' ', pre = ' ', resp = ' ';
	float percent_cs1, percent_cs2, percent_cs3, med;
	//exec
	do
	{
		printf("Informe o sexo do recém-nascido : \n");
		printf("M --> Para Masculino!\n");
		printf("F --> Para Feminino!\n");
		scanf(" %c", &sx);
		while (sx != 'F' && sx != 'f' && sx != 'M' && sx != 'm')
		{
			printf("OPÇÃO INVALIDADE ! INFORME UMA OPÇÃO VALIDA !!!\n");
			printf("M --> Para Masculino!\n");
			printf("F --> Para Feminino!\n");
			scanf(" %c", &sx);
		}
		printf("Ele é prematuro ? \n");
		printf("S --> Para Sim \n");
		printf("N --> Para Não\n");
		scanf(" %c", &pre);
		while (pre != 'S' && pre != 's' && pre != 'N' && pre != 'n')
		{
			printf("OPÇÃO INVALIDADE ! INFORME UMA OPÇÃO VALIDA !!!\n");
			printf("S --> Para Sim \n");
			printf("N --> Para Não\n");
			scanf(" %c", &pre);
		}
		if (pre == 'S' || pre == 's')
		{
			//dias na incubadoura
			printf("Quantos dias  ele passou  na incubadora : \n");
			scanf("%i", &d_i);
			while (d_i < 1)
			{
				printf("Dias informados incorretamente ! \n");
				printf("Informe quantos dias a bebe passou na incubadora [min = 1] :\n");
				scanf("%i", &d_i);
			}
			//definições de prematuro
			cont_pre = cont_pre + 1;
			pre_dias = pre_dias + d_i;
			if (d_i>max_di)
			{
				max_di = d_i;
			}
			//teste de prematuro masculino
			if ((sx == 'M' || sx == 'm') && (pre == 'S' || pre == 's'))
			{
				cont_pre_m = cont_pre_m + 1;
			}
			else if ((sx == 'F' || sx == 'f') && (pre == 'S' || pre == 's'))
			{
				cont_pre_f = cont_pre_f + 1;
			}
		}
		cont_b = cont_b + 1;
		//teste de continuar 
		printf("Deseja checar outro bebe ?[S/N]\n");
		scanf(" %c", &resp);
		while (resp != 'S' && resp != 's' && resp != 'N' && resp != 'n')
		{
			printf("OPÇÃO INVALIDADE ! INFORME UMA OPÇÃO VALIDA !!!\n");
			printf("S --> Para Sim \n");
			printf("N --> Para Não\n");
			scanf(" %c", &pre);

		}
	} while (resp == 'S' || resp == 's');
	//end DO WHILE
	if (cont_pre > 0)
	{
		percent_cs1 = (cont_pre * 100) / cont_b;
		percent_cs2 = (cont_pre_m * 100) / cont_pre;
		percent_cs3 = (cont_pre_f * 100) / cont_pre;
		med = pre_dias / cont_pre;
		printf("A percentagem de recém-nascido prematuos em relação ao total é de = %.2f%% \n", percent_cs1);
		printf("A percentagem de recém-nascido prematuro do sexo masculino = %.2f%% \n", percent_cs2);
		printf("A percentagem de recém-nascido prematuro do sexo feminino = %.2f%% \n", percent_cs3);
		printf("A media  de dias de permanência  dos recem-nascido prematuro na incubadora = %.2f \n", med);
		printf("O maior numero de dias que um recem-nascido prematuro permaneceu na incubadora %i dias \n", max_di);
	}
	else
	{
		printf("Não existiram bebes recem-nascido!!!\n");
	}
	return 0;
}