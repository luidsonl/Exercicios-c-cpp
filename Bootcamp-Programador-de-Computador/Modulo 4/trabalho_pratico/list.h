#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int value;
	struct Node *next;
} Node;

typedef struct{
	Node *first;
	int length;
}List;
