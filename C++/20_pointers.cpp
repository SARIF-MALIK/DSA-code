#include<iostream>
using namespace std;

int main(){

    int a = 3;
    int *b=&a;
    //b = &a;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*b<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    
    cout<<"The address of B is "<<&b<<endl;
                       
    //POINTER TO POINTER
    int **c;
    c = &b;
    cout<<"\tThe address of b is "<<&b<<endl;
    cout<<"\tThe address of b is "<<c<<endl;
    cout<<"\tThe value of a is "<<*b<<endl;
    cout<<"\tThe address of a is "<<*c<<endl;
    cout<<"\tThe value of a is "<<**c<<endl;

    return 0;
}