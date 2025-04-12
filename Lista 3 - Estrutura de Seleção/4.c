#include <stdio.h>
#include <math.h>

int main()
{
	float num, raiz, exp;
	
	printf("Digite um número real:\n");
	scanf("%f", &num);
	
	raiz = sqrt(num);
	exp = pow(num, 3);
	
	if(num > 0)
	{
		printf("%.2f", raiz);
	} else
		{
			if(num < 0)
			{
				printf("%.2f", exp);
			}
		}
	
	return 0;
}

