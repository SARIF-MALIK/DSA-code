#include<stdio.h>

int main (){

    FILE *ptr;
    ptr = fopen("getcdemo.txt","r");
    if (ptr ==NULL){
        printf("file does not exists\n");
    }

    // char c = fgetc(ptr);
    printf("The value of my character is %c\n",fgetc(ptr));
    printf("The value of my character is %c\n",fgetc(ptr));
    printf("The value of my character is %c\n",fgetc(ptr));
    printf("The value of my character is %c\n",fgetc(ptr));
    printf("The value of my character is %c\n",fgetc(ptr));

    return 0;
} 