#include <stdio.h>
#include <ctype.h>

int main()
{
	char genero, continuar;
	int idade, i = 0, g = 1, maiorIF = 0, menorIM, contM = 1;
	float peso, maiorPeso, menorPeso;
	
	printf("\n--- DADOS SOBRE PESSOAS ---\n\n");

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
			printf("\nQual a sua idade?\n");
			scanf("%d", &idade);
		}while(idade >= 125);
		
		/* Define maior e menor idade para os gêneros*/
		if(genero == 'F')
		{
			if(idade > maiorIF)
			{
				maiorIF = idade;
			}
		} else 
			{
				if(genero == 'M')
				{
					if(contM == 1)
					{
						menorIM = idade;
						contM = 0;
					}else
						{
							if(idade < menorIM)
							{
								menorIM = idade;
							}
						}
				}else
					{
						printf("\nEntrada inválida\n");
					}
			}
		
		do
		{
			printf("\nQual o seu peso?\n");
			scanf("%f", &peso);
		}while(peso <= 0 && peso >= 595);
		
		/* Determinação dos pesos*/
		if(i == 1)
		{
			maiorPeso = peso;
			menorPeso = peso;
		}else
			{
				if(peso > maiorPeso)
				{
					maiorPeso = peso;
				}if(peso < menorPeso)
				{
					menorPeso = peso;
				}
			}
		/* Repetição */
		do
		{
			printf("\nDeseja continuar a entrada de dados?\n");
			scanf(" %c", &continuar);
			continuar = toupper(continuar);	
				if(continuar != 'S' && continuar != 'N')
				{
					printf("Entrada inválida");
				} else
					{
						if(continuar == 'N')
						{
							break;
						} else
							{
								if(continuar == 'S')
								{
									g++;
								}
							}
					}
		}while(continuar != 'S');
	}while(continuar == 'S');
		
		
	printf("A mulher mais velha possui: %d anos.\n", maiorIF);
	printf("O homem mais novo possui: %d anos.\n",menorIM);
	printf("O pessoa com o maior peso possui: %.2fKG's.\n", maiorPeso);
	printf("A pessoa com o menor peso possui: %.2fKG's.\n", menorPeso);
	
	return 0;
}

