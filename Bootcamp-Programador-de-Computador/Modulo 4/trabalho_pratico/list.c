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
	while(current !=NULL){
		printf("%d", current->value);
		printf("\n");
		current = current->next;
	}
	printf("\n\n");
}
