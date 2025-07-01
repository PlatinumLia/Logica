#include <stdio.h>
#include <ctype.h>
#include <string.h>
/* #include <stdio_ext.h> */
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
    int i, n, j, pessoaAlt, campoAlt, excluir, mostrarUm;
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
			case 'A': /* cadastrar */
				printf("Quantidade de pessoas que deseja cadastrar: ");
				scanf("%d", &n);
				printf("\n");
				for(i = 0; i < n; i++)
				{
					cadastro[i].codigo = i;
					printf("Código da pessoa %d: [%d]\n\n", i + 1, cadastro[i].codigo);
					printf("Nome: ");
					getchar();
					fgets(cadastro[i].nome, sizeof(cadastro[i].nome), stdin);
					cadastro[i].nome[strcspn(cadastro[i].nome, "\n")] = '\0';
					
					do /* Verifica o cadastro do gênero*/
					{
						printf("Gênero(M/F): ");
						/* __fpurge(stdin); */ /* limpa o buffer */
						scanf(" %c", &cadastro[i].genero);
						cadastro[i].genero = toupper(cadastro[i].genero);
						if(cadastro[i].genero != 'M' && cadastro[i].genero != 'F')
						{
							printf("\nUse 'M' ou 'F' para definir o gênero da pessoa!\n\n");
						}
					}while(cadastro[i].genero != 'M' && cadastro[i].genero != 'F');
					
					do /* verifica o cadastro da idade */
					{
						printf("Idade: ");
						scanf("%d", &cadastro[i].idade);
						if(cadastro[i].idade < 0) 
						{
							printf("\nA idade precisa ser pelo menos igual a zero!\n\n");
						}
					}while(cadastro[i].idade < 0);
					
					do /* verifica o cadastro da altura */
					{
						printf("Altura (cm/m): ");
						scanf("%f", &cadastro[i].altura);
						if(cadastro[i].altura < 0.44)
						{
							printf("\nA altura precisa ser no mínimo 0,45 cm!\n\n");
						}
					}while(cadastro[i].altura < 0.44);
					
					do /* verifica o cadastro do peso */
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
			
			case 'B': /* alterar */
				if(n == 0)
				{
					printf("\nNenhum cadastro realizado!\n\n");
					break;
				}else
				{
					printf("Código da pessoa que deseja alterar: ");
					scanf("%d", &pessoaAlt);	
				}
				
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
								printf("(1). Nome.\n(2). Gênero.\n(3). Idade.\n(4). Altura.\n(5). Peso.\n(6). Sair.\n\n");
								
								printf("Opção desejada: ");
								scanf("%d", &campoAlt);
								if(campoAlt < 1 || campoAlt > 6)
								{
									printf("\nCampo inválido!\n\n");
								}else
								{	
									switch(campoAlt)
									{
										case 1:
											getchar();
											printf("Novo nome: ");
											fgets(cadastro[i].nome, sizeof(cadastro[i].nome), stdin);
											cadastro[i].nome[strcspn(cadastro[i].nome, "\n")] = '\0';
										break;
										
										case 2:
											do
											{
												printf("Novo gênero (M/F): ");
												scanf(" %c", &cadastro[i].genero);
												cadastro[i].genero = toupper(cadastro[i].genero);
											}while(cadastro[i].genero != 'M' && cadastro[i].genero != 'F');	
										break;
										
										case 3:
											printf("Nova idade: ");
											scanf("%d", &cadastro[i].idade);
										break;
										
										case 4:
											printf("Nova altura: ");
											scanf("%f", &cadastro[i].altura);
										break;
										
										case 5:
											printf("Novo peso: ");
											scanf("%f", &cadastro[i].peso);
										break;
										
										case 6:
											printf("\n\n--- Voltando ao primeiro menu ---\n\n");
										break;
									}
								}		
							}while(campoAlt != 6);
						}
					}
				}while(pessoaAlt != cadastro[i].codigo);
			break;
			
			case 'C': /* excluir */
				if(n == 0)
				{
					printf("\nNenhum cadastro realizado!\n\n");
					break;
				}else
				{
					printf("Código da pessoa que deseja excluir os dados: ");
					scanf("%d", &excluir);	
					if(excluir == cadastro[i].codigo)
					{
						for(i = 0; i < n; i++)
						{	
							for(j = 1; j < n; j--)
							{
								cadastro[j] = cadastro[j + 1];
							}
							n--;
							printf("\nCadastro excluído!\n\n");
						}
					}
				}
			break;
			
			case 'D': /* mostrar dados de uma pessoa */
				if(n == 0)
				{
					printf("\nNenhum cadastro realizado.\n\n");
				}else
				{
					printf("Código da pessoa que deseja mostrar os dados: ");
					scanf("%d", &mostrarUm);
					if(mostrarUm != cadastro[i].codigo)
					{
						printf("\nCódigo não encontrado");
					}else
					{
						for(i = 0; i < n; i++)
						{
							if(mostrarUm == cadastro[i].codigo)
							{
								printf("\n\nCadastro da pessoa %d:\n\n", i + 1);
								printf(" |Código: %d\n", cadastro[i].codigo);
								printf(" |Nome: %s\n", cadastro[i].nome);
								printf(" |Gênero: %c\n", cadastro[i].genero);
								printf(" |Idade: %d\n", cadastro[i].idade);
								printf(" |Altura: %.2f\n", cadastro[i].altura);
								printf(" |Peso: %.2f\n\n", cadastro[i].peso);
							}
						}
					}	
				}
			break;
			
			case 'E': /* mostrar todos os cadastros*/
				if(n == 0)
				{
					printf("\nNenhum cadastro realizado.\n\n");
				}else 
				{
					printf("\n\nTodos os cadastros:\n\n");
					for(i = 0; i < n; i++) 
					{
						printf("\n%dº pessoa:\n", i + 1);
						printf(" |Código: %d\n", cadastro[i].codigo);
						printf(" |Nome: %s\n", cadastro[i].nome);
						printf(" |Gênero: %c\n", cadastro[i].genero);
						printf(" |Idade: %d\n", cadastro[i].idade);
						printf(" |Altura: %.2f\n", cadastro[i].altura);
						printf(" |Peso: %.2f\n", cadastro[i].peso);
						printf("\n");
                    }
                }
			break;
			
			case 'F': /* encerrar programa */
				printf("\n\n--- PROGRAMA ENCERRADO ---\n\n");
			break;
		}
	}while(opt != 'F');
	
    return 0;
}
