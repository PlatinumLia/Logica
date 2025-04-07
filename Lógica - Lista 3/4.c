#include <stdio.h>
#include <math.h>

int main()
{
	float numeroReal, raiz;
	
	printf("Digite um número para calcular sua raiz:\n");
	scanf("%f", &numeroReal);
	
	raiz = sqrt(numeroReal);
	printf("%.2f", raiz);
	
	return 0;
}

