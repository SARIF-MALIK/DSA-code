#include<stdio.h>

int main (){

    int x = 45;
    FILE *fptr;
    fptr = fopen("generated.txt","w");

    fprintf(fptr, "The number is %d\n", x);
    fprintf(fptr, "This is written by SARIFG");

    fclose(fptr);
} 