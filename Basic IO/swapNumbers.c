//swapping two variable numbers
/*
i/p: num1=5, num2=10
o/p: num1=10, num2=5

Intuition: Using pointers in a function.
*/

#include <iostream>

void swap(int * inp1, int * inp2){
  int temp;
  temp = *inp1;
  *inp1 = *inp2;
  *inp2 = temp;
}
int main() {
  int num1 = 5;
  int num2 = 10;
  printf("Before swapping: num1=%d, num2=%d\n",num1,num2);
  swap(&num1, &num2);
  printf("After swapping: num1=%d, num2=%d",num1,num2);
  return 0;
}
