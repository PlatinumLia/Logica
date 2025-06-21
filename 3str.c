#include <stdio.h>
#include <string.h>
#define TAM 100

int main() 
{
    char str[TAM];
    int i, cont = 0;
    
    printf("--- CONTADOR DE CARACTERES 'O' ---\n\n");
    
    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; /* Substitui o ""\n" por "\0" */
    
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == 'o' || str[i] == 'O')
        {
            cont++;
        }
    }
    
    printf("\n\n--- RESULTADO ---\n\n");
    printf("Frase: %s\n", str);
    printf("Quantidade de O's: %d", cont);
    
    return 0;
}