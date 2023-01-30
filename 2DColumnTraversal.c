// find the column with maximum sum

#include <stdio.h>
int main()
{
    int arr[3][3] = {
        {4,5,2},
        {1,7,6},
        {8,9,3}
    };
    int rslt = 0;
    int index;
    for(int col=0; col<3; col++){
        int sum=0;
        for(int row=0; row<3; row++){
            sum+=arr[row][col];
        }
        if(sum>rslt){
            rslt = sum;
            index = col;
        }
    }
    printf("%d",index);
    return 0;
}
