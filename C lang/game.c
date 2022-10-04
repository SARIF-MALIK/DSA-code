#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){

    int num,guess,nguesses =1;
    srand(time(0));
    num = rand ()%100+1;

    do{
        printf("Guess the number from 1 to 100\n");
        scanf("%d",&guess);
        if(guess<num){
            printf("guess the bigger number\n");
        }

        else if (guess > num) {
            printf("guess lower number\n");
        }

        else {
            printf("you guessed in %d attempts\n", nguesses);
        }
        nguesses ++;
    }
    while (guess!=num);

    return 0;

}