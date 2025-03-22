#include <stdio.h>

int main(int argc, char **argv)
{
	float valorCompra, desconto, acrescimo;
	
	printf("Digite o valor total de uma compra:\n");
	scanf("%f", &valorCompra);
	
	desconto = valorCompra * 0.1;
	acrescimo = valorCompra * 0.05;
	
	printf("O valor do desconto será: %.2f. E o acréscimo será: %.2f", desconto, acrescimo);
	
	return 0;
}

