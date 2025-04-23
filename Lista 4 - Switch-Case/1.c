#include <stdio.h>
#include <ctype.h>

int main()
{
    char categoria;
    
    printf("Qual a sua categoria da sua carteira?\n");
    printf("Categoria A\n");
    printf("Categoria B\n");
    printf("Categoria C\n");
    printf("Categoria D\n");
    printf("Categoria E\n");
    printf("Digite a inicial da categoria da sua carteira:\n");
    scanf("%c", &categoria);

    categoria = toupper(categoria);

    switch(categoria)
    {
        case 'A':
            printf("É permitido dirigir: Moto");
            break;
        case 'B':
            printf("É permitido dirigir: Carro");
            break;
        case 'C':
            printf("É permitido dirigir: Caminhão");
            break;
        case 'D':
            printf("É permitido dirigir: Ônibus");
            break;
        case 'E':
            printf("É permitido dirigir: Carreta");
            break;
        default:
            printf("Categoria inválida");
    }
    
    return 0;
}