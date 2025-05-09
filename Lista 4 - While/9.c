#include <stdio.h>
#include <math.h>

int main()
{
	int i = 1, mult = 0;
	
	printf("-- Tabuada do 6 --\n\n");
	
	while(i <= 10)
	{
		printf("6 x %d = %d\n", i,mult);
		mult = i * 6;
		i++;
	}
	
	return 0;
}

