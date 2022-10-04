#include<stdio.h>
int main (){

    int i,n,fact=1;
    printf("Enter the no.\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {fact *= i;}

    printf("factorial is %d",fact);

}