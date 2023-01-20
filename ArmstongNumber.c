//Armstrong number in C
/*
i/p: 153
o/p: 1
exp: 153 == 153 

i/p: 145
o/p: 0
exp: 145 != 190
*/

#include <stdio.h>

int main()
{
    int input=153;
    int nod=0;
    int temp=input;
    int digit;
    while(temp){
        nod++;
        temp/=10;
    }
    int sum=0;
    temp = input;
    while(temp){
        digit = temp%10;
        int ex=1;
        for(int it=nod;it>0;it--){
            ex*=digit;
        }
        sum+=ex;
        temp/=10;
    }
    printf("%d",sum==input);

    return 0;
}
