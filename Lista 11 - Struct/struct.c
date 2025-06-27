#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdio_ext.h>
#define TAM 100

int main() 
{
    struct TPessoa
    {
        int codigo;
        char nome[TAM];
        char genero;
        int idade;
        float altura;
        float peso;
    };
    struct TPessoa cadastro[TAM];
    int i, n, pessoaAlt, campoAlt;
    char opt;
    
    printf("--- SISTEMA DE CADASTRO DE PESSOAS ---\n\n");
    
    do
    {
		printf("MENU:\n\n");
		printf("(A). Cadastrar pessoa(s).\n");
		printf("(B). Alterar dados de uma pessoa.\n");
		printf("(C). Excluir dados de uma pessoa.\n");
		printf("(D). Mostrar dados de uma pessoa.\n");
		printf("(E). Mostrar dados de todas os cadastros.\n");
		printf("(F). Encerrar programa.\n\n");
		
		printf("Opção desejada: ");
		scanf(" %c", &opt);
		opt = toupper(opt);
		
		switch (opt)
		{
			case 'A':
				printf("Quantidade de pessoas que deseja cadastrar: ");
				scanf("%d", &n);
				printf("\n");
				for(i = 0; i < n; i++)
				{
					cadastro[i].codigo = i + 1;
					printf("Código da pessoa %d: [%d]\n\n", i + 1, i);
					printf("Nome: ");
					__fpurge(stdin); /* limpa o buffer */
					fgets(cadastro[i].nome, sizeof(cadastro[i].nome), stdin);
					
					do /* Verifica o cadastro do gênero*/
					{
						printf("Gênero(M/F): ");
						__fpurge(stdin); /* limpa o buffer */
						scanf(" %c", &cadastro[i].genero);
						cadastro[i].genero = toupper(cadastro[i].genero);
						if(cadastro[i].genero != 'M' && cadastro[i].genero != 'F')
						{
							printf("\nUse 'M' ou 'F' para definir o gênero da pessoa!\n\n");
						}
					}while(cadastro[i].genero != 'M' && cadastro[i].genero != 'F');
					
					do /* verifica o cadastro da idade*/
					{
						printf("Idade: ");
						scanf("%d", &cadastro[i].idade);
						if(cadastro[i].idade < 0) 
						{
							printf("\nA idade precisa ser pelo menos igual a zero!\n\n");
						}
					}while(cadastro[i].idade < 0);
					
					do /* verifica o cadastro da altura*/
					{
						printf("Altura (cm/m): ");
						scanf("%f", &cadastro[i].altura);
						if(cadastro[i].altura < 0.44)
						{
							printf("\nA altura precisa ser no mínimo 0,45 cm!\n\n");
						}
					}while(cadastro[i].altura < 0.44);
					
					do /* verifica o cadastro do peso*/
					{
						printf("Peso(kg): ");
						scanf("%f", &cadastro[i].peso);
						if(cadastro[i].peso < 2.4)
						{
							printf("\nO peso precisa ser pelo menos 2,4");
						}
					}while(cadastro[i].peso < 2.4);
				}
				printf("\n");
			break;
			
			case 'B':
				printf("Código da pessoa que deseja alterar: ");
				scanf("%d", &pessoaAlt);	
				
				do
				{
					if(pessoaAlt != cadastro[i].codigo)
					{
						printf("\nO código digitado é inexistente!\n\n");
						break;
					}else
					{
						if(pessoaAlt == cadastro[i].codigo)
						{
							do
							{
								printf("\nCampos:\n\n");
								printf("(1). Nome.\n");
								printf("(2). Gênero.\n");
								printf("(3). Idade.\n");
								printf("(4). Altura.\n");
								printf("(5). Peso.\n\n");
								
								printf("Opção desejada: ");
								scanf("%d", &campoAlt);
								if(campoAlt < 1 || campoAlt > 5)
								{
									printf("\nCampo inválido!\n\n");
								}else
								{	
									switch(campoAlt)
									{
										case 1:
											
										break;
									}
								}		
							}while(campoAlt < 1 && campoAlt > 5);
						}
					}
				}while(pessoaAlt != cadastro[i].codigo);
			break;
		}
	}while(opt != 'F');
	
    return 0;
}
