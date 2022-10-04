#include<iostream>
using namespace std;

class Bank{
    int a;
    public:
        Bank(){
            a = 0;
        }
        Bank (int num){
            a = num;
        }
        // When there is no copy const found, compiler supplies its own copy const;
        Bank (Bank &obj){
            cout<<"copy const called"<<endl;
            a = obj.a;
        }

        void print(){
            cout<<a<<endl;
        }

        ~Bank(){
            cout<<"Destructor is called"<<endl;
        }
        
};



int main(){

    Bank O1,O2;
    Bank O3(3);
    O1.print();
    O2.print();
    O3.print();
    Bank O4(O3);  // copy const called
    O4.print();

    Bank O6 = O3;  // Copy const called 
    O6.print();

    return 0;
}