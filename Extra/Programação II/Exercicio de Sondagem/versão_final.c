//Exercício de Sondagem-Introdução A programação II
//Desenvolvedor: Abílio Nogueira
//email= abilionbarros@gmail.com


#include <stdio.h>
#include <math.h>
#include <ctype.h>
float med(float nt1, float nt2);
float redondo(float md);
void separa(float md, int *n_i, float *n_d);
int main() {
	//var
	float n1, n2;
	int media;
	char resp = 's';
	//requerindo as notas 
while (resp == 's' || resp == 's')
	{

		system("cls");
		printf("***********************************SISTEMA DE NOTAS *******************************\n");
		printf("INFORME A 1º MEDIA :\n");
		scanf("%f", &n1);
		//validação
		while (n1 < 0 | n1>10)
		{
			printf("INTERVALO DE MEDIA INFORMADA INVALIDA!!!!!!\n");
			printf("INFORME  NOVAMENTE A 1º MEDIA :\n");
			scanf("%f", &n1);
		}
		printf("INFORME A 2º MEDIA :\n");
		scanf("%f", &n2);
		while (n2 < 0 | n2>10)
		{
			printf("INTERVALO DE MEDIA INFORMADA INVALIDA!!!!!!\n");
			printf("INFORME  NOVAMENTE A 2º MEDIA :\n");
			scanf("%f", &n2);
		}
		media = med(n1, n2);
		printf(" Media do aluno = %i \n", media);
//teste de continuidade 
		printf("Deseja consultar outro aluno ? \n");
		printf("Digite S/s ----Para SIM, para colsuntar outro aluno \n");
		printf("Digite N/n ----Para NAO, para encerar o programa  \n");
		scanf(" %c", &resp);
		while (resp!='S'&& resp != 's'&& resp != 'N'&& resp != 'n')
		{
			printf("OPÇÃO INVALIDA!!!\n");
			printf("Digite S/s ----Para SIM, para colsuntar outro aluno \n");
			printf("Digite N/n ----Para NAO, para encerar o programa  \n");
			scanf(" %c", &resp);
		}
	}
	return 0;
}
float med(float nt1,float nt2){
	float redondo(float aux);
	float aux;
	int md;
		aux = (nt1 + nt2)/ 2;
		md = redondo(aux);
		return md;
}
float redondo(float aux) {
	void separa(float md, int *n_i, float*n_d);
	float nd;
	int ni;
	separa (aux,&ni,&nd);
	if (nd >=0.5)
	{
		ni = ni + 1;
	}
	else {
		ni = ni;
	}
	return ni;
}
void separa(float md, int *n_i, float *n_d) {
	float ax;
	ax = md;
	*n_i = (float)md;
	*n_d = ax - *n_i;
	return;
}