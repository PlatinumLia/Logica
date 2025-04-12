#include <stdio.h>

int main()
{
	float salario, aumentoVinte, aumentoDez, aumentoCinco;
	
	printf("Digite seu salário:\n");
	scanf("%f", &salario);
	
	aumentoVinte = salario * 1.20;
	aumentoDez = salario * 1.10;
	aumentoCinco = salario * 1.05;
	
	if(salario >= 0.00 && salario <= 990.00)
	{
		printf("O aumento será: %.2f", aumentoVinte);
	} else
		{
			if(salario >= 990.01 && salario <= 1480.00)
			{
				printf("O aumento será: %.2f", aumentoDez);
			} else
				{
					if(salario >= 1480.01 && salario <= 2000)
					{
						printf("O aumento será: %.2f", aumentoCinco);
					} else
						{
							printf("Não haverá aumento do salário");
						}
				}
		}
		
	return 0;
}

