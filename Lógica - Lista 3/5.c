#include <stdio.h>
#include <math.h>

int main()
{
	int num, resQuad, resCubo;
	
	printf("Digite um número para calcular o seu quadrado e cubo:\n");
	scanf("%d", &num);
	
	resQuad = pow(num, 2);
	resCubo = pow(num, 3);
	
	printf("número \t quadrado \t cubo \n");
	printf("%d \t %d \t\t %d", num, resQuad, resCubo);	
	
	return 0;
}

