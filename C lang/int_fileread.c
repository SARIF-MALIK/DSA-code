#include<stdio.h>

int main (){

    int a,b,c;
    FILE *ptr;
    ptr = fopen("fint.txt","r");
    fscanf(ptr, "%d %d %d", &a, &b ,&c);
    printf("The values of a , b & c are %d %d %d ", a,b,c);
    
    fclose(ptr);
    return 0;
}