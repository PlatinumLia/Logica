#include <stdio.h>

int main()
{
	int i, vetorV[20], posicaoMaior = 0, posicaoMenor = 0, maiorValor, menorValor;
	
	printf("\n---Maior e menor valor em um vetor---\n\n");
	
	for(i = 0; i < 20; i++)
	{
		do
		{
			printf("Digite o %dº número: ", i+1);
			scanf("%d", &vetorV[i]);
			
			if(i == 0)
			{
				menorValor = vetorV[i];
				posicaoMenor = i;					
				maiorValor = vetorV[i];
				posicaoMaior = i;
			}else
				{
					if(vetorV[i] < menorValor)
					{
						menorValor = vetorV[i];
						posicaoMenor = i;
					}else
						{
							if(vetorV[i] > maiorValor)
							{
								maiorValor = vetorV[i];
								posicaoMaior = i;
							}
						}
				}	
			if(vetorV[i] < 0)
			{
				printf("---\n\nDIGITE UM NÚMERO POSITIVO---");
			}			
		}while(vetorV[i] < 0);
	}
	
	printf("\n\n---RESULTADO FINAL---\n\n");
	printf("O maior valor é: %d\n", maiorValor);
	printf("Este valor está na posição %d do vetor V\n", posicaoMaior + 1);
	printf("O menor valor é: %d\n", menorValor);
	printf("Este valor está na posição %d do vetor V", posicaoMenor + 1);
	
	return 0;
}

