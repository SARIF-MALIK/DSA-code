#include<stdio.h>

int main (){

    printf("Enter the name\n");
    char str [10];
    
    scanf("%s",str);

    char *ptr = str;

     printf("%s\n",ptr);

    return 0;
}