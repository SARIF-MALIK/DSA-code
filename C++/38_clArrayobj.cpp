#include<iostream>
using namespace std;

class Employee{
    int id;
    string name;
    public:
        void setId(){
            cout<<"Enter the id ";
            cin>>id;
            cout<<"Enter the name of employee\n";
            cin>>name;
        }
        void getId(){
            cout<<"ID of employee is "<<id<<endl;
            cout<<name<<endl;
        }
}; 

int main(){
   Employee teamA[10];
   for (int i = 0; i < 10; i++)
   {
        teamA[i].setId();
        teamA[i].getId();
   }
   
   
 
    return 0;
}