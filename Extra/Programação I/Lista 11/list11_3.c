#include <stdio.h>
#include <math.h>

float  delta(float x,float y, float z);
int main () {

	//var 
	float a,b,c,resul;
	
	//exec
	printf("Informe o valor de A : ");
	scanf("%f",&a);
	printf("Informe o valor de B : ");
	scanf("%f",&b);
	printf("Informe o valor de C : ");
	scanf("%f",&c);
	resul=delta(a,b,c);
	printf ("%.1f",resul);

	return 0;
} 
float  delta(float x,float y, float z)
{
	float resp;
	resp = (y*y) - (4*x*z);
	return resp;
}