//Linear search 
/*
Note : The array doesn't need to be sorted.
Time complexity: O(n)
Space complexity: O(1)
*/
#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int it;
    int target;
    printf("Enter a number to search: ");
    scanf("%d",&target);
    int n = sizeof(arr)/sizeof(arr[0]);
    for(it=0; it<n; it++){
        if(arr[it]==target){
            printf("Element found at index %d in the array\n",it);
            break;
        }
    }
    if(it==n) printf("Element not found in the array\n");
    return 0;
}