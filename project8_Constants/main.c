#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("the defferent between variables and constants\n");

    int x = 56;
    const int v = 585;

    // for variables
    printf("this is x1 = %d \n",x);
    x = 55;
    printf("this is x1 = %d\n",x);

    // for constants ==> cannot be changed
    printf("this is v(const)= %d \n",v);
    return 0;
}
