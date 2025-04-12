#include <stdio.h>

int main()
{
	int num, resto;
	
	printf("Digite um número inteiro:\n");
	scanf("%d", &num);
	
	resto = num % 3;
	
	if(resto == 0)
	{
		printf("O número é múltiplo de 3\n");
	} else
		{
			printf("O número não é múltiplo de 3");
		}
	
	return 0;
}

