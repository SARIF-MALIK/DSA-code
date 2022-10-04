#include<stdio.h>
#include<conio.h>

void encrypt(char *c){
    char *ptr= c;
    while(*ptr != '\0'){
        *ptr = *ptr+1;
        ptr++;
    }
}

int main (){
    char c[] = "This is my room";
    encrypt(c);

    printf("%s",c);
    return 0;
}