#include <stdio.h>

int main()
{
	float comp, larg, area, precoMQ, custoTotal;
	
	printf("Digite a largura e o comprimento da sala:\n");
	scanf("%f %f", &larg, &comp);
	
	area = larg * comp;
	printf("A área da sala é: %.2f\n", area);
	
	printf("Digite o preço do metro quadrado do carpete:\n");
	scanf("%f", &precoMQ);
	
	custoTotal = area * precoMQ;
	
	printf("O custo total para forrar a sala com o carpete será: %.2f", custoTotal);
	
	return 0;
}

