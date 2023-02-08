//string#@123$%
#include<stdio.h>
int main(){
	int count=0,alpha=0,digit=0;
	char s[1000];
	scanf("%s",s);
	for(int i=0; s[i]; i++){
		if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')) 
			alpha++;
		else if((s[i]>='0' && s[i]<='9')) digit++;
		else{
			if(){
			count++;
				
			}
					
		} 
	}
	printf("special: %d\nalpha: %d\nnumber: %d\n",count,alpha,digit);
	return 0;
}