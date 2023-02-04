//Binary search
/*
Base condition : The given array should be sorted.
Time complexity : O(logn)
Space complexity : O(1)
*/

#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = n-1;
    int mid,target;
    printf("Enter a number to search: ");
    scanf("%d", &target);
    while(left<=right){
        mid = (left+right)/2;
        if(arr[mid] == target){
            printf("Element found at index %d in the array\n",mid);
            break;
        }else if(arr[mid] > target){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    if(left>right) printf("Element not found in the array\n");
}