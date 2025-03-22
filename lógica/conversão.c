#include <stdio.h>

int main()
{
	float dolar, cotacao, real;
	
	printf("Digite o valor em dólar:\n");
	scanf("%f", &dolar);
	
	printf("Digite o valor da cotação:\n");
	scanf("%f", &cotacao);
	
	real = dolar * cotacao;
	
	printf("Valor em real = %.2f", real);
	
	return 0;
}
