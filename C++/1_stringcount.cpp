#include<iostream>
using namespace std;

int rec(int a){
    int sum = 0;
    if(a<=1){
        return 0;
    }
    sum += (a-1)+rec(a-1);
    return sum;
}

int main(){

    string name;
    cin>>name;
    
    int a = name.length();

    cout<<a<<endl;
    
    cout<<rec(a);

    return 0;
}