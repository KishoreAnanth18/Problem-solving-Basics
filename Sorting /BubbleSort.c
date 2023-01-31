//Bubble sort

#include <stdio.h>
void swap(int* a1, int* a2){
    int temp;
    temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}

int main(){
    int arr[] = {10,11,4,7,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int flag = 0;
    for(int i=0; i<n-1; i++){
        flag = 0;
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]) {
                swap(&arr[j],&arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
    for(int i=0; i<n; i++) printf("%d ",arr[i]);
    
    return 0;
}
