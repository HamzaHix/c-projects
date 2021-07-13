#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("       ***** NEW CALCULATOR *****\n");
    printf("\n");

    double num1;
    double num2;
    char operation;

    printf(">> The operations you can use are: ( + | - | x | / )\n");

    printf("* Enter the number 1: ");
    scanf("%lf",&num1);
    printf("* Enter the operation: ");
    scanf(" %c",&operation);
    printf("* Enter the number 2: ");
    scanf("%lf",&num2);

    if(operation == '+'){
        printf("==>The result is: %.2f\n",num1+num2);
    }else if(operation == '-'){
        printf("==>The result is: %.2f\n",num1-num2);
    }else if(operation == 'x'){
        printf("==>The result is: %.2f\n",num1*num2);
    }else if (operation == '/'){
        printf("==>The result is: %.2f\n",num1/num2);
    }else{
        printf(">> This is invalid operation !!!\n");
    }
    return 0;
}
