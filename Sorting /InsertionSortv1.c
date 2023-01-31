//Insertion sort in C v1

#include <stdio.h>
int main(){
    int arr[] = {5,4,10,1,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp,it2,it3;
    for(int it1=1;it1<n; it1++){
        temp = arr[it1];
        it2 = it1;
        it3 = it1-1;
        while(temp<arr[it3] && it3>=0){
            arr[it2] = arr[it3];
            it2--;
            it3--;
        }
        arr[it2] = temp;
    }
    for(int i=0; i<n; i++) printf("%d ",arr[i]);
    return 0;
}