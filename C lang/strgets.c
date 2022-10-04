#include<stdio.h>

int main (){

    printf("Enter your name\n");
    char str [10];
    gets (str);
    //scanf("%s",str);
     printf("Your name is %s\n",str);

    return 0;
}