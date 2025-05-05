
#include <stdio.h>

int main()
{
	float totalCompra, desconto, acrescimo;
	printf("Insira o total da compra\n");
	scanf("%f", &totalCompra);
	desconto = totalCompra * 0.9;
	acrescimo = totalCompra * 1.05;
	
	printf("A compra terá o desconto de: %f.2 \n", desconto);
	printf("O acrescimo será de: %f.2", acrescimo);
	return 0;
}

