#include<iostream>
#include<string>
using namespace std;

// Base class
class Employee{
    float salary;
    public:
        int id;
        Employee (int inpid){
            id = inpid;
            salary = 34.5;
        }

        void print(){
            cout<<"Employee id "<<id<<" and salary "<<salary<<endl;
        }
        Employee(){}
};

class programmer : Employee {
    public:
        programmer(int inpid)
        {
            id = inpid;
        }
        int languagecode = 9;
        string name;
        void dprint(){
            cout<<id<<" "<<name<<endl;
        }
};  


int main(){
    Employee o1(11893);
    o1.print();
    programmer o3(5);
    o3.name = "SARIF";
    o3.dprint();
   

    return 0;
}