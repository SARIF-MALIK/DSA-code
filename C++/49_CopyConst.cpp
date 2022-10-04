#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number (int num){
            a = num;
        }
        // When there is no copy const found, compiler supplies its own copy const;
        Number (Number &obj){
            cout<<"copy const called"<<endl;
            a = obj.a;
        }

        void print(){
            cout<<a<<endl;
        }
        
};



int main(){

    Number O1,O2;
    Number O3(3);
    O1.print();
    O2.print();
    O3.print();
    Number O4(O3);  // copy const called
    O4.print();

    Number O6 = O3;  // Copy const called 
    O6.print();

    return 0;
}