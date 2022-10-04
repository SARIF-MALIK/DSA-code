#include <stdio.h>
#include<stdbool.h>

bool prime(int n){
    if(n<=1)
        return false;
    for(int i =2;i<n;i++){
        if(n%i==0){
            return false;
        }
        return true;
    }
    }
    
    void print(int n){
        for(int i = 2;i<n;i++){
            if(prime(i)){
                printf("%d\n",i);
            }
        }
    }


int main()
{
    int n = 10;
    
    prime (n);
    print(n);

    return 0;
}