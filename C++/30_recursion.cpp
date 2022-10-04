#include<iostream>
using namespace std;

int fact(int a){
    if(a<=1){
        return 1;
    }
    return a*fact(a-1);
}

int main(){
    
    int num = 6;

    cout<< fact(num);

    return 0;
}


// 6! = 6*(6-1)!

// n! = n*(n-1)!