//2D array traversal along diagnols from top right to bottom left.
/*
I/P: 4 3
    4 5 2
    1 7 6
    8 3 2
    2 7 5
O/P:
    4
    5 1 
    2 7 8 
    6 3 2 
    2 7 
    5
    
*/

#include <stdio.h>
int main()
{
    int r=4,c=3;
    int arr[4][3] = {
        {4,5,2},
        {1,7,6},
        {8,3,2},
        {2,7,5}
    };
    int sum = 0;
    while(sum<=(r-1)+(c-1)){
        for(int row=0; row<r; row++){
            for(int col=0; col<c; col++){
                if(row+col == sum) printf("%d ",arr[row][col]);
            }
        }
        printf("\n");
        sum++;
    }
    return 0;
}
