#include <stdio.h>

int main()
{
	float valorProd, valorPago, troco;
	
	printf("Digite o valor do produto e o valor usado para pagar por ele:\n");
	scanf("%f %f", &valorProd, &valorPago);
	
	troco = valorPago - valorProd;
	
	printf("O seu troco será: %.2f", troco);
	
	return 0;
}

