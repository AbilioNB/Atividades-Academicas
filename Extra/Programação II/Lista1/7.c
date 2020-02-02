/*Desenvolvido por : Abílio Nogueira 
Email : abilionbarros@gmail.com*/
#include <stdio.h>
#include <stdlib.h>
void prent1(float nt1[50]);
void prent2(float nt2[50]);
void med(float nt1[50], float nt2[50], float medi[50]);
float mdt(float medi[50]);
float perc(float medi[50],float mdte);
int main() {
	//var 
	float nt1[50], nt2[50], medi[50],mdte,perc_igual;
	prent1(nt1);
	prent2(nt2);
	med(nt1, nt2,medi);
	mdte = mdt(med);
	perc_igual = perc(med,mdte);
	printf("A media da turma é de %.2f", mdte);
	printf("O percentual de alunos com media igual a da turma é de %.2f%%", perc_igual);
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
float mdt(float medi[50]) {
	float total = 0,mediat=0;
	int cont;
	for (cont = 0; cont < 50; cont++)
	{
		total = medi[cont] + total;	
	}
	mediat = (total / 50);
	return mediat;
}
float perc(float medi[50],float mdte) {
	float perc_ig = 0;
	int cont, ct_igual=0;
	for (cont = 0; cont < 50; cont++)
	{
		if (medi[cont] == mdte) {
			ct_igual = 1 + ct_igual;
		}
		
	}
	perc_ig = ((100 * ct_igual) / 50);
	return perc_ig;
}