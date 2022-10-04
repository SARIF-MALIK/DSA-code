#include<iostream>
using namespace std;

union emp

{
    int id;
    char favchar;
    float salary;
};

int main(){

    union emp sam;
    sam.id = 11893;
    // sam.favchar = 'u';
    // sam.salary = 45.50; 

    cout<<"sam id is: "<<sam.id<<endl;
    // cout<<"sam favourite char is: "<<sam.favchar<<endl;
    // cout<<"sam salary is "<<sam.salary<<endl;
    
    union emp Ben;
    // Ben.id = 893;
    // Ben.favchar = 'o';
    Ben.salary = 34.50; 

    // cout<<"\nBen id is: "<<Ben.id<<endl;
    // cout<<"Ben favourite char is: "<<Ben.favchar<<endl;
    cout<<"Ben salary is "<<Ben.salary<<endl;


    return 0;
}