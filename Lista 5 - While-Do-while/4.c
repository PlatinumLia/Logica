#include <stdio.h>
#include <ctype.h>

int main()
{
	char like, recomenda;
	int idade, contEspec = 0, contVoto = 0, contReco = 0;
	
	printf("--- Pesquisa de Satisfação ---\n\n");
	printf("\n--- Digite 0 para sair ---\n");
	
	do
	{
		printf("\nDigite a sua idade: \n");
		scanf("%d", &idade);
		
		if(idade == 0)
		{
			break;
		} else
			{
				contEspec++;
			}
		do
		{	
			printf("\nVocê gostou do filme? (S/N)\n");
			scanf(" %c", &like);
			like = toupper(like);
		
			if(like == 'S')
				{
					contVoto++;
				}
		}while(like != 'S');
	
		do
		{
			printf("Você recomendaria esse filme para um colega? (S/N)\n");
			scanf(" %c", &recomenda);
			recomenda = toupper(recomenda);	
		
			if(recomenda == 'S')
			{
				contReco++;
			}
		}while(recomenda != 'S' && recomenda != 'N');
	
	}while(idade != 0);

	printf("\nEspectadores totais: %d\n", contEspec);
	printf("\nVotos positivos totais: %d\n", contVoto);
	printf("\nRecomendações totais: %d", contReco);

	return 0;
}

