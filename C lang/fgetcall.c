#include<stdio.h>

int main (){

    FILE *ptr;
    ptr = fopen("getcalldemo.txt","r");
    char c ;
    
    c = fgetc(ptr);
    while (c!= EOF){
    printf("%c",c);
    c = fgetc(ptr);

   
    }

    return 0;
}