#include <stdio.h>
#include <ctype.h>
int main()
{
	char time;
	int torcAtl = 0, torcCor = 0, torcFoz = 0, totalEntrev = 0;
	float porcAtl, porcCor, porcFoz;
	
	printf("\n\n--- Pesquisa de Torcedores no Paraná ---\n\n");
	printf("\n\nDigite 'S' para sair.\n\n");
	
	do
	{
		printf("Qual a inicial do time que você torce?\nA - Atlético\nC - Coritiba\nF - Foz\n");
		scanf(" %c", &time);
		time = toupper(time);
		
		do
		{
			if(time == 'A')
			{
				torcAtl++;
				totalEntrev++;
			} else if(time == 'C')
				{
					torcCor++;
					totalEntrev++;
				}else if(time == 'F')
					{
						torcFoz++;
						totalEntrev++;
					} else if(time == 'S')
						{
							printf("Programda encerrado.\n");
						}
		}while(time == 'A' && time == 'C' && time == 'F');
	}while(time != 'S');
	
	porcAtl = ((float)torcAtl / totalEntrev) * 100;
	porcCor = ((float)torcCor / totalEntrev) * 100;
	porcFoz = ((float)torcFoz / totalEntrev) * 100;
	
	printf("\nTotal Entrevistados: %d\n", totalEntrev);
	printf("Torcedores do Atlético: %d.\nTorcedores do Coritiba: %d.\nTorcedores do Foz: %d.\n", torcAtl, torcCor, torcFoz);
	
	printf("Porcentagem de torcedores do Atlético: %.2f%%\n", porcAtl);
	printf("Porcentagem de torcedores do Coritiba: %.2f%%\n", porcCor);
	printf("Porcentagem de torcedores do Foz: %.2f%%\n", porcFoz);
	
	return 0;
}

