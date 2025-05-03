#include <stdio.h>

int main(int argc, char **argv)
{
	int mes, ano;
	
	printf("Digite o número do mês que deseja saber o dia:\n");
	scanf("%d", &mes);
	
	switch(mes)
	{
		case 1:
			printf("Tem 31 dias.");
			break;
		
		case 2:
			printf("digite o ano:\n");
			scanf("%d", &ano);
			
			if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
			{
				printf("O ano é bissexto. Tem 29 dias.");
			} else
				{
					printf("O ano não é bissexto. Tem 28 dias.");
				}
			break;
			
		 case 3:
            printf("Tem 31 dias.");
            break; 

        case 4:
            printf("Tem 30 dias.");
            break; 
            
        case 5:
            printf("Tem 31 dias.");
            break; 
            
        case 6:
            printf("Tem 30 dias.");
            break; 
        
        case 7:
            printf("Tem 31 dias.");
            break; 

        case 8:
            printf("Tem 31 dias.");
            break;

        case 9:
            printf("Tem 30 dias.");
            break; 
        
        case 10:
            printf("Tem 31 dias.");
            break; 
        
        case 11:
            printf("Tem 30 dias.");
            break;
            
        case 12:
            printf("Tem 31 dias.");
            break;    
        
        default: 
            printf("Digite um mês válido!");
    }
    
	return 0;
}

