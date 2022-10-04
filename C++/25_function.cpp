#include<iostream>
using namespace std;

// Function prototype 
int sum(int a, int b);
void g();
int main(){
    int num1,num2;

    cout<<"Enter the num 1 and num 2 to store"<<endl;
    cin>>num1>>num2;

    cout<<"Sum is "<<sum(num1,num2)<<endl;
    g();
    return 0;
}

int sum(int a, int b)
{
    int c = a+b;
    return c;
}

void g(){
    cout<<"Hello ji, Good Morning";
}