#include <stdio.h>

int main()
{
	int i, n, vetorA[1000], vetorB[1000], escalar = 0;
	
	printf("\n---Produtor escalar de vetores---\n\n");
	
	printf("Informe o tamanho dos vetores: ");
	scanf("%d", &n);
	printf("\n");
	
	/*Vetor A*/
	for(i = 0; i < n; i++)
	{
		printf("Informe o %iº valor para X: ", i+1);
		scanf("%d", &vetorA[i]);
	}
	
	printf("\n");
	
	/*Vetor B*/
	for(i = 0; i < n; i++)
	{
		printf("Informe o %iº para Y: ", i+1);
		scanf("%d", &vetorB[i]);
	}
	
	/*Laço de repetição para o produto escalar*/
	for(i = 0; i < n; i++)
	{
		escalar += vetorA[i] * vetorB[i]; 
	}
	
	printf("\n---RESULTADO---\n\n");
	printf("%d", escalar);
	
	return 0;
}
