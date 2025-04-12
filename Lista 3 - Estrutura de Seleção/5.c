#include <stdio.h>

int main()
{
	int num;
	
	printf("Diite um número inteiro:\n");
	scanf("%d", &num);
	
	if(num >= 10 && num <=100)
	{
		printf("Número está entre 10 e 100 – intervalo permitido");
	} else
		{
			printf("Numero não está entre 10 e 100");
		}
	
	return 0;
}

