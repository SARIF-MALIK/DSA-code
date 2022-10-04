#include <iostream>
using namespace std;


// Base class
class Employee{
    int id;
    public:
        string name;
        Employee(int d, string s){
            id = d;
            name = s;
        }

        void getdata(){
            cout<<"Emp id: "<<id<<endl;
            cout<<"Emp name: "<<name<<endl;
        }
};


class deptt : public Employee{
    
    int deptt_id;
    int id;
    public:
        
        deptt(int d, string s, int dep): Employee(d, s){
            deptt_id = dep;
        }
        
        void get(){
            getdata();
            cout<<"Deptt id is: "<<deptt_id;
        }
    
};



int main(){
    Employee s1(11893, "SAM");
    deptt s2(11895, "aman", 102);
    s2.get();

    return 0;
}
