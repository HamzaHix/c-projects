#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("this program is about \"printf\" \n");
    int num1 = 12;
    double num2 = 15.5;
    char character1 = 'H';
    char text1[] = "hix";

    printf("my favorite number is: %d \n",num1);
    printf("my favorite double is: %f \n",num2);
    printf("my favorite character is: %c \n",character1);
    printf("my favorite text is: %s \n",text1);

    return 0;
}
