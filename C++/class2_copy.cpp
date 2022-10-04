#include<iostream>
using namespace std;

class student 
{
    int id;
    string name;  

    public:
    void set(void);
    void print(void);
};

void student :: set(){
    cout<<"Enter the Id and name of the student"<<endl;
    cin>>id>>name;
}

void student :: print(){
    cout<<"Id of student is "<<id<<" and name is "<<name<<endl;
}

int main(){
    student first,second;
    first.set();
    second.set();
    first.print();
    second.print();
    return 0;
}