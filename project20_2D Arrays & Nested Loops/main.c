#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("This lesson is about the 2D Arrays and nested loops\n\n");

    int nums[4][4]= {
        {
            88,5988,5988,59
        },
        {
            5,95,95,9
        },
        {
            8,58,58,5
        },
        {
            22,8922,8922,89
        }
    };

    // for calculate the length of rows
    int length_i = sizeof(nums) / sizeof(nums[0]);
    // for calculate the length of columns
    int column_j = sizeof(nums[0])/sizeof(nums[0][0]);

    int i,j;
    for(i = 0;i<length_i;i++){
        printf("This is the row%d: [",i);
        for(j=0 ; j<column_j ; j++){
                if(j == column_j-1){
                    printf("%d",nums[i][j]);
                }else{
                    printf("%d,",nums[i][j]);
                }

        }
        printf("]\n");
    }


    return 0;
}
