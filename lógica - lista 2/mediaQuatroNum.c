#include <stdio.h>

int main()
{
	int num1, num2, num3, num4, soma, media;
	
	printf("Digite 4 números inteiros:\n");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	
	soma = num1 + num2 + num3 + num4;
	media = soma / 4;
	
	printf("A média é: %d", media);
	
	return 0;
}

