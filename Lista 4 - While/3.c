#include <stdio.h>

int main()
{
	int i = 0, soma = 0;
	
	printf("SOMADOR DE NÚMEROS ÍMPARES DE 0 A 100 \n");
	
	while( i <= 100)
	{
		if((i % 2) == 1)
		{
			soma = soma + i;
		}
		i++;
	}
	
	printf("A soma dos números ímpares é: %d", soma);
	
	return 0;
}

