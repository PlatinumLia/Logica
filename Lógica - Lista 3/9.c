#include <stdio.h>
#include <math.h>

int main()
{
	int num, milhar, centena, dezena, unidade, restoMilhar, restoCentena, restoDezena, somaAlg;
	
	printf("Digite um número inteiro de quatro algarismos:\n");
	scanf("%d", &num);
	
	milhar = num / 1000;
	restoMilhar = num % 1000;
	
	centena = restoMilhar / 100;
	restoCentena = restoMilhar % 100;
	
	dezena = restoCentena / 10;
	restoDezena = restoCentena % 10;
	
	unidade = restoDezena / 1;
	
	somaAlg = milhar + centena + dezena + unidade;
	
	printf("A soma dos quatro algarismos do número %d será: %d", num, somaAlg);
	
	return 0;
}

