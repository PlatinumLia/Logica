#include <stdio.h>

int main()
{
	int num, i = 0, somaI = 0, somaP = 0;
	
	printf("---SOMADOR DE NÚMEROS PARES E ÍMPARES SEPARADOS--- \n");
	
	printf("Digite o número de sua preferência: \n");
	scanf("%d", &num);
	
	while(i <= num)
	{
		if((num % 2) == 1)
		{
			somaI = somaI + i;
		} 
		else if((num % 2) == 0)
		{
			somaP = somaP + i;
		}
		i++;
	}
	printf("Soma dos pares: %d \n", somaP);
	printf("Soma dos ímpares: %d \n", somaI);
	
	return 0;
}

