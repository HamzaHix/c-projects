#include <stdio.h>
#include <stdlib.h>

int main()
{

    // for understand the scanf()
    printf("*********  This program is a sample calculator  *********\n");
    printf("\n");

    char fname[20] ;
    char lname[20] ;
    int a ;
    int b ;

    printf("Enter the num1: ");
    scanf("%d",&a);
    printf("Enter the num2: ");
    scanf("%d",&b);

    printf(">> Those are the basics operations: \n");
    printf("* this is num1 + num2 = %d \n",a+b);
    printf("* this is num1 - num2 = %d \n",a-b);
    printf("* this is num1 * num2 = %d \n",a*b);
    printf("* this is num1 / num2 = %d \n",a/b);

    printf("Enter your name please: ");
    scanf("%s%s",fname,lname);
    printf("Thanks Mr.%s %s \n",fname,lname);

    return 0;
}
