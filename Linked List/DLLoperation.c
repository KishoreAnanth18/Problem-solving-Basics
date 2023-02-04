// Double linked list

#include <stdio.h>
#include <stdlib.h>

// Double linked list node structure
struct node{
  int data;
  struct node * next;
  struct node * prev;
};
typedef struct node Node;

// Function for creating a node
Node* createNode(int input){
  Node* newNode;
  newNode = (Node*)malloc(sizeof(Node));
  newNode->data = input;
  newNode->next = NULL;
  newNode->prev = NULL;
  return newNode;
}

//Insertion at begin
void insert_at_begin(Node**start, Node**end){
  
}

int main(void) {
  int input = 10;
  Node* newNode = createNode(input);
  printf("%d ",newNode->data);
  return 0;
}