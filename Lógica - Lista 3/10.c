#include <stdio.h>
#include <math.h>


int main()
{
	int varUm, varDois, varQualquer;
	
	printf("Digite dois valores inteiros:\n");
	scanf("%d %d", &varUm, &varDois);
	
	printf("Valores digitados: %d, %d\n", varUm, varDois);
	
	varQualquer = varUm;
	varUm = varDois;
	varDois = varQualquer;
	
	printf("Valores após a troca: %d, %d", varUm, varDois);
	
	return 0;
}

