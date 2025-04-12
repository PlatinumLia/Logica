#include <stdio.h>
#include <ctype.h>

int main()
{
	char genero;
	float peso, altura, imc;
	
	printf("Digite o seu gênero (M ou H):\n");
	scanf("%c", &genero);
	
	printf("Digite o seu peso e altura:\n");
	scanf("%f %f", &peso, &altura);
	
	imc = peso/ (altura * altura);
	
	genero = toupper(genero);
	
	if(genero == 'M' && imc < 19)
	{
		printf("Abaixo do peso");
	} else
		{
			if(imc >= 19 || imc <= 23.9)
			{
				printf("Normal");
			} else
				{
					if(imc >= 24 || imc <= 28.9)
					{
						printf("Obesidade leve");
					} else
						{
							if(imc >= 29 || imc <= 38.9)
							{
									printf("Obesidade moderada");
							} else
								{
									if(imc > 39)
									{
										printf("Obesidade mórbida");
									}
								}
						}
				}			
		}
	
		if(genero == 'H' && imc <20)
		{
			printf("Abaixo do peso");
		} else
			{
				if(imc >= 20 || imc <= 24.9)
				{
					printf("Normal");
				} else
					{
						if(imc >= 25 || imc <= 29.9)
						{
							printf("Obesidade leve");
						} else
							{
								if(imc >= 30 || imc <= 39.9)
								{
									printf("Obesidade moderada");
								} else
									{
										if(imc > 40)
										{
											printf("Obesidade mórbida");
										}
									}
							}
					}			
			}
	return 0;
}

