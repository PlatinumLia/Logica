#include <stdio.h>

int main()
{
	int num; 
	
	printf("Digite um número:\n");
	scanf("%d", &num);
	
	if(num > 0)
	{
		printf("O número é positivo");
	} else
		{
			if(num == 0)
			{
				printf("O número é nulo");
			}
			else
			{
				printf("O número é negativo");
			}
		}
	
	return 0;
}

