#include<stdio.h>
#include<stdlib.h>
#include"sll.h"

int main() {
	int choice;
	int count = 0;
	List* list = list_initialize();
	do {
        printf("1: Insert \n 2: Print List \n 3: Search \n 4: Retrieve word \n 5: Print first and last element \n 0: Exit \n");
		scanf("%d", &choice);
		switch(choice) {
			int element, index;
			case 1:
				/*Insert element at the End of the list*/
				printf("Enter element: ");
				scanf("%d", &element);
				count++;
				insert_at_end(list, element);
				break;
			case 2:
				/* Print list contents */
				list_print(list);
				break;
			case 3:
                printf("Enter element to be searched:");
                scanf("%d", &element);
                printf("%d \n", search_list(list, element));
				break;
			case 4:
				printf("Enter index to be retrieved: ");
				scanf("%d", &index);
				printf("The element is: %d \n", retrieve_element(list, index));
				break;
			case 5:
				printf("The first element is: %d \n", retrieve_element(list, 0));
				printf("The last element is: %d \n", retrieve_element(list, count - 1));
				break;
		}
	} while(choice != 0);
	list_destroy(list);
	return 0;
}

List* list_initialize() {
	List* list = (List*) malloc(sizeof(List));
	list->head = NULL;
	list->number_of_nodes = 0;
	return list;
}

void list_print(List* list)
	{
	Node *p;
	p=list->head;
	if(p == NULL)
	{
		printf("EMPTY\n");
		return;
	}
	while (p!=NULL){
		printf("%d ",p->data);
		p=p->link;
	}
	printf("\n");
}


void list_destroy (List *list)
{
	Node *t, *u=NULL;
	t=list->head;
	while (t->link!=NULL){
		u=t;
		t=t->link;
		free(u);
	}
	free(list);
}