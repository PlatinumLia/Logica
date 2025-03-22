#include <stdio.h>

int main()
{
	int base, altura, area;
	
	printf("Digite a base e altura do retângulo:\n");
	scanf("%d %d", &base, &altura);
	
	area = base * altura;
	printf("A área do retângulo é: %d", area);
	
	return 0;
}

