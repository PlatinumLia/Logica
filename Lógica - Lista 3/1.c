#include <stdio.h>

int main()
{
	int notaUm, notaDois, notaTres;
	float mediaArit;
	
	printf("Digite o valor da primeira, segunda e terceira nota: \n");
	scanf("%d %d %d", &notaUm, &notaDois, &notaTres);
	
	mediaArit = (float)notaUm + (float)notaDois + (float)notaTres / 3;
	
	printf("A média aritmética é: %.2f \n", mediaArit);
	
	return 0;
}

