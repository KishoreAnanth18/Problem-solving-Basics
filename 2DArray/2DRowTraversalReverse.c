//Reverse each row elements
//Row traversal

#include <stdio.h>
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int r=3;
    int c=3;
  // Can't assign variable in arr initialization - arr[r][c]:variable-sized object may not be initialized
    int arr[3][3]={
        {4,5,2},
        {1,7,6},
        {8,9,3}
    };
    
    int start,end;
    for(int row = 0; row<r; row++){
        start=0;
        end = c-1;
        swap(&arr[row][start], &arr[row][end]);
    }
    for(int row=0; row<3; row++,printf("\n")){
        for(int col=0; col<3; col++){
            printf("%d ",arr[row][col]);
        }
    }
    return 0;
}
