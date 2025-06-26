#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAM 100

int main() 
{
    struct TPessoa
    {
        int codigo;
        char nome[TAM];
        char genero;
        int idade;
        float altura;
        float peso;
    };
    struct TPessoa cadastro[TAM];
    int i, n;
    char opt;
    
    printf("--- SISTEMA DE CADASTRO DE PESSOAS ---\n\n");
    
    printf("MENU:\n\n");
    printf("(A). Cadastrar pessoa(s).\n");
    printf("(B). Alterar dados de uma pessoa.\n");
    printf("(C). Excluir dados de uma pessoa.\n");
    printf("(D). Mostrar dados de uma pessoa.\n");
    printf("(E). Mostrar dados de todas os cadastros.\n");
    printf("(F). Encerrar programa.\n\n");
    
    do
    {
        printf("Opção desejada: ");
        scanf(" %c", &opt);
        opt = toupper(opt); 
        if(opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D' && opt != 'E' && opt != 'F')
        {
            printf("\nOpção inválida.\nEscolha uma opção válida!\n\n");
        }
        
        if(opt == 'A')
        {
            do
            {
                printf("Nº de pessoas que deseja cadastrar (máx. 100): ");
                scanf("%d", &n);
                if(n < 0)
                {
                    printf("\nA quantidade não pode ser menor que 0\n\n");
                }else
                {
                    if(n > 100)
                    {
                        printf("\nO cadastro não pode ter mais de 100 pessoas.\n\n");
                    }
                }
            }while(n <= 0 && n > 100);
        }
    }while(opt != 'A' && opt != 'B' && opt != 'C' && opt != 'D' && opt != 'E' && opt != 'F');

    return 0;
}