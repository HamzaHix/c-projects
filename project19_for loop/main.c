#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("This is about the For Loop \n\n");

    int loading[] ={0,1,5,6,10,20,25,30,36,40,45,50,59,68,75,80,90,98,99,100};
    int length = sizeof(loading) / sizeof(loading[0]);

    printf("This is sizeof(loading): %d\n",sizeof(loading));
    int i;
    for (i=0 ; i < length; i++){
        printf("loading %d%% \n",loading[i]);
    }
    return 0;
}
