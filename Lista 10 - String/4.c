#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 100

int main() 
{
    char str[TAM], userCaracter;
    int i, cont = 0;
    
    printf("--- CONTADOR DE CARACTERES ---\n\n");
    
    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; /* Substitui o ""\n" por "\0" */
    
    printf("Carácter que deseja encontrar a quantidade: ");
    scanf(" %c", &userCaracter);
    
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == userCaracter || str[i] == toupper(userCaracter))
        {
            cont++;
        }
    }
    
    printf("\n\n--- RESULTADO ---\n\n");
    printf("Frase: %s\n", str);
    printf("Quantidade de %c's: %d", userCaracter, cont);
    
    return 0;
}