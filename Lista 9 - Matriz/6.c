#include <stdio.h>
#define TAM 100

int main()
{
  float notas[TAM][4], somaNotas[TAM] , mediaAluno[TAM], mediaGeralSoma, mediaGeral;
  int i, j, n;
  
  printf("---Média geral de um turma---\n\n");
  
  /*Laço para saber quantos alunos há na turma*/
	do
	{
		printf("Qual a quantidade de alunos na turma?\n");
		scanf(" %d", &n);
    
		if(n <= 0)
		{
		printf("\nA turma não pode ter menos que 1 aluno!\n\n");
		}else
		{
			if(n > 100)
			{
				printf("\nA turma não pode exceder 100 alunos!\n\n");
			}
		}
	}while(n <= 0 || n > 100);
	
	/*Laço para obtenção da matriz das notas*/
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Aluno %d, nota %d: ", i + 1, j + 1);
            scanf(" %f", &notas[i][j]);
               
            if(notas[i][j] < 0)
            {
                printf("\nA nota não pode ser menor que 0.\n\n");
                printf("--- Encerrando programa! ---\n\n");
                break;
            }else
            {
                if(notas[i][j] > 10.0)
                {
                    printf("A nota não pode exceder 10,0.\n\n");
                    printf("--- Encerrando programa! ---\n\n");
                    break;
                }
            }
            /*Soma das notas do aluno*/
             somaNotas[i] += notas[i][j];
        }
    }
    
    /*Laço para obter a média de cada aluno e da turma*/
    for(i = 0; i < n; i++)
    {
        mediaAluno[i] = somaNotas[i] / 4;
        mediaGeralSoma += mediaAluno[i];
        /*printf("Média do aluno %d: %.2f\n", i + 1, mediaAluno[i]);*/
    }
    
    printf("\n\n");

    printf("Aluno\t\tNota1\t\tNota2\t\tNota3\t\tNota4\t\tMédia\n");
    /*Laço para mostrar em forma de tabela*/
    for(i = 0; i < n; i++)
    {
        printf("  %d\t\t", i + 1);
        for(j = 0; j < 4; j++)
        {
            printf(" %.1f\t\t", notas[i][j]);
        }
        printf("\t%.1f \n", mediaAluno[i]);
    }
    mediaGeral = mediaGeralSoma / n;
    printf("\n\nMÉDIA GERAL...................: %.1f", mediaGeral);
    
  return 0;
}
