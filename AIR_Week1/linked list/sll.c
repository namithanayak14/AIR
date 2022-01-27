#include<stdio.h>
#include<stdlib.h>
#include "sll.h"

void insert_at_end(List *list, int data) {
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL){
        printf("Unable to allocate memory\n");
	}
	else{
        Node* temp = NULL;
        temp = list->head;
        newNode->data=data;
        newNode->link=NULL;
        if(temp == NULL){
            list->head = newNode;
        }
        else{
            while(temp!=NULL && temp->link!=NULL)
                temp = temp->link;
            temp->link = newNode;
        }
        list->number_of_nodes += 1;
	}
}

int search_list(List* list, int element){
   Node* temp = NULL;
   temp = list->head;
   int count = 0;
   while(temp != NULL){
       if (temp->data == element){
           return count;
       }
       temp = temp->link;
       count++;
   }
   return -1;
}

int retrieve_element(List* list, int index){
    Node* temp = NULL;
    temp = list->head;
    while(index != 0 && temp != NULL){
        temp = temp->link;
        index --;
    }
    return temp->data;
}
