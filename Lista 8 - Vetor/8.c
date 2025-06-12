#include <stdio.h>

int main()
{
	int i, vetorA[10], v,vetorB[10];
	
	printf("\n---Inversão de posições de um Vetor---\n\n");
	
	for(i = 0; i < 10; i++)
	{
		printf("Digite o %dº número: ", i + 1);
		scanf("%d", &vetorA[i]);
	}
	
	for(i = 0, v = 9; i < 10; i++, v--)
	{
		vetorB[v] = vetorA[i];
	}
	
	printf("\n\n---RESULTADO---\n\n");
	printf("---Vetor normal---\n\n");
	for(i = 0; i < 10; i++)
	{
		printf("%dº valor: %d\n", i + 1, vetorA[i]);
	}
	
	printf("\n\n---Vetor invertido---\n\n");
	for(i = 0; i < 10; i++)
	{
		printf("%dº valor: %d\n", i + 1, vetorB[i]);
	}
	
	return 0;
}
