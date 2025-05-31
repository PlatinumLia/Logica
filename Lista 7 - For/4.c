#include <stdio.h>

int main()
{
	int i;
	float result, numerador = 1, denominador = 1;
	
	for(i = 1; i <= 25; i++)
	{
		result = result + (numerador / denominador);
		numerador +=2;
		denominador++;
	}
	
	printf("%f", result);
	
	return 0;
}

