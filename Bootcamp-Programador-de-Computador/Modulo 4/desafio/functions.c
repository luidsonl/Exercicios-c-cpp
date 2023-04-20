#include <stdio.h>
#include <stdlib.h>

void addContact(){
    // Declaração das variáveis
    char name[32];
    char phone[16];
    char email[64];

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
	
    fprintf(file, "%s %s %s\n", name, phone, email); // Insere valores no arquivo

    fclose(file);
    
}


