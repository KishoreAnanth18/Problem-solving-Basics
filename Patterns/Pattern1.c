//Pattern 1
/*
i/p: 4
o/p:
1111
1111
1111
1111

*/

#include "stdio.h"
int main(void) {
  int input=4;
  for(int row=1; row<=input; row++){
    for(int col=1; col<=input; col++){
      printf("1");
    }
    printf("\n");
  }
  return 0;
}
