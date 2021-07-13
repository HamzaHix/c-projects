#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("********* this is about functions ********\n");

    int num1 = 5 ;
    int num2 = 5 ;


    printf("\nWe have: %d - %d = %d",num1,num2,sum2(num1,num2) );

    return 0;
}

void sum(int num1,int num2){

    printf("We have: %d + %d = %d",num1,num2,num1+num2);

}

int sum2(int num1,int num2){

    sum(num1,num2);

    return num1-num2;

}
