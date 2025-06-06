#include <stdio.h>

int main()
{
	int i, acimaMedia = 0;
	float notas[20], media, soma = 0;
	
	printf("\n---Média turma---\n\n");
	
	/*Média da turma*/
	for(i = 0; i < 20; i++)
	{
		printf("Digite a nota do %iº aluno: ", i+1);
		scanf("%f", &notas[i]);
		soma += notas[i];
	}
	
	media = soma / 20;
	
	/*Alunos acima da média da turma*/
	for(i = 0; i < 20; i++)
	{
		if(notas[i] > media)
			{
				acimaMedia++;
			}
	}
	
	printf("\n\n---Resultados---\n\n");
	printf("A média da forma é: %.2f\n", media);
	printf("O número de alunos que tiveram nota maior que a média da turma é: %d", acimaMedia);
	
	return 0;
}
