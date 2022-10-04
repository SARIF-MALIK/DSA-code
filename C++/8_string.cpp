//String 

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name = "Harry";
    cout<<"The name is "<<name<<endl;

    cout<<"The length of name is "<<name.length()<<endl;
    cout<<"The cut name is "<<name.substr(2,5)<<endl;
    cout<<"The cut name is "<<name.substr(1,3)<<endl;
}