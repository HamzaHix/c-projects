#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("*********  This program is about numbers  *********\n");
    printf("\n");

    int a = 36;
    float b = 2.55;
    int c = 2;

    printf(">> Those are the basics operations: \n");
    printf("* this is %d + %.2f = %.2f \n",a,b,a+b);
    printf("* this is %d - %.2f = %.2f \n",a,b,a-b);
    printf("* this is %d * %.2f = %.2f \n",a,b,a*b);
    printf("* this is %d / %.2f = %.2f \n",a,b,a/b);
    printf("\n");
    printf(">> Those are other operations: \n");
    printf("* this is pow(%d,%d) = %.2f \n",a,c,pow(a,c));
    printf("* this is sqrt(%d) = %.2f \n",a,sqrt(a));
    printf("* this is ceil(%.2f) = %.2f \n",b,ceil(b));
    printf("* this is floor(%.2f) = %.2f \n",b,floor(b));


    return 0;
}
