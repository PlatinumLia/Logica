#include <stdio.h>

int main()
{
	int i = 1, num, soma = 0, cont = 0;
	float media;
	
	printf("-- Leitor de 15 números e cálculo da média dos números maiores que 10 -- \n\n");

	printf("Digite 15 números inteiros: \n");
				
	while(i <= 15)
	{
		scanf("%d", &num);
			if(num > 10)
			{
				soma = soma + num;
				cont++;
			}
		i++;
	}
	if(cont > 0)
	{
		media = (float)soma / cont;
		printf("Média dos números maiores que 10: %.2f \n", media);
	}
	else
	{
		printf("Não foi digitado número maior que 10. \n");
	}
	
	return 0;
}
