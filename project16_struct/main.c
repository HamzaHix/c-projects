#include <stdio.h>
#include <stdlib.h>


struct Human{
    char name[20];
    int age ;
    char gender[20];
    double lenght;

};

int main()
{
    printf("       This program is about struct\n");
    printf("\n");

    struct Human human1;
    strcpy(human1.name,"hix");
    human1.age = 789546589;
    strcpy(human1.gender,"male");
    human1.lenght = 1.78;

    // this is not working
    // If statements not working with char array elements in C ??????????
    char gender[] = human1.gender;

    if( gender == "male"){
        printf("hello Mr.%s ,your age is %d and your lenght is %f",human1.name,human1.age,human1.lenght);
    }else if(gender == "female"){
        printf("hello Ms.%s ,your age is %d and your lenght is %f",human1.name,human1.age,human1.lenght);
    }else {
        printf("this is not a valid gender");
    }


    return 0;
}
