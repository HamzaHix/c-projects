#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("This is about Memory adress\n\n");

    int age = 5;
    double lenght = 1.76;
    char grade = 'A';

    // this is how you can print the physical memory adress.
    printf("The age: %p \nThe length: %p \nThe grade: %p\n",&age ,&lenght,&grade);
    return 0;
}
