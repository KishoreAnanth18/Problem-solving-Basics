//Pattern 3
/*
i/p: 4
o/p:
1
12
123
1234
*/

#include "stdio.h"
int main(void) {
  int input=4;
  for(int row=1; row<=input; row++){
    for(int col=1; col<=row; col++){
      printf("%d",col);
    }
    printf("\n");
  }
  return 0;
}