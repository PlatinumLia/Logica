#include <stdio.h>
#include <ctype.h>

int main()
{
	char estadoCivil;
	
	printf("O seu estado civil é solteiro (S), casado (C), divorciado (D) ou viúvo (V)?\nDigite a inicial do seu estado civil:\n");
	scanf("%c", &estadoCivil);
	
	estadoCivil = toupper(estadoCivil);
	
	if(estadoCivil == 'S')
	{
		printf("Solteiro");
	} else
		{
			if(estadoCivil == 'C')
			{
				printf("Casado");
			} else
				{
					if(estadoCivil == 'D')
					{
						printf("Divorciado");
					} 
					else
					{
						if(estadoCivil == 'V')
						{
							printf("Viúvo");
						} else
							{
								printf("Não digitou a inicial do estado civil.");
							}
					}
				}
		}
	
	return 0;
}

