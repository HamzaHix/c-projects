#include <stdio.h>
#include <stdlib.h>


double cube(double num){
    double result = num*num*num; // we can return result.
    return num*num*num;  // or simply we can return this.
}

int main()
{
    double num1 = 2;
    printf("The cube value of %.2f is: %.2f\n",num1,cube(num1));
    return 0;
}
