#include<iostream>
using namespace std;

int prime(int n){
    bool b = true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        b = false;
    }
    return b;
}

int main(){
    int n;
    cin>>n;
    
    if(prime(n)==false)
        cout<<"Not a prime no.";
    else 
        cout<<"prime no.";
    return 0;
}