/* Requisitos
 * 1. Exibir um menu com as seguintes opções:
 * -Cadastrar um novo contato.
 * -Buscar um contato existente.
 * -Exibir todos os contatos cadastrados.
 * -Sair do programa.
 * 
 * 2. Ao selecionar a opção de cadastrar um novo contato, o usuário deve ser
 * solicitado a informar o nome, telefone e e-mail do contato.
 * 
 * 3. Ao selecionar a opção de buscar um contato existente, o usuário deve
 * ser solicitado a informar o nome do contato a ser buscado. Se o contato
 * existir, seus dados devem ser exibidos na tela.
 * 
 * 4. Ao selecionar a opção de exibir todos os contatos cadastrados, todos
 * os contatos cadastrados devem ser exibidos na tela.
 * 
 * 5. Ao selecionar a opção de sair do programa, o programa deve encerrar a
 * execução.
 * 
 * 6. Todos os contatos cadastrados devem ser armazenados em um arquivo
 * de texto, que deve ser lido e atualizado sempre que o programa for
 * iniciado ou encerrado.
*/
#include <stdio.h>
#include <stdlib.h>
#include "functions.c"


int main(){
	
	
	int option;
	
	printf("\nBem vindo a agenda\n");
	
	do{
		printf("1 - Cadastrar um novo contato\n");
		printf("2 - Buscar um contato existente\n");
		printf("3 - Exibir todos os contatos cadastrados\n");
		printf("4 - Excluir um contato existente");
		printf("5 - Editar um contato existente\n");
		printf("0 - Sair do programa\n");
		scanf("%d", &option);
		getchar(); // lê o caractere de nova linha deixado pelo scanf() e previne um erro que me impedia de informar o nome
		
		switch(option){
			case 1:
				addContact();
				break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:
				
				break;
			case 5:
				
				break;
			case 0:
				
				break;
			
		}
		printf("------------------\n");
	}while(option != 0);
	return 0;
}

