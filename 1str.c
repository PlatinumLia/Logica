#include <stdio.h>
#include <string.h>
#define TAM 100

int main() 
{
    char str1[TAM] = "lua", str2[TAM] = "cheia";
    
    printf("---CONCATENAÇÃO DE STRINGS---\n\n");
    
    printf("String 1: %s\t String 2: %s", str1, str2);
    
    /*Concatena a str 2 na str1*/
    strcat(str1, str2);
    
    printf("\n\n---RESULTADO---\n\n");
    printf("String 1: %s\t String 2: %s", str1, str2);
    
    return 0;
}