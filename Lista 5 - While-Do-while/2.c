#include <stdio.h>

int main()
{
	int primeiro = 1, segundo = 1, i = 0, termos = 15, proximo;
	
	printf("-- Sequência de Fibonacci (15 termos) --\n\n");
	
	printf("Sequência: \n");
	
	do
	{
		printf("%d ", primeiro);
		proximo = primeiro + segundo;
		primeiro = segundo;
		segundo = proximo;
		
		i++;
	}while(i < termos);
	
	return 0;
}

