#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 100

int main() 
{
    char str1[TAM], str2[TAM];
    int i;
    
    printf("--- TRANSFORMA UMA STRING EM MAIÚSCULA ---\n\n");
    
    printf("Digite qualquer coisa: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; /* Substitui o ""\n" por "\0" */
    strcpy(str2, str1); /* Copia a str1 na str2 para armazenar em outro vetor de string*/
    
    /* Laço para transformar toda a str2 em maiúscula*/
    for(i = 0; i < strlen(str2); i++)
    {
        if(str2[i] == str1[i])
        {
            str2[i] = toupper(str2[i]);
        }
    }
    
    printf("\n\n--- RESULTADO ---\n\n");
    printf("Entrada: %s\n", str1);
    printf("Saída: %s", str2);
    
    return 0;
}