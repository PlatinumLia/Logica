#include <stdio.h>

int main()
{
	int i, j, m, n, tam = 100;
    int matrizA[tam][tam], matrizB[tam][tam], matrizC[tam][tam];
    
    printf("---SOMA DE DUAS MATRIZES---\n");
    
    do{
        printf("Qual a quantidade de linhas: ");
        scanf("%d", &m);
        printf("Qual a quantidade de colunas: ");
        scanf("%d", &n);
        
        if(m <= 0 && n <= 0) 
        {
			printf("Impossivel forma uma matriz\n\n");
        }
    }while(m <= 0 && n <= 0);

    /* Entrada dos valores das matrizes */
    printf("\nMATRIZ A:\n");
    for(i = 0; i < m; i++)
    { 
		for(j = 0; j < n; j++)
		{
			printf("\nlinha[%d], coluna[%d]\n", i+1, j+1);
			scanf("%d", &matrizA[i][j]);
		}	
    }
    
    printf("\nMATRIZ B:\n");
    for(i = 0; i < m; i++)
    { 
		for(j = 0; j < n; j++)
		{
			printf("\nlinha[%d], coluna[%d]\n", i+1, j+1);
			scanf("%d", &matrizB[i][j]);
		}	
    }

    /* Soma das matrizes */
    for(i = 0; i < m; i++)
    { 
		for(j = 0; j < n; j++)
		{
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
		}	
    }
    
    printf("\n---RESULTADO---\n");
    printf("MATRIZ C:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++)
        {
			printf("[%d]\t", matrizC[i][j]);
		}
        printf("\n");
    }
	
	return 0;
}

