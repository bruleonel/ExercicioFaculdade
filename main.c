#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define TAM 20
		
struct vacina {
	int codigo;
	char cpf [15];
	char nome[40];
	char vaci[10];
	char data[20];
	char lote[10];
	};
		
		
int main() {
			
	setlocale(LC_ALL, "Portuguese");
				
	struct vacina f[TAM];
		
	char busca[15];
	int  opcao, acha,j, i;
	int cont; 
			
	opcao = 0;
	cont = 0;
	i=0;
			
	printf("==========================================\n");
	printf("           CONTROLE DE VACINAÇÃO          \n");
	printf("==========================================\n");
	printf("\n");
	printf("DIGITE A OPÇÃO DESEJADA: \n ");
			
			
	while(opcao != 4){
			
		printf("\n");
		printf(" 1 - Cadastrar Vacina\n");
		printf(" 2 - Listar Aplicações\n");
		printf(" 3 - Consultar por CPF\n");
		printf(" 4 - Sair\n");
		scanf("%d", &opcao);
		fflush(stdin);
			
			
		switch (opcao){
			case 1:
				system("cls");
					
				f[i].codigo=i;
					
				printf("Digite o nome do paciente: \n");
				gets(f[i].nome);
				fflush(stdin);
						
				printf("Digite o CPF do paciente: \n");
				gets(f[i].cpf);
				fflush(stdin);
						
				printf("Digite a vacina aplicada: \n");
				gets(f[i].vaci);
				fflush(stdin);
						
				printf("Digite a data da aplicação: \n");
				gets(f[i].data);
				fflush(stdin);
					
				printf("Digite o lote da vacina'': \n");
				gets(f[i].lote);
				fflush(stdin);
					
				i++;
		
				break;
					
			case 2:
				system("cls");
				
				for (j=0; j<i; j++){
					printf("\nCÓDIGO: %d\n",f[j].codigo);
					printf("NOME: %s\n",f[j].nome);
					printf("CPF: %s\n", f[j].cpf);
					printf("VACINA: %s\n", f[j].vaci);
					printf("DATA: %s\n", f[j].data);
					printf("LOTE: %s\n", f[j].lote);
					printf("=====================================\n");
						
					}
					break;
					
			case 3:
				system("cls");
				printf("Digite o CPF da busca: ");
				gets(busca);
				fflush(stdin);
					
				int retorno;
				
				j= 0;
				retorno = 1;
					
				while(j<i){
					
					retorno = strcmp(f[j].cpf,busca);
					
					if (retorno == 0){
						printf("\nCÓDIGO: %d\n", f[j].codigo);
						printf("\nNOME: %s\n", f[j].nome);
						printf("CPF: %s\n", f[j].cpf);
						printf("VACINA: %s\n", f[j].vaci);
						printf("DATA: %s\n", f[j].data);
						printf("LOTE: %s\n\n", f[j].lote);
						}
					j++;
						
					}
						
					if (retorno !=0){
						printf("\nCPF não encontado\n");
						}
					break;
					
				case 4:
					break;
					
				default:
					printf("Opção inválida, digite novamente! ");
			}
			
		} 
			
			return (0);
		}
