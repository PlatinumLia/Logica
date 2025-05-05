
#include <stdio.h>

int main()
{
	float base, altura, area;
	printf("Insira o valor da base\n");
	scanf("%f", &base);
	printf("Insira o valor da altura\n");
	scanf("%f", &altura);
	area = base * altura;
	printf("A area do retangulo é: %f", area);

	return 0;
}

