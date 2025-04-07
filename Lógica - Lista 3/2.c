#include <stdio.h>

int main()
{
	float valorCompra, compraParc;
	
	printf("Digite o valor da compra: \n");
	scanf("%f", &valorCompra);
	
	compraParc = 5 * valorCompra;
	
	printf("A compra parcelada custará: %.2f", compraParc);
	
	return 0;
}
