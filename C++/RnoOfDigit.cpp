#include<iostream>
using namespace std;

int digit(int n){
    int cnt =0;
    while(n){
        n /=10;
        cnt++;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    int ans = digit(n);
    cout<<ans<<endl;
   
   return 0;
}