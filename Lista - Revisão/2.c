
#include <stdio.h>

int main()
{
	int num, antes, depois;
	printf("Insira um numero:\n");
	scanf("%d", &num);
	antes = num - 1;
	depois = num + 1;
	
	printf("O seu sucessor é %d.2", depois);
	printf("O seu antecessor é %d.2", antes);
	return 0;
}

