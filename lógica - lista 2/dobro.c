#include <stdio.h>

int main()
{
	int num, dobro;
	
	printf("Digite um número inteiro:\n");
	scanf("%d", &num);
	
	dobro = num * 2;
	
	printf("O dobro do número %d é: %d", num, dobro);
	
	return 0;
}

