#include <stdio.h>
#include <math.h>

int main()
{
	int i = 1, quad, cubo;
	
	printf("-- NÚMEROS DE 1 a 10 E SEU QUADRADO E CUBO -- \n\n");
	
	while(i <= 10)
	{
		printf("Número: %d \n\n", i);
		
		quad = pow(i, 2);
		cubo = pow(i, 3);
		
		printf("Quadrado do número: %d \n", quad);
		printf("Cubo do números: %d \n\n", cubo);
		
		i++;
	}
	
	return 0;
}
