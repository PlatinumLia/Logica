#include <stdio.h>
#include <ctype.h>

int main()
{
	int matriz[5][5];
	int i, j, soma = 0, buscar;
	char opcao;
	
	printf("\n---Leitura da Matriz---\n\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("Linha[%d]; Coluna[%d]: ", i + 1, j + 1);
			scanf(" %d", &matriz[i][j]);
		}
	}

	printf("\n\n---Menu---\n\n");
	printf("(A) Mostrar a matriz.\n");
	printf("(B) Mostrar quarta linha e primeira coluna.\n");
	printf("(C) Mostrar a soma da diagonal principal.\n");
	printf("(D) Atribuir 0 para os valores negativos encontrados fora da diagonal principal.\n");
	printf("(E) Buscar elemento na matriz.\n\n");
	
	/*Laço para escolher a opção*/
	do
	{
		printf("Escolha uma das opções: ");
		scanf(" %c", &opcao);
		opcao = toupper(opcao);
		
		if(opcao != 'A' && opcao != 'B' && opcao != 'C' && opcao != 'D' && opcao != 'E')
		{
			printf("A opção digitada é inválida!\nEscolha uma opção válida.\n\n");
		}
	}while(opcao != 'A' && opcao != 'B' && opcao != 'C' && opcao != 'D' && opcao != 'E');
	
	switch(opcao)
	{
		case 'A':
			for(i = 0; i < 5; i++)
			{
				for(j = 0; j < 5; j++)
				{
						printf("[%d]\t", matriz[i][j]);
				}
				printf("\n");
			}
		break;
			
		case 'B':
			printf("QUARTA LINHA\n\n");
			for(j = 0; j < 5; j++)
			{
				printf("[%d]\t", matriz[4][j]);
			}
				
			printf("\n\n");
			
			printf("PRIMEIRA COLUNA\n\n");	
			for(i = 0; i < 5; i++)
			{
				printf("[%d]\t", matriz[i][0]);
			}
		break;
			
		case 'C':
			/*Laço para a diagonal principal da matriz*/
			for(i = 0; i < 5; i++)
			{
				for(j = 0; j < 5; j++)
				{
					if(i == j)
					{
						/*printf("[%d]\t", matriz[i][j]);*/
						soma += matriz[i][j];
					}
				}
			}
			printf("Soma da diagonal principal: %d.", soma);
		break;
			
		case 'D':
			/*Laço para transformar os números negativos fora da diagonal principal da matriz em 0*/
			for(i = 0; i < 5; i++)
			{
				for(j = 0; j < 5; j++)
				{
					if(i != j && matriz[i][j] < 0)
					{
						matriz[i][j] = 0;
					}
				}
			}
			/*Laço para mostrar a matriz*/
			for(i = 0; i < 5; i++)
			{
				for(j = 0; j < 5; j++)
				{
					printf("[%d]\t", matriz[i][j]);
				}
				printf("\n");
			}
		break;
			
		case 'E':
			printf("Qual número deseja buscar na matriz? R: ");
			scanf("%d", &buscar);
			
			for(i = 0; i < 5; i++)
			{
				for(j = 0; j < 5; j++)
				{
					if(buscar == matriz[i][j])
					{
						printf("Este número está na linha[%d], coluna[%d] da matriz.", i + 1, j + 1);
						return 0;
					}
				}
			}
			printf("\n\nNúmero não encontrado!\n\n");
		break;
	}
	return 0;
}

