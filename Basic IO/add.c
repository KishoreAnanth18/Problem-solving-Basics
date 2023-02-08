#include <stdio.h>
int add(int num1, int num2){
	return num1+num2;
}
	
int main(){
	int num1 = 5;
	int num2 = 10;
	int rslt = add(5,10);
	printf("%d\n",rslt);
	return 0;
}
