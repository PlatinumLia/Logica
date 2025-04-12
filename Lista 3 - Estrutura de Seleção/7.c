#include <stdio.h>

int main()
{
	int ladoUm, ladoDois, ladoTres;
	
	printf("Digite a medida dos lados do triângulo:\n");
	scanf("%d %d %d", &ladoUm, &ladoDois, &ladoTres);
	
	
	if(ladoUm+ladoDois!=ladoTres || ladoDois+ladoTres!=ladoUm || ladoUm+ladoTres!=ladoDois)
	{
		printf("Não pode formar um triângulo");
	} else
		{
			if(ladoUm==ladoDois && ladoDois==ladoTres)
			{
				printf("É um triângulo equilátero");
			} else
				{
					if(ladoUm==ladoDois || ladoDois==ladoTres)
					{
						printf("É um triângulo isósceles");
					} else
						{
							if(ladoUm!=ladoDois || ladoDois!=ladoTres)
							{
								printf("É um triângulo escaleno");
							}	
						}
				}
		}
	
	return 0;
}

