#include<iostream>

using namespace std;

int main()
{
    int age;

    cout<<"Tell me your age: ";
    cin>>age;
    if(age<18){
        cout<<"you don't come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid you'll get a kid pass"<<endl;
    }
    else 
        cout<<"Welcome to the party";

    
}