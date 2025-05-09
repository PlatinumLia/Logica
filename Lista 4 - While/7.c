#include <stdio.h>

int main()
{
	int i = 1, progA= 0, razao = 3;
	
	printf("-- Progressão Aritmética de 20 números de razão 3 -- \n\n");
	printf("-- OBS: O termo inicial da PA é 0 -- \n\n");
	
	while(i <= 20)
	{
		printf("%d \n", progA);
		progA = progA + razao;
		i++;
	}
	
	return 0;
}

