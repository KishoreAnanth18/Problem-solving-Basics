//Insertion sort v2
 
#include <stdio.h>
void swap(int* a1, int*a2){
    int temp;
    temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}
int main(){
    int arr[] = {5,4,10,1,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp,k;
    for(int i=1;i<n;i++){
        temp = arr[i];
        k = i;
        for(int j=i-1; j>=0; j--,k--){
            if(temp < arr[j]) swap(&arr[j],&arr[k]);
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}