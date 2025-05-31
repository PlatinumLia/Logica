#include <stdio.h>

int main()
{
	int vetorA[10], vetorB[10], i;
	
	printf("\n--- Verificação de elementos pares (multiplica por 5) e ímpares (soma 5) de um vetor ---\n\n");
	
	for(i = 0; i < 10; i++)
	{
		printf("Digite o %dº valor do vetor A: ", i + 1);
		scanf("%d", &vetorA[i]);
		
		if(((i + 1) % 2) == 0)
		{
			vetorB[i] = vetorA[i] * 5;
		} else
			{
				if(((i + 1) % 2) != 0)
				{
					vetorB[i] = vetorA[i] + 5;
				}
			}
	}
	
	printf("\n\n--- Valores multiplicados e/ou somados para o Vetor B ---\n\n");
	
	for(i = 0; i < 10; i++)
	{
		printf("Os novos valores são: %d\n", vetorB[i]);
	}
	
	return 0;
}

