#include <stdio.h>
#include <math.h>

int main()
{
	float num, baixo, cima;
	
	printf("Digite um número com vígula para descobrir seu arrendamento para baixo e para cima:\n");
	scanf("%f", &num);
	
	cima = ceil(num);
	printf("Arredondamento para cima: %.2f\n", cima);
	
	baixo = floor(num);
	printf("Arredondamento pata baixo: %.2f", baixo);
	
	return 0;
}

