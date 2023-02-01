//Insertion of a node in linked list with sorting order

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

//Function to add elements in sorting order
void insert_on_sort(int input, Node* * start_ptr){
  Node* newNode = createNode(input);
  if(*start_ptr == NULL){
    *start_ptr = newNode;
    return;
  }
  Node* ptr;
  Node* shadow = NULL;
  for(ptr = *start_ptr; ptr!=NULL; shadow = ptr,ptr = ptr->next){
    if((ptr->data) > input){
      break;
    }
  }
  if(ptr==*start_ptr){
    *start_ptr = newNode;
    newNode->next = ptr;
  }else{
    shadow->next = newNode;
    newNode->next = ptr;  
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
    insert_on_sort(input,&start);
  }
  display_LL(start);
  return 0;
}
