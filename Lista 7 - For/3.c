#include <stdio.h>

int main()
{
	int i;
    char caracter = 32;
    
    printf("\n--- Tablea ASCII(32 a 126) ---\n\n");
    
    for(i = 32; i <= 126; i++)
    {
        printf("%i -> %c -> %X\n", i, caracter, i);
        caracter++;
    }
	
	return 0;
}
