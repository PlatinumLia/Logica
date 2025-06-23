#include <stdio.h>
#include <string.h>
#define TAM 100

int main() 
{
    char str1[TAM], str2[TAM];
    int strComp;
    
    printf("--- COMPARAÇÃO DE STRINGS ---\n\n");
    
    printf("String 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; /* Substitui o \n por \0 */
    
    printf("String 2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    
    strComp = strcmp(str1, str2); /* Compara a str1 com a str2 */
    
    printf("\n\n--- RESULTADO FINAL ---\n\n");
    
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    if(strComp == 0)
    {
        printf("Saída: são iguais\n");
    }else
    {
        if(strComp != 0)
        {
            printf("Saída: são diferentes\n");
        }
    }
    
    return 0;
}