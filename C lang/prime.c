#include<stdio.h>
int main (){

    int n, i ;
    int prime = 1;
    printf("Enter the no. to test prime\n");
    scanf("%d",&n);

    for (i=2;i<n;i++)
    if(n%i==0){
        prime =0;
        break;}
    if (prime ==0)
    printf("It is not a prime number\n");
    else
    {printf("its a prime number\n");}
    return 0;

}