#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addContact(){
    // Declaração das variáveis
    char name[64];
    char phone[16];
    char email[128];

    printf("Informe o nome: ");
    fgets(name, 32, stdin);

    printf("Informe o telefone: ");
    fgets(phone, 16, stdin);

    printf("Informe o email: ");
    fgets(email, 64, stdin);

    FILE *file; // Cria um ponteiro para um objeto do tipo struct FILE
    file = fopen("contacts.txt", "a"); //Acessa a função fopen
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;// exibe erro se não for possível acessar arquivo
    }

    // Remove o caractere '\n' do final de cada string lida com a função fgets()
    name[strcspn(name, "\n")] = '\0';
    phone[strcspn(phone, "\n")] = '\0';
    email[strcspn(email, "\n")] = '\0';

    fprintf(file, "%s %s %s \n", name, phone, email); // Insere valores no arquivo

    fclose(file);
}


void searchContact() {
	char name[64];
    char phone[16];
    char email[128];
    char targetName[64];
    
    //Menu
    printf("Informe o nome que deseja buscar\n");
    fgets(targetName, 64, stdin);
    targetName[strcspn(targetName, "\n")] = '\0';
	
	FILE *file;
    file = fopen("contacts.txt", "r");
    
    if (file == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return;
    }
    
    while (fscanf(file, "%s %s %s", name, phone, email)==3){
		if(strcmp(name, targetName) == 0){
			printf("Nome: %s , Telefone: %s, Email: %s\n", name, phone, email);
		}
		
		
	}
    
    fclose(file);
	
}


void showContacts(){
	char name[64];
    char phone[16];
    char email[128];
	
	FILE *file;
    file = fopen("contacts.txt", "r");
    
    if (file == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return;
    }
    
    while (fscanf(file, "%s %s %s", name, phone, email)==3){
		printf("Nome: %s , Telefone: %s, Email: %s\n", name, phone, email);
		
	}
    
    fclose(file);
	
}
void deleteContact(char name[32]){
	
}
void editContact(char name[32]){
	
}


