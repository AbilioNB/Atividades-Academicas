#include <stdio.h>
#include <math.h>

float  delta(float x,float y, float z);
int n_real (int x);
int n_nulo (float x);
int main () {

	//var 
	float a,b,c,resul,x1,x2;
	
	//exec
	printf("Informe o valor de A : ");
	scanf("%f",&a);
	printf("Informe o valor de B : ");
	scanf("%f",&b);
	printf("Informe o valor de C : ");
	scanf("%f",&c);
	resul=delta(a,b,c);
	
	if (n_nulo(a) !=1 )
	{
		if ( resul < 0)
		{
			printf("Não existem raizes reais!! \n");
		}
		else 
		{
			//definindo as raizes 
			x1 = (-b + sqrt(resul))/(2*a);
			x2 = (-b - sqrt(resul))/(2*a);
			printf("As raizes são : %.2f e %.2f \n",x1,x2);
	
		}
	}
	else 
	{
		printf("A equação informa foi de 1º grau !\n");
	}
	return 0;
} 

//funções 
float  delta(float x,float y, float z)
{
	float resp;
	resp = (y*y) - (4*x*z);
	return resp;
}
int n_real (int x)
{
	int resp;
	if (x >= 0 ) 
	{
		
		resp = 1;
		return resp;
	}
	else 
	{
		resp = 0;
		return resp;
	}
}
int n_nulo (float x)
{
	int resp;
	if ( x == 0 )
	{
		resp = 1;
		return resp;
	}
	else 
	{
		resp = 0;
		return resp;
	}

}