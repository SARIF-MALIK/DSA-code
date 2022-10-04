#include<iostream>
using namespace std;

//int fib(int n){
    //// Using Recursion 
    // if(n==1)
    // return 0;

    // else if(n==2)
    // return 1;    

    // int ans = fib(n-1) + fib(n-2);
    // return ans;
void fib(int n){
    // Using For Loop 
    int a = 0;
    int b = 1;
    for(int i = 1;i<=n;i++){
        cout<<a<<" ";
        int c = a+b;
        a = b;
        b = c;
    }
}

int main(){
    int n;
    cin>>n;
    
    fib(n);
    // int ans = fib(n);
    // cout<<ans<<endl;
    return 0;
}