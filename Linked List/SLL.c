//Linked list implementation in C
#include <stdio.h>
#include <stdlib.h>
    
struct Node{
    int data;
    struct Node * next;
};
typedef struct Node SLLNODE;

SLLNODE* create_SLLNode(int input){
    SLLNODE* newNode;
    newNode = (SLLNODE*)malloc(sizeof(SLLNODE));
    newNode->data=input;
    newNode->next=NULL;
    return newNode;
}

void insertBegin(SLLNODE* *start,int input){
    SLLNODE* newNode = create_SLLNode(input);
    if(start == NULL) *start = newNode;
    else{
        newNode->next = *start;
        *start = newNode;
    }
}

void insertEnd(SLLNODE* *start,int input){
    SLLNODE* newNode = create_SLLNode(input);
    if(*start == NULL) *start = newNode;
    else{
		 SLLNODE* ptr;
		 for(ptr = *start; ptr->next !=NULL; ptr=ptr->next);              ptr->next = newNode;
	 }
}

void deleteBegin(SLLNODE* *start){
    if(*start == NULL) printf("The linked list empty");
	 else{
		 SLLNODE* toFree;
	    toFree = *start;
		 *start = (*start)->next;
		 free(toFree);
	 }
}

void deleteEnd(SLLNODE* *start)
{
    if(*start == NULL) printf("The linked list empty");
	 else{
	   SLLNODE* ptr;
		SLLNODE* prev;
		for(ptr=*start; ptr->next!=NULL; ptr=ptr->next){
		  prev = ptr;
		}
		prev->next = NULL;
		free(ptr);
	 }
}

void displaySLL(SLLNODE* start)
{
    SLLNODE* ptr; 
    for(ptr = start; ptr!=NULL; ptr=ptr->next){
        printf("%d ",ptr->data);    
    }
    printf("\n");
}

int main(){
    int input;
    SLLNODE* start = NULL;
    printf("Enter numbers to create a SLL: \n");
    while(1){
        scanf("%d",&input);
        if(input == -1) break;
        insertEnd(&start,input);
    }
	 deleteEnd(&start);
    displaySLL(start);
}