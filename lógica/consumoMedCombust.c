#include <stdio.h>

int main()
{
	float distanciaPer, combustivelGasto, mediaCombust;
	
	printf("Digite a distância percorrida (em KM):\n");
	scanf("%f", &distanciaPer);
	
	printf("Digite o total de combustível gasto (em L):\n");
	scanf("%f", &combustivelGasto);
	
	mediaCombust = distanciaPer / combustivelGasto;
	
	printf("O consumo médio de combustível em km/l é: %.2f", mediaCombust);
	
	return 0;
}

