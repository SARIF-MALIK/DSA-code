#include<stdio.h>

int main (){

    FILE *ptr;
    ptr = fopen("putcdemo.txt","w");
    putc('a',ptr);
    putc('a',ptr);
    putc('a',ptr);


    return 0;
}