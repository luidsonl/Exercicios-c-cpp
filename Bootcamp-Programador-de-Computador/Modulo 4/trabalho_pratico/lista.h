#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int value;
	struct node *next;
} Node;

typedef struct{
	Node *first;
	int length;
}List;
