//Patter 5
/*
i/p: 4
o/p: 
1 3 5 7
2 4 6 8
9 11 13 15
10 12 14 16
*/

#include "stdio.h"
int main(void) {
  int input=4;
  int even = 2; int odd = 1;
  for(int row=1; row<=input; row++){
    for(int col=1; col<=input; col++){
      if(row%2!=0) {
        printf("%d ",odd);
        odd+=2;
      }
      else if(row%2==0){
        printf("%d ",even);
        even+=2;
      }
    }
    printf("\n");
  }
  return 0;
}
