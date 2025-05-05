
#include <stdio.h>

int main()
{
	float cel, fah, kel;
	printf("Insira a temperatura em celsius:\n");
	scanf("%f", &cel);
	kel = cel + 273;
	fah = 1.8 *(kel - 273) + 32;
	printf("A temperatura em kelvin será: %.1f \n", kel);
	printf("A temperatura em fahrenheit será: %.1f",fah); 
	return 0;
}

