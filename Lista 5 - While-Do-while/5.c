#include <stdio.h>

int main()
{
	int num;
	
	printf("\n--- Leitor de intervalo entre 0 e 10 ---\n\n");
	
	do
	{
		printf("Entre com um número entre 0 e 10:\n");
		scanf("%d", &num);
		
		if(num < 0 || num >10)
		{
			printf("Número fora do intervalo.");
		}
	}while(num >= 0 && num <= 10);
	
	return 0;
}
