#include <stdio.h>
#include <ctype.h>

int main()
{
	char genero, corOlhos, corCabelo;
	int idade, pessoas = 0, contF = 0, menorI, contH = 0, i = 1;
	
	printf("\n\n--- Entrevista sobre características físicas com 50 pessoas---\n\n");
	
	do
	{
		do
		{
			printf("\nQual o seu gênero? (F/M)\n");
			scanf(" %c", &genero);
			genero = toupper(genero);
		}while(genero != 'F' && genero != 'M');
		
		do
		{
			printf("\nQual a cor dos seus olhos?\nA - azuis.\nV - verdes.\nP - pretos.\nC - castanhos\n");
			scanf(" %c", &corOlhos);
			corOlhos = toupper(corOlhos);
			
			if(corOlhos != 'A' && corOlhos != 'V' && corOlhos != 'P' && corOlhos != 'C')
			{	
				printf("\nEntrada inválida.\nDigite a cor do seu olho novamente.\n\n");
			}
		}while(corOlhos != 'A' && corOlhos != 'V' && corOlhos != 'P' && corOlhos != 'C');
		
		do
		{
			printf("\nQual a cor do seu cabelo?\nL - loiro\nC - castanhos\nP - pretos\n");
			scanf(" %c", &corCabelo);
			corCabelo = toupper(corCabelo);
			
			if(corCabelo != 'L' && corCabelo != 'C' && corCabelo != 'P')
			{
				printf("\nEntrada inválida.\nDigite a cor do seu cabelo novamente.\n\n");
			}
		}while(corCabelo != 'L' && corCabelo != 'C' && corCabelo != 'P');
		
		do
		{
			printf("\nQual a sua idade?\n");
			scanf("%d", &idade);
			
			if(idade < 0 && idade > 125)
			{
				printf("\nValor menor que 0 ou valor maior que 125.\nDigite um valor entre 0 e 125.\n\n");
			}	
		}while(idade >= 125);
		
		/*Determina a menor idade*/
		if(i == 1)
			{
				menorI = idade;
			}else
				{
					if(idade < menorI)
					{
						menorI = idade;
					}
				}
			
		/*Determina as condições*/
		if(genero == 'M' && idade >= 16 && idade <= 24 && corOlhos == 'A' && corCabelo == 'C')
		{
			contH++;
		}else
		{
			if(genero == 'F' && idade < 40 && corOlhos == 'P' && corCabelo == 'P')
			{
				contF++;
			}
		}
		i++;
		pessoas++;
	}while(pessoas != 50);
	
	printf("\n\n---- Resultado da pesquisa ----\n\n");
	printf("\nA menor idade do grupo é: %d anos\n", menorI);
	printf("\nA quantidade de homens com idade entr 16 e 24 anos e com olhos azuis e cabelos castanhos é: %d\n", contH);
	printf("\nA quantidade de mulheres com menos de 40 anos e com olhos e cabelos pretos é: %d\n", contF);
	
	return 0;
}
