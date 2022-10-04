#include<iostream>
using namespace std;

int main()
{
    int a = 6, b = 4;

    cout<<"The arithmatic operators"<<endl;
    cout<<"The a+b is "<<a+b<<endl;
    cout<<"The a-b is "<<a-b<<endl;
    cout<<"The a*b is "<<a*b<<endl;
    cout<<"The a/b is "<<a/b<<endl;
    cout<<"The a%b is "<<a%b<<endl;
    cout<<"The a++ is "<<a++<<endl;
    cout<<"The a-- is "<<a--<<endl;
    cout<<"The ++a is "<<++a<<endl;
    cout<<"The --a is "<<--a<<endl;

    cout<<"\nThe Comparison operators\n"<<endl;
    cout<<"a==b is "<<(a==b)<<endl;
    cout<<"a!=b is "<<(a!=b)<<endl;
    cout<<"a>=b is "<<(a>=b)<<endl;
    cout<<"a<=b is "<<(a<=b)<<endl;
    cout<<"a<b is "<<(a<b)<<endl;
    cout<<"a>b is "<<(a>b)<<endl;

    cout<<"\nThe Logical operators\n"<<endl;
    cout<<"a==b && a>b is "<<((a>b)&&(a==b))<<endl;
    cout<<"a==b || a>b is "<<((a>b)||(a==b))<<endl;
}