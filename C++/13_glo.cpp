#include<iostream>
using namespace std;

int c = 45;

int main()
{
    int a, b, c;
    cout<<"Enter the value of a & b\n";
    cin>>a>>b;
    cout<<"Sum of a & b is "<<a+b<<endl;
    c = a+b;
    cout<<"value of c is "<<c<<endl;
    cout<<"value of c is "<<::c<<endl;

    float d = 34.6;
    long double e = 56.75;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;

}