#include <stdio.h>
#include <ctype.h>

int main()
{
	char continuar;
	int aluno = 1;
	float notaA, notaB, mediaP;
	
	printf("\n---Média Ponderada dos Alunos ---\n\n");
	
	do
	{
		printf("Aluno %d\n\n", aluno);
		printf("Digite a nota A: ");
		scanf("%f", &notaA);
		printf("Digite a nota B: ");
		scanf("%f", &notaB);
		
		mediaP = (notaA + (notaB * 2)) / 3;
		printf("Média do aluno: %.2f\n\n", mediaP);
		
		do
		{
			printf("\n\nDeseja continuar? (S/N)\n");
			scanf(" %c", &continuar);
			continuar = toupper(continuar);
			
			if(continuar != 'S' && continuar != 'N')
			{
				printf("Entrada inválida.");
			} else if(continuar == 'N')
				{
					break;
				}else if(continuar == 'S')
					{
						aluno++;
					}
		}while(continuar != 'S');
		
	}while(continuar == 'S');
	
	return 0;
}

