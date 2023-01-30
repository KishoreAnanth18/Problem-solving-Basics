//Selection sort

#include <stdio.h>
int swap(int* a1, int* a2){
    int temp;
    temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}

int printArray(int* arr, int n){
    for(int i=0; i<n; i++){
        printf("%d ",*arr);
        arr++;
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = 5;
    int min_ind;
    for(int i=0; i<n; i++){
        min_ind = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_ind])
                min_ind = j;
        }
        swap(&arr[min_ind], &arr[i]);
    }
    printArray(arr,n);
    return 0;
}