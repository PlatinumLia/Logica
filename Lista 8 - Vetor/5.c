#include <stdio.h>

int main()
{
	int i, vetorV[20], maiorValor, posicao = 0;
	
	printf("\n---Posição do maior item de um vetor---\n\n");
	
	for(i = 0; i < 20; i++)
	{
		do
		{
			printf("Digite um número qualquer: ");
			scanf("%d", &vetorV[i]);
			
			if(vetorV[i] > maiorValor)
			{
				maiorValor = vetorV[i];
				posicao = i;
			}
			
			if(vetorV[i] < 0)
			{
				printf("Digite um número positivo");
			}
		}while(vetorV[i] < 0);	
	}
	
	printf("\n\n---RESULTADO FINAL---\n\n");
	printf("O maior valer é: %d\n", maiorValor);
	printf("Este valor está na posição %d do vetor V", posicao + 1);
	
	return 0;
}

