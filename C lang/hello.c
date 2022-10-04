#include<stdio.h>
#include<conio.h>
int main (){
    int i ;

    char n [10];
    printf("What is your name?\n");
    for (i=0;i<10;i++){
    scanf("%c",& n[i]);}
    printf("hello\n");
    for (i=0;i<10;i++){
        
    printf("%c",n[i]);}
    
    return 0;
    
}