#include<stdio.h>
int nat(int x);

int main () {
    int n = 3;
    printf("%d",nat(n));
    return 0;
}

int nat(int x){
    if (x!=0)
    
    return x + nat(x-1);
    return x;
}