#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("All this is about Arrays\n");
    printf("\n");

    int luckyNumbers[]={54,54,541,54,897,65,32,2185,8748,564};
    luckyNumbers[0] = 100; // here we change a value in the array
    int user_num;

    printf("Enter a number between 1 and 10 : ");
    scanf("%d",&user_num);
    printf("the luckyNumbers of %d is: %d",user_num,luckyNumbers[user_num-1]);
    printf("\n");

    return 0;
}
