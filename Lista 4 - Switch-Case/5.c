#include <stdio.h>

int main()
{
	float valorCompra, valorPago, diferenca, valorParcela;
	int opcao, parcela;
	
	printf("Digite o valor da compra:\n");
	scanf("%f", &valorCompra);
	
	printf("Opções de pagamento:\n");
	printf("1. Pagamento à vista - 15%% de desconto.\n");
	printf("2. Pagamento com cheque pré-datado para 30 dias - 10%% de desconto. \n");
	printf("3. Pagamento parcelado em 3 vezes - 5%% de desconto. \n");
	printf("4. Pagamento parcelado em 6 vezes - não tem desconto. \n");
	printf("5. Pagamento parcelado em 12 vezes - 8%% de acréscimo. \n");
	
	printf("Escolha sua opção de pagamento (1 a 5):\n");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			valorPago = valorCompra * 0.85;
			parcela = 1;
			diferenca = valorCompra - valorPago;
			valorParcela = valorPago / parcela;
			break;
		
		case 2:
			valorPago = valorCompra * 0.9;
			parcela = 1;
			diferenca = valorCompra - valorPago;
			valorParcela = valorPago / parcela;
			break;
			
		case 3:
			valorPago = valorCompra * 0.95;
			parcela = 3;
			diferenca = valorCompra - valorPago;
			valorParcela = valorPago / parcela;
			break;
			
		case 4:
			valorPago = valorCompra;
			parcela = 6;
			diferenca = valorCompra - valorPago;
			valorParcela = valorPago / parcela;
			break;
			
		case 5:
			valorPago = valorCompra * 1.08;
			parcela = 12;
			diferenca = valorCompra - valorPago;
			valorParcela = valorPago / parcela;
			break;
			
		default:
			printf("Opção inválida.\n");
			return 0; /*código encerra quando a opção é inválida*/
	}
	
	if(opcao == 5)
	{
		printf("VALORES FINAIS DA COMPRA \n");
		printf("Valor total: R$%.2f \n", valorCompra);
		printf("Quantia de parcelas: %d \n", parcela);
		printf("Valor do acréscimo: R$%.2f \n", diferenca);
		printf("Valor final: R$%.2f \n", valorParcela);
	}
	else
	{
		printf("VALORES FINAIS DA COMPRA \n");
		printf("Valor total: R$%.2f \n", valorCompra);
		printf("Quantia de parcelas: %d \n", parcela);
		printf("Valor do desconto: R$%.2f \n", diferenca);
		printf("Valor final: R$%.2f \n", valorParcela);
	}
}

