#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("this program is about the while loop\n");
    printf("\n");

    int index = 50;
    while(index >= 10){
        printf("this is the fighter: %d\n",index);
        index --;
    }

    int index2 = 0;
    do{
        printf("this is the fighter2: %d\n",index2);
        index2 --;
    }while(index2 >= 10);

    return 0;
}
