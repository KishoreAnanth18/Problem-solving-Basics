//Insertion of node at the end of a linked list

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

//Function to add node at end
void insert_at_end(int input, Node* * start_ptr){
  Node* newNode = createNode(input);    
  if(*start_ptr == NULL){
    *start_ptr = newNode;
  }else{
    Node* ptr;
    for(ptr=*start_ptr; ptr->next!=NULL; ptr=ptr->next);
    ptr->next = newNode;      
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
    insert_at_end(input,&start);
  }
  display_LL(start);
  return 0;
}
