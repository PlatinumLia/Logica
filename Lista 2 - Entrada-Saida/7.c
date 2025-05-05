#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, d, mH;
	
	printf("Digite quatro números reais:\n");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	
	mH = 4 / ((1/a) + (1/b) + (1/c) + (1/d));
	
	printf("A média harmônica será: %.2f", mH);
	
	return 0;
}

