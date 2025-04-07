#include <stdio.h>
#include <math.h>


int main()
{
	float a, b, c, d, mQ;
	
	printf("Digite quatro número reais:\n");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	
	mQ = sqrt((pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2) / 4));
	
	printf("A média harmônica será: %.2f", mQ);
	
	return 0;
}

