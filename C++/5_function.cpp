#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c;
    c = a+b;
    return c;
}

int main()
{
    int a,b;
    cout<<"Enter the number one: ";
    cin>>a;
    cout<<"Enter the number Two: ";
    cin>>b;

    cout<<"Sum is "<<sum(a,b);
    return 0;
}