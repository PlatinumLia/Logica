#include <stdio.h>

int main()
{
	int num1, num2, soma, sub, mult, div;
	
	printf("Digite os valores para o número 1 e o número 2: \n");
	scanf("%d %d", &num1, &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	
	printf("soma = %d\n", soma);
	printf("subtraçao = %d\n", sub);
	printf("multiplicação = %d\n", mult);
	printf("divisão = %d\n", div);
	
	return 0;
}
