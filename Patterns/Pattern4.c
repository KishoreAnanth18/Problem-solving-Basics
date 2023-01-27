//Pattern 4
/*
i/p: 4
o/p: 
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/

#include "stdio.h"
int main(void) {
  int input=4;
  int num=1;
  for(int row=1; row<=input; row++){
    for(int col=1; col<=input; col++){
      printf("%d ",num);
      num+=1;
    }
    printf("\n");
  }
  return 0;
}