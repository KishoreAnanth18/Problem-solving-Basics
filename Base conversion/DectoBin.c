//Decimal to binary representation
#include <stdio.h>
int main(){
    int num = 39;
    long int bin=0;
    int place = 1;
    int rem;
    while(num){
        rem = num%2;
        bin = bin + rem*place;
        num/=2;
        place*=10;
    }
    printf("%ld",bin);
    return 0;
}
