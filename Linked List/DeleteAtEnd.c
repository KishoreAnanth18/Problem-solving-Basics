//Deletion of node at end of a linked list

#include <stdio.h>
#include <stdlib.h>
//Node structure
struct node{
  int data;
  struct node* next;
};
typedef struct node Node;

//Create node function
Node* createNode(int input){
  Node* newNode;
  newNode = (Node*)malloc(sizeof(Node));
  newNode->data = input;
  newNode->next = NULL;
  return newNode;
}

//Function to add node at beginning
void insert_at_begin(int input,Node* * start_ptr){
  Node* newNode = createNode(input);
  newNode->next = *start_ptr;
  *start_ptr = newNode;
}
//Function to delete at end
void delete_at_end(Node* * start_ptr){
  if(*start_ptr == NULL) printf("Linked List is empty");
  else{
    Node* ptr;
    Node* shadow=NULL;
    for(ptr = *start_ptr; ptr->next != NULL; ptr=ptr->next){
      shadow = ptr;  
    }
    shadow->next = NULL;
    free(ptr);
  }
}

//Function to print the data in the linked list
void display_LL(Node* start){
  for(Node* ptr=start; ptr!=NULL; ptr=ptr->next){
    printf("%d ",ptr->data);
  }
}

//Main function
int main(){
  int input;
  Node* start = NULL;
  while(1){
    scanf("%d",&input);
    if(input == -1) break;
    insert_at_begin(input,&start);
  }
  delete_at_end(&start);
  display_LL(start);
  return 0;
}
