#include<iostream>
using namespace std;

class values{
    int a;
    int b;

    public: 

        values(float x, float y){
            a = x;
            b = y;
        }

        values (const values &x){
            cout<<"Copy const called"<<endl<<endl;
            a = x.a;
            b = x.b;
        }

        void print(){
            cout<<"first value: "<<a<<endl;
            cout<<"second value: "<<b<<endl;
        }

        ~values(){
            cout<<endl<<"Destructor called"<<endl;
        }
};



int main(){
    
    values a3(3, 2);
    values a5(a3);

    a5.print();


    return 0;
}