//Decimal to octal representation
#include <stdio.h>
int main(){
    int num = 131;
    long int oct=0;
    int place = 1;
    int rem;
    while(num){
        rem = num%8;
        oct = oct + rem*place;
        num/=8;
        place*=10;
    }
    printf("%ld",oct);
    return 0;
}
