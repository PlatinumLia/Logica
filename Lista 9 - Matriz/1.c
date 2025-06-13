#include <stdio.h>

int main()
{
	int matriz[8][8], i, c;
	int maiorValor, menorValor, linMenor, linMaior, colMenor, colMaior;
	
	printf("\n---Maior e Menor valor e uma Matriz 8x8---\n\n");
	
	/*Laço de repetição para a linha*/
	for(i = 0; i < 8; i++)
	{
		/*Laço de repetição para a coluna*/
		for(c = 0; c < 8; c++)
		{
			printf("linha[%d], coluna[%d]: ", i+1 , c+1);
			scanf("%d", &matriz[i][c]);
			
			if(i == 0 && c == 0)
			{
				menorValor = matriz[i][c];
				maiorValor = matriz[i][c];
			}else
				{
					if(matriz[i][c] < menorValor)
					{
						menorValor = matriz[i][c];
						linMenor = i;
						colMenor = c;
					}else
						{
							if(matriz[i][c] > maiorValor)
							{
								maiorValor = matriz[i][c];
								linMaior = i;
								colMaior = c;
							}
						}
				}
		}
	}
	
	printf("\n\n---RESULTADO---\n\n");
	printf("O maior valor é: [%d]\n", maiorValor);
	printf("Posição: linha[%d], coluna[%d]\n", linMaior, colMaior);
	printf("O menor valor é: [%d]\n", menorValor);
	printf("Posição: linha[%d], coluna[%d]", linMenor, colMenor);
	
	return 0;
}

