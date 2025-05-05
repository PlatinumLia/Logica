
#include <stdio.h>

int main()
{
	float valorCompra, valorPago, valorTroco;
	printf("Insira o valor da compra\n");
	scanf("%f", &valorCompra);
	printf("Insira o valor do pagamento\n");
	scanf("%f", &valorPago);
	valorTroco = valorPago - valorCompra;
	printf("O troco é de: %f", valorTroco);
	return 0;
}

