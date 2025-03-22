#include <stdio.h>

int main()
{
	int num, antecessor, sucessor;
	
	printf("Digite um número inteiro:\n");
	scanf("%d", &num);
	
	antecessor = num - 1;
	sucessor = num +1;
	
	printf("O antecessor do número %d é: %d. E o seu sucessor é: %d", num, antecessor, sucessor);
	
	return 0;
}

