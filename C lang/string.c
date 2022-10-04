#include<stdio.h>

int main (){
    char s [] = {'S','A','R','I','F','\0'};

    char str[] = "SARIF";

    char *ptr = str;
    while(*ptr !='\0'){
        printf("%c",*ptr);
        ptr++;
    }

    return 0;
}