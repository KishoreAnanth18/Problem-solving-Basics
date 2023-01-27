//Binary representation to decimal
#include <stdio.h>
#include <math.h>
int main(){
    int num = 0;
    long int bin=100111;
    int place = 0;
    int rem;
    while(bin){
        rem = bin%10;
        num+=rem*pow(2,place);
        place+=1;
        bin/=10;
    }
    printf("%d",num);
    return 0;
}
