#include <stdio.h>

int main()
{
	int i, codigo, numA = 0, numB = 0, numC = 0, numD = 0, numE = 0;
    float conceito, somaA = 0,somaB = 0, somaC = 0, somaD = 0, somaE = 0; 
    float mediaA, mediaB, mediaC, mediaD, mediaE;
    
    printf("\n--- MÉDIA DAS NOTAS FINAIS ---\n");
    
    for(i = 1; i <= 40; i++)
    {
        printf("Informe o codigo do %dº aluno: ", i);
        scanf("%d", &codigo);
        printf("Informe a nota final: ");
        scanf("%f", &conceito);
        
        if(conceito >= 0 && conceito <= 2.9){
            somaE += conceito;
            numE++;
        }else
			{
				if(conceito >= 3 && conceito <= 4.9)
				{
					somaD += conceito;
					numD++;
				}else 
					{
						if(conceito >= 5 && conceito <= 6.9)
						{
							somaC += conceito;
							numC++;
						}else 
							{
								if(conceito >= 7 && conceito <= 8.9)
								{
									somaB += conceito;
									numB++;
								}else 
									{
										if(conceito >= 9 && conceito <= 10)
										{
											somaA += conceito;
											numA++;
										}
									}
							}
					}
			}
	}
			
    mediaE = somaE / numE;
    mediaD = somaD / numD;
    mediaC = somaC / numC;
    mediaB = somaB / numB;
    mediaA = somaA / numA;
    
    printf("\n\n--- Resultado ---\n\n");
    printf("Um total de %d notas A, media de: %.1f\n", numA, mediaA);
    printf("Um total de %d notas B, media de: %.1f\n", numB, mediaB);
    printf("Um total de %d notas c, media de: %.1f\n", numC, mediaC);
    printf("Um total de %d notas D, media de: %.1f\n", numD, mediaD);
    printf("Um total de %d notas E, media de: %.1f\n", numE, mediaE);
	
	return 0;
}
