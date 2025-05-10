#include <stdio.h>

int main()
{
	int valorI, valorF, i;
	
	printf("-- Contador --\n\n");
	
	do
	{
		printf("Digite um número para iniciar a contagem: ");
		scanf("%d", &valorI);
		
		printf("Digite o valor final (deve ser maior que o número que inicia a contagem): ");
		scanf("%d", &valorF);
		
		if(valorI >= valorF)
		{
			printf("O número final deve ser maior que o inicial\n\n");
		}
	} while(valorI >= valorF);

	i = valorI;

	do
	{
		printf("%d\n", i);
		i++;
	} while(i <= valorF);
	
	return 0;
}

