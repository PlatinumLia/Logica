#include <stdio.h>
#include <math.h>

int main()
{
	int numInicial = -2, razao = -2, i = 1, progGeo;

	printf("-- Progressão Geométrica com 10 termos --\n\n");
	
	while(i <= 10)
	{
		progGeo = (numInicial * pow(razao, i-1));
		printf("%d\n", progGeo);
		i++;
	}
	
	return 0;
}

