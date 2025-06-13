#include <stdio.h>

int main()
{
	float mF[3][3];
	int i, c, linha = 3;
	
	printf("\n---Matriz 3x3 float---\n\n");
	
	/*Laço de repetição para a linha*/
	for(i = 0; i < 3; i++)
	{
		/*Laço de repetição para a coluna*/
		for(c = 0; c < 3; c++)
		{
			printf("Linha[%d]; Coluna[%d]", i + 1, c + 1);
			scanf("%f", &mF[i][c]);
		}
	}
		
	do
	{
		printf("\n\nQual linha deseja ver?\n");
		scanf("%d", &linha);
		
		if(linha > 2)
		{
			printf("LINHA INEXISTENTE!!");
		}
	}while(linha > 2);
	
	printf("\n\n---RESULTADO FINAL---\n\n");
	printf("Linha: [%d]", linha);
	for(c = 0; c < 3; c++)
	{
		printf("[%.2f]", mF[i][c]);
	}
		
	return 0;
}

