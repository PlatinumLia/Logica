#include <stdio.h>

int main()
{
	float totalVendas, comissao;
	
	printf("Digite o total das vendas:\n");
	scanf("%f", &totalVendas);
	
	comissao = totalVendas * 0.1;
	
	printf("Valor da comissão: = %.2f", comissao);
	
	return 0;
}

