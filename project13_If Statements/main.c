#include <stdio.h>
#include <stdlib.h>

double maxfor2(double num1,double num2);
double maxfor3(double num1,double num2,double num3);

int main()
{
    printf("this is a simple program fo if statments\n");
    printf("\n");

    double num1 = 15.2;
    double num2 = 158.2;
    double num3 = 1555.2;

    printf("the max value of %.2f and %.2f is: %.2f \n",num1,num2,maxfor2(num1,num2));
    printf("the max value of %.2f and %.2f and %.2f is: %.2f \n",num1,num2,num3,maxfor3(num1,num2,num3));
    return 0;
}

double maxfor2(double num1,double num2){

    double result;
    if(num1 > num2){
        result = num1;
    }else{
        result = num2;
    }

    return result;
}

double maxfor3(double num1,double num2,double num3){

    double result;
    if(num1 > num2 && num1 > num3){
        result = num1;
    }else if(num2 > num1 && num2 > num3){
        result = num2;
    }else{
        result = num3;
    }

    return result;
}
