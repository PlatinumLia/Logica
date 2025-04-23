#include <stdio.h>
#include <ctype.h>

int main()
{
    int num;
    
    printf("Digite um número de 1 a 7:\n");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
            printf("O dia da semana é: Domingo");
            break;
        case 2:
            printf("O dia da semana é: Segunda-feira");
            break;
        case 3:
            printf("O dia da semana é: Terça-feira");
            break;
        case 4:
            printf("O dia da semana é: Quarta-feira");
            break;
        case 5:
            printf("O dia da semana é: Quinta-feira");
            break;
        case 6:
            printf("O dia da semana é: Sexta-feira");
            break;
        case 7:
            printf("O dia da semana é: Sábado");
            break;
        default:
            printf("O número digitado é inválido");
    }
    
    return 0;
}