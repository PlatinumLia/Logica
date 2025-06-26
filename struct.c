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
        char genero[TAM];
        int idade;
        float altura;
        float peso;
    };
    struct TPessoa cadastro[TAM];
    int i = 0, n;
    
    printf("--- CADASTRO DE PESSOAS ---\n\n");
    
    printf("Quantidade de pessoas que deseja cadastrar: ");
    scanf("%d", &n);
    printf("\n\n");
    
    do //Laço para o registro das pessoas
    {
        printf("Código da pessoa %d: ", i + 1);
        scanf("%d", &cadastro[i].codigo);
        printf("Nome: ");
        fgets(cadastro[i].nome, 100, stdin);
    cadastro[i].nome[strcspn(cadastro[i].nome, "\n")] = '\0'; // Substitui o "\n"
        printf("Gênero (M/F): ");
        scanf(" %c", &cadastro[i].genero);
        printf("Idade: ");
        scanf("%d", &cadastro[i].idade);
        printf("Altura: ");
        scanf("%f", &cadastro[i].altura);
        printf("Peso: ");
        scanf("%f", &cadastro[i].peso);
    }while(i < n);
    
    printf("\n\n");

    return 0;
}