#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("             This is a guessing game\n\n");

    int secret_num = 5;
    int guessed_num;
    int geuss_time = 0;
    int geuss_limit = 10;
    int geuss_count = 11;

    while(secret_num != guessed_num && geuss_time < geuss_limit){
        printf("Enter a number: ");
        scanf("%d",&guessed_num);
        geuss_count--;
        geuss_time++;
    }
    if(secret_num == guessed_num){
         printf("You Win !\n");
         printf("You get %d/%d \n",geuss_count,geuss_limit);
    }else{
        printf("You Lose !\n");
        printf("You get %d/%d \n",geuss_count,geuss_limit);
    }

    return 0;
}
