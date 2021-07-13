#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("the pointer is another type of data that can store the pysical memory adress of an exesting variable\n\n");

    int age = 55;
    int *pAge = &age;

    // way for printing the pysical memory adress of a variable
    printf("this is the pysical memory adress of the variable age: %p \n",pAge);

    // another way
    printf("this is the pysical memory adress of the variable age: %p \n",&age);

    //  Dereferencing Pointers to get the actual value that the pointer pointe to
    printf("this is the Dereferencing of pysical memory adress of the variable age: %d \n",*&age);
    printf("this is the Dereferencing of pysical memory adress of the variable age: %d \n",*pAge);
    return 0;
}
