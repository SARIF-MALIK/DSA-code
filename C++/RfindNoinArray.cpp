#include<iostream>
using namespace std;

bool checkno(int *p, int n, int x){
    if(n==0)
    return false;

    if(p[0] == x)
    return true;

    return checkno(p+1,n-1,x);
}

int main(){
    
    int n = 6;
    int x = 17;
    int *p = new int [n];
    p[0] = 5;
    p[1] = 6;
    p[2] = 8;
    p[3] = 2;
    p[4] = 15;
    p[5] = 7;

    bool y = checkno(p,n,x);
    if(y)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}