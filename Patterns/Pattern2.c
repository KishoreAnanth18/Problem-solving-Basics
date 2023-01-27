//Pattern 2
/*
i/p:4
o/p:
1
22
333
4444
*/


#include "stdio.h"
int main(void) {
  int input=4;
  for(int row=1; row<=input; row++){
    for(int col=1; col<=row; col++){
      printf("%d",row);
    }
    printf("\n");
  }
  return 0;
}