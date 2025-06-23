#include <stdio.h>
#include <string.h>
#define TAM 100

int main() 
{
    char str1[TAM], strInv[TAM];
    int i, j;
    
    printf("--- INVERSOR DE STRING ---\n\n");
    
    printf("Digite qualquer coisa: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; /* Substitui o "\n" por "\0" */
    
    /* Laço para a inversão da string */
    for(i = 0, j = strlen(str1) - 1; i < strlen(str1); i++, j--)
    {
        strInv[j] = str1[i];
    }
    
    printf("\n\n--- RESULTADO ---\n\n");
    printf("Entrada: %s\n", str1);
    printf("Saída: %s", strInv);
    
    return 0;
}
