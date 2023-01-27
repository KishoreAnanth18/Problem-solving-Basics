//Find factorial of a number
/*
i/p: 5
o/p: 120
explaination: 5*4*3*2*1 = 120
*/

#include <stdio.h>
int main(){
    int num = 6;
    int rslt = 1;
    for(int val=num; val>0; val--){
        rslt*=val;
    }
    printf("%d",rslt);
    return 0;
}
