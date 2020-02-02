/*Desenvolvido por : Abílio Nogueira 
Email : abilionbarros@gmail.com*/
#include <stdio.h>
#include <stdlib.h>
void prent1(float nt1[50]);
void prent2(float nt2[50]);
void med(float nt1[50], float nt2[50], float medi[50]);
int main() {
	//var 
	float nt1[50], nt2[50], medi[50];
	prent1(nt1);
	prent2(nt2);
	med(nt1, nt2,medi);
	return 0;

}
void prent1(float nt1[50]) {
	int cont;
	for  (cont = 0; cont < 50; cont++)
	{
		printf("Informe a 1º nota do %i aluno ", (cont + 1));
		scanf("%f", &nt1[cont]);
	}
}
void prent2(float nt2[50]) 
{
	int cont;
	for (cont = 0; cont < 50; cont++)
	{
		printf("Informe a 2º nota do %i aluno ", (cont + 1));
		scanf("%f", &nt2[cont]);
	}
}
void med(float nt1[50], float nt2[50], float medi[50]) {

	int cont;
	for (cont = 0; cont < 50; cont++) 
	{
		medi[cont] = ((2 * nt1[cont]) + (3 * nt2[cont]) / 5);
		printf("O aluno obteve média %.2f", medi[cont]);
	}


}

