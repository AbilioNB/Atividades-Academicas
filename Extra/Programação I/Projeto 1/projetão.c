#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Desenvolvido por : Abílio Nogueira 
Email : abilionbarros@gmail.com
Divirta-se!!!*/
int main()
{
	//var
	int t = 0, n, n_tentativas = 0, t_max, t_min, n_a, n_s, max_tentativas = 0, nv, resp = 0;
	//exec
	//inicio do programa
	do
	{
		//iniciando valores
		t_max = 100;
		t_min = 1;
		//criando o nº randdom
		srand(time(NULL));
		n = rand() % 100 + 1;
		//definindo o antecessor e sucessor 
		n_a = n - 1;
		n_s = n + 1;
		//limpa a tela para um novo jogo 
		system("cls");
		//fazendo com que o usuario escolha o nivel do jogo 
		printf("?????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????\n");
		printf("[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[ {JOGO ADIVINHE  NUMERO} ]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]\n");
		printf("?????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????\n");
		printf("OBJETIVO: O OBJETIVO DO JOGO É ACERTAR O NUMERO SORTEADO PELO COMPUTADOR! \n");
		printf("PARA JOGAR : BASTA ESCOLHER O NIVEL QUE DESEJA JOGAR PARA TER A QUANTIDADE DE TENTATIVAS\n");
		printf("GANHA : CASO ACERTE O NUMERO SORTEADO DENTRO DAS TENTATIVAS !");
		printf("PERDE: CASO EXCEDA O NUMERO VALIDO DE TENTATIVAS!");
		printf("\n");
		printf("\n");
		printf("Escolha o nivel do jogo: \n");
		printf("NÍVEL 1 - FÁCIL = 15 TENTATIVAS \n");
		printf("NÍVEL 2 - MÉDIO = 10 TENTATIVAS \n");
		printf("NÍVEL 3 - DÍFICIL = 5 TENTATIVAS \n");
		scanf("%i", &nv);
		while (nv != 1 && nv != 2 && nv != 3)
		{
			printf("Opção Incorreta!!! Por favor selecione um nível para que o jogo inicie\n");
			printf("NÍVEL 1 - FÁCIL = 15 TENTATIVAS \n");
			printf("NÍVEL 2 - MÉDIO = 10 TENTATIVAS \n");
			printf("NÍVEL 3 - DÍFICIL = 5 TENTATIVAS \n");
			scanf("%i", &nv);
		}
		if (nv == 1)
		{
			max_tentativas = 15;
		}
		else if (nv == 2)
		{
			max_tentativas = 10;
		}
		else
		{
			max_tentativas = 5;
		}
		//fim do nivel
		//pedindo a primeira tentativa
		printf("Tente Acertar : INFORME UM VALOR ENTRE 1 A 100   \n ", n);
		++n_tentativas;
		printf("Tentativa %i \n", n_tentativas);
		scanf("%i", &t);
		//while do erro
		while (t<1 || t > 100)
		{
			printf("Tentativa Invalida !!!!!\n");
			printf("Informe uma tentativa no intervalo de 1 a 100 : \n");
			printf("Tentativa %i \n", n_tentativas);
			scanf("%i", &t);
		}
		//validaor de erro
		while (t != n && n_tentativas < max_tentativas)
		{
			//caso o valor digitado foi maior que n
			if (t > n)
			{
				t_max = t;
				printf("Você errou :( !!! Tente Novamente!!\n");
				if (t == n_s)
				{
					printf("Você está QUENTE\n");
				}
			}
			//caso o valor digitado foi menor que n 
			else if (t < n)
			{
				t_min = t;
				printf("Você errou :( !!! Tente Novamente!!\n");
				if (t == n_a)
				{
					printf("Você está QUENTE\n");
				}
			}
			printf("Informe um numero entre %i a %i\n", t_min, t_max);
			++n_tentativas;
			printf("Tentativa %i \n", n_tentativas);
			scanf("%i", &t);
			//validador de entrada pos erro >
			while (t < t_min || t > t_max)
			{
				printf("Tentativa Invalida !!!!!\n");
				printf("Informe uma tentativa no intervalo de %i a %i : \n", t_min, t_max);
				printf("Tentativa %i \n", n_tentativas);
				scanf("%i", &t);
			}
		}
		//fim do while de erro
		//testa o resultado apos acabar as chacnes ou acertar o numero
		if (t == n && n_tentativas <= max_tentativas)
		{

			printf("Parabéns!!!!");
			printf("Você descobriu o numero com %i tentativas!! \n", n_tentativas);
		}
		else {
			printf("Infelizmente você não conseguiu :( !! Tente Novamente! \n");
		}
		//pergunta se deseja reiniciar 
		printf("Deseja Jogar novamente ??? \n");
		printf("Tecle : \n");
		printf("1-- [Para Sim]\n");
		printf("2-- [Para Não]\n");
		scanf("%i", &resp);
		n_tentativas = 0;
	} while (resp == 1);
	return 0;
}