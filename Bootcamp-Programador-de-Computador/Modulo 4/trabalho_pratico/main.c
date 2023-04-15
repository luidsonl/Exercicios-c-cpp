/*Desenvolvimento de uma lista simplesmente encadeada, implementando
um algoritmo com TAD dinâmico através de ponteiros.
Requisitos:
1. O programa deve permitir que o usuário insira valores inteiros na lista.
2. O programa deve permitir que o usuário remova valores inteiros da lista.
3. O programa deve exibir os valores da lista na tela em ordem crescente.
4. O programa deve exibir uma mensagem de erro caso a lista esteja vazia
ou o valor a ser removido não esteja presente na lista.
5. O programa deve liberar a memória alocada para a lista quando
finalizado.
*/
#include <stdio.h>
#include <stdlib.h>
#include "list.c"


int main(){
	int option, value;
	
	List list = initList();
	
	do{
		printf("1 - Inserir no início\n");
		printf("2 - Inserir no final\n");
		printf("3 - Imprimir\n");
		printf("4 - Deixar em ordem crescente\n");
		printf("5 - Remover valor\n");
		printf("0 - Sair do programa\n");
		scanf("%d", &option);
		
		switch(option){
			case 1:
				printf("Informe o valor\n");
				scanf("%d", &value);
				insertOnFirst(&list, value);
				break;
			case 2:
				printf("Informe o valor\n");
				scanf("%d", &value);
				insertOnLast(&list, value);
				break;
			case 3:
				printf("Os números informados foram:\n");
				printList(&list);
				break;
			case 4:
				printf("Lista em ordem crescente:\n");
				orderList(&list);
				break;
			case 5:
				printf("Qual número você deseja remover?\n");
				scanf("%d", &value);
				removeValue(&list, value);
				break;
			case 0:
				printf("Encerrando programa\n");
				break;
			
		}
		printf("------------------\n");
	}while(option != 0);
	return 0;
}

