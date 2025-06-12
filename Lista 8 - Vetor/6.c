#include <stdio.h>

int main()
{
	int i, vetorV[20], menorValor, posicao = 0;
	
	printf("\n---Posição do maior item de um vetor---\n\n");
	
	for(i = 0; i < 20; i++)
	{
		do
		{
			printf("Digite o %dº número : ", i + 1);
			scanf("%d", &vetorV[i]);
			
			if(i == 0)
			{
				menorValor = vetorV[i];
				posicao = i;
			}else
				{
					if(vetorV[i] < menorValor)
					{
						menorValor = vetorV[i];
						posicao = i;
					}
				}
			if(vetorV[i] < 0)
			{
				printf("Digite um número positivo");
			}
		}while(vetorV[i] < 0);	
	}
	
	printf("\n\n---RESULTADO FINAL---\n\n");
	printf("O menor valor é: %d\n", menorValor);
	printf("Este valor está na posição %d do vetor V", posicao + 1);
	
	return 0;
}
