#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("          This program about the Switch statements\n");
    printf("\n");


    char grade;

    printf("**/ What is your grade : A, B, C, D \**\n");
    printf("Please Enter your grade:");
    scanf(" %c",&grade);
    printf("\n");

    switch(grade){
    case 'A':
        printf(">> That's very good.");
        break;

    case 'B':
        printf(">> That's good.");
        break;

    case 'C':
        printf(">> That's bad.");
        break;

    case 'D':
        printf(">> That's very bad.");
        break;

    default:
        printf(">> This is not a valid grade. ");
    }
    printf("\n");

    return 0;
}
