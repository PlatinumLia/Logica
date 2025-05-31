#include <stdio.h>

int main()
{
	int i, qtdSoma = 0;
	float soma = 0, valor,valorMax, valorMin, mediaFDN;
	
	printf("\n--- Valores Reais ---\n\n");
	
	for(i = 1; i <= 30 ; i++)
	{
		printf("Digite o número %i: ", i);
		scanf("%f", &valor);
		
		/* soma da média */
		if(valor > 5.9)
		{
			soma = soma + valor;
			qtdSoma++;
		}
		
		if(i == 1)
		{
			valorMax = valor;
			valorMin = valor;
		}else
			{
				if(valor > valorMax)
				{
					valorMax = valor;
				}
				if(valor < valorMin)
				{
					valorMin = valor;
				}
			}
	}
	
	mediaFDN = soma / qtdSoma;
	
	printf("\n\nA média dos valores é: %.2f\n", mediaFDN);
	printf("O valor máximo é: %.2f\n", valorMax);
	printf("O valor mínimo é: %.2f", valorMin);
	
	return 0;
}

