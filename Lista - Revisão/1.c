
#include <stdio.h>

int main()
{
	float num1, num2, num3, num4, media;
	printf("Insira 4 valores para calcular a media:\n");
	scanf("%f %f %f %f", &num1, &num2, &num3,&num4);
	media = (num1 + num2 + num3 +num4) / 4;
	printf("A media é %f", media); 
	return 0;
}

