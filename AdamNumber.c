//Adam number
/*
i/p: 12
o/p: Adam number
explain: 
    num = 12
    sq_num = 144
    rev_num = 21
    sq_rev_num = 441
    rev_sq_num = 441
    
i/p: 13
o/p: Adam number
explain:
    num = 13
    sq_num = 169
    rev_num = 31
    sq_rev_num = 961
    rev_sq_num = 961
    
i/p: 45
o/p: Not a adam number
explain:
    num = 45
    sq_num = 2025
    rev_num = 54
    sq_rev_num = 2916
    rev_sq_num = 5202
*/

#include <stdio.h>
int square(int num){
    return num*num;
}

int reverse(int num){
    int digit,rev=0;
    while(num){
        digit=num%10; //3 //1
        rev=rev*10+digit; //0+3 //30+1
        num/=10; //1
    }
    return rev;
}

int main()
{
    int num=16;
    int sq_num = square(num); //169
    int rev_num = reverse(num); //31
    int sq_rev_num = square(rev_num); //961
    int rev_sq_num = reverse(sq_num); //961
    printf("square of number: %d\n",sq_num);
    printf("Reverse of number: %d\n",rev_num);
    printf("square of reverse number: %d\n",sq_rev_num);
    printf("reverse of square number :%d\n",rev_sq_num);
    if(sq_rev_num == rev_sq_num) printf("Adam number");
    else printf("Not a adam number");
    return 0;
}
