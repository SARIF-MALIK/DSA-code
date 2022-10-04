#include<iostream>
using namespace std;

int fib(int a){
    if(a<=1){
        return 1;
    }
    return fib(a-2)+fib(a-1);
}

void fibchk(int x){
    int cont = 0;
    while (cont<=x){
        fib(cont);
        if(x%fib(cont)==0){
            cout<<"part of series"<<endl;
            cont++;
        }
        else if(cont >x){
            cout<<"not a part of series"<<endl;
        }
    } 
}

int main(){

    int num = 6,num2 = 4;

    fib(5);
    cout<<fib(num)<<endl;

    fibchk(num2);
    return 0;
}   