#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node *link;
} Node;

typedef struct List {
	Node *head;
	int number_of_nodes;
} List;

List* list_initialize(); 
void insert_at_end(List *list, int data);
void list_print(List* list); 
void list_destroy(List* list);
int search_list(List* list, int element);
int retrieve_element(List* list, int index);