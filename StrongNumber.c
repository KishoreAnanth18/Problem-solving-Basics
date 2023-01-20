//Strong number in C
/*
i/p: 153
o/p: 0
exp: 153 != 127 

i/p: 145
o/p: 1
exp: 145 == 145
*/

#include <stdio.h>

int main()
{
    int input=145;
    int temp=input;
    int digit;
    int sum=0;
    while(temp){
        digit = temp%10;
        int fact=1;
        while(digit){
            fact*=digit;
            digit--;
        }
        sum+=fact;
        temp/=10;
    }
    printf("%d",sum==input);

    return 0;
}
