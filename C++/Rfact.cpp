
#include<iostream>
using namespace std;

int fact(int n){

    if(n==0){
        return 1;
    }
    int small = fact(n-1);
    return n*small;
}

int main(){
    int n;
    cin>>n;

    int ans = fact(n);
    cout<<ans;
    return 0;
}