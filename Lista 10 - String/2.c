#include <stdio.h>
#include <string.h>
#define TAM 100

int main() 
{
    char str1[TAM], str2[TAM], str3[TAM];
    int i, strTam[3];
    
    printf("---CONCATENAÇÃO DE STRINGS---\n\n");
    
    printf("String 1: ");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0'; /* Limpa o \n do fgets ao final da string e substitui por \0 */
    strTam[0] = strlen(str1); /* Guarda a string num espaço do vetor para contar seu tamanho */ /* Não precisa do "- 1", pois o "\n" foi substituído */
    
    printf("String 2: ");
    fgets(str2, sizeof(str2), stdin); /* Limpa o \n e substitui por \0 */
    str2[strcspn(str2, "\n")] = '\0';
    strTam[1] = strlen(str2);
    
    strcpy(str3, str1); /* Copia a str1 na str3 */
    strcat(str3, " "); /* Concatena um espaço para não as strings não ficarem juntas*/
    strcat(str3, str2); /* Concatena str2 na str3*/
    strTam[2] = strlen(str3);

    printf("\n\n---RESULTADOS---\n\n");
    printf("String 1: %s\t String 2: %s\n", str1, str2);
    printf("String 3: %s", str3);
    
    /* Laço para mostrar o tamanho das strings */
    printf("\n\nTamanho das strings (considera o espaço entre as strings):\n\n");
    for(i = 0; i < 3; i++)
    {
        printf(" String %d: %d\t", i + 1, strTam[i]);
    }
    return 0;
}