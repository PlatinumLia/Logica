#include <stdio.h>

int main()
{
	int i, vetorA[5], vetorB[5];
	
	
	printf("\n--- Cálculo do dobro de 5 elementos de um vetor ---\n\n");
	
	for(i = 0; i < 5; i++)
	{
		printf("Digite o %dº valor do vetor A: ", i + 1);
		scanf("%d", &vetorA[i]);
		vetorB[i] = vetorA[i] * 2;
	}
	
	printf("\n\n--- Resultado ---\n\n");
	
	for(i = 0; i < 5; i++)
	{
		printf("O dobro do %dº valor é: %d\n", i + 1, vetorB[i]);
	}
	
	return 0;
}

