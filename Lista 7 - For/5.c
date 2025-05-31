#include <stdio.h>

int main()
{
	int i = 1, final = 0;
	int positivo = 0, par = 0, impar = 0, divisiveis = 0;
	float mediaPos, mediaP, mediaImp, mediaImpd;
	float somaPos = 0, somaPar = 0, somaImp = 0, somaDivisiveis = 0;
	
	printf("\n--- Média de uma faixa ed valores ---\n\n");
	
	while(final < i)
	{
		printf("Informe um valor inicial: ");
		scanf("%d", &i);
		printf("Informe o valor final: ");
		scanf("%d", &final);
	
		if(final < i)
		{
			printf("\nEntrada inválida (Digite um valor final maior que o inicial)\n");
		}
	}	
		
	for(int atual = i; atual <= final; atual++)
	{
		if(atual > 0)
		{
			positivo++;
			somaPos = somaPos + atual;
		}
		if((atual % 2) == 0)
		{
			par++;
			somaPar = somaPar + atual;
		} else
			{
				if((atual % 2) != 0)
				{
					impar++;
					somaImp = somaImp + atual;
				}
				if((atual % 3) == 0 && (atual % 4) == 0)
				{
					divisiveis++;
					somaDivisiveis = somaDivisiveis + atual;
				}
			}
	}
	
	mediaPos = somaPos / positivo;
	mediaP = somaPar / par;
	mediaImp = somaImp / impar;
	mediaImpd = somaDivisiveis / divisiveis;
	
	printf("\n\n--- Resultado da Análise ---\n\n");
	printf("\nTotal de inteiros e positivos: %d\n", positivo);
	printf("Total pares: %d\n", par);
	printf("Total ímpares: %d\n", impar);
	printf("Ímpares divisíveis por 3 e 4: %d", divisiveis);
	
	printf("\n\n--- Médias ---\n\n");
	printf("Média dos inteiros e positivos: %.2f\n", mediaPos);
	printf("Média dos pares: %.2f\n", mediaP);
	printf("Média dos ímpares: %.2f\n", mediaImp);
	printf("Média dos ímpares divisíveis por 3 e 4: %.2f", mediaImpd);
	
	return 0;
}

