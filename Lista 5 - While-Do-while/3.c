#include <stdio.h>
#include <ctype.h>

int main()
{
	int idade, i = 1, maiorI = 0, menorI, quantM = 0, quantF = 0, totalF = 0;
	float mediaIM = 0;
	char genero;
	
	printf("-- Idade e Gênero --\n\n");
	
	while(i <= 4)
	{
		do
		{
			printf("Qual o seu gênero (F/M)?\n");
			scanf("%c", &genero);
			genero = toupper(genero);
		}while(genero != 'F' || genero != 'M');
		
		do
		{
			printf("Digite a sua idade: ");
			scanf("%d", &idade);
		}while(idade >= 125);
		
		if(genero == 'F')
		{
			totalF += idade;
			quantF++;
		} else
			{
				quantM++;
			}
			
		if(i == 1)
		{
			maiorI = idade;
			menorI = idade;
		} else
			{
				if(idade > maiorI)
				{
					maiorI = idade;
				}
				if(idade < menorI)
				{
					menorI = idade;
				}
			}
		i++;
	}	

	mediaIM = (float)totalF / quantF;

	printf("A maior idade é: %d.\n E a menor idade é: %d\n", maiorI, menorI);
	printf("A média da idade das mulheres é: %.2f\n", mediaIM);
	printf("A quantidade de homens é: %d", quantM);

	return 0;
}

