#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List initList(){
	List list;
	
	list.first = NULL;
	list.length = 0;
	return list;
}

void insertOnFirst(List *list, int value){
	Node *new = (Node*)malloc(sizeof(Node));
	new->value = value;
	new->next = list->first;
	// Poderia ser feito também com:
	//(*new).value = value;
	//(*new).next = NULL;
	
	list->first = new;
	list->length++;
	
	
}
void insertOnLast(List *list, int value){
	Node *current, *new = (Node*)malloc(sizeof(Node));
	new->value = value;
	new->next = NULL;
	
	if(list->first == NULL){
		list->first = new;
	}else{
		current = list->first;
		while(current->next != NULL){
			current = current->next;
		}
		current->next = new;
	}
	list->length++;
}


void printList(List *list){
	Node *current = list->first;
	while(current != NULL){
		printf("%d", current->value);
		printf("\n");
		current = current->next;
	}
	free(current);
	printf("\n\n");
}

void orderList(List *list){
    Node *current, *index;
    int temp;
    current = list->first;
    while (current != NULL) {
        index = current->next;
        while (index != NULL) {
            if (current->value > index->value) {
                temp = current->value;
                current->value = index->value;
                index->value = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
    free(current);
    free(index);
    printList(list);
}

void removeValue(List *list, int value){
	Node *current = list->first;
	Node *previous = NULL;
	int found = 0;
	
	if (current == NULL){
		printf("A lista está vazia\n\n");
		
	}else{
		while(current != NULL && found == 0){
			if(current->value == value){
				// Remove o nó da lista
				if(previous == NULL){ // Testa se o nó a ser removido é o primeiro
					list->first = current->next; // Atribui o valor do proximo nó para o primeiro nó da lista
				}else{
					previous->next = current->next;
				}
				printf("%d", current->value);
				printf(" removido\n\n");
				free(current);
				list->length--;
				return;
			}
			previous = current;
			current = current->next;
		}
		printf("Valor não encontrado\n\n");
		
	}
	
	
}







