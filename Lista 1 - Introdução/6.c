#include <stdio.h>

int main()
{
	int tamanhoArq, veloConexao, tempoDown;
	
	printf("Digite o tamanho do arquivo em (bits):\n");
	scanf("%d", &tamanhoArq);
	
	printf("Digite a velocidade de conexão:\n");
	scanf("%d", &veloConexao);
	
	tempoDown = tamanhoArq / veloConexao;
	
	printf("O tempo necessário para o download será: %d segundos", tempoDown);

	return 0;
}

