#include <stdio.h>

int main()
{
	int tempoSeg, horas, minutos, segundos, restoDiv;
	
	printf("Digite o tempo em segundos:\n");
	scanf("%d", &tempoSeg);
	
	horas = tempoSeg / 3600;
	restoDiv = tempoSeg % 3600;
	minutos = restoDiv / 60;
	segundos = restoDiv / 60;
	
	printf("%d:%d:%d", horas, minutos, segundos);
	
	return 0;
}

