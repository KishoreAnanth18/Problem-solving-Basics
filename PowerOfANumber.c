//power of a number
/*
TC 1
i/p: 5 3
o/p: 125
exp: 5*5*5 = 125

TC 2
i/p: 2 10
o/p: 1024
exp: 2*2*2*2*2*2*2*2*2*2 = 1024
*/

#include <stdio.h>

int main()
{
    int num = 2;
    int power = 10;
    int rslt = 1;
    while(power--){
        rslt*=num;
    }
    printf("%d",rslt);

    return 0;
}
