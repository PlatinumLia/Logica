#include <stdio.h>

int main()
{
	int n, i = 1, iteracoes;

	printf("\n\n--- Tabuada ---\n");
	printf("\n--- OBS: multiplicando x iteraçoes ---\n\n");
	
	
	printf("Digite o multiplicando: ");
	scanf("%d", &n);
	
	printf("\nDigite a quantidade de iterações: ");
	scanf("%d", &iteracoes);
	
	for( ; i <= iteracoes; i++)
	{
		printf("%d x %2d = %2d\n", n, i, n*i);
	}
	
	return 0;
}

