#include<iostream>
using namespace std;

class l2;

class l1{
    int num1;

    public: 
        void set () {
            cout<<"Enter the value"<<endl;
            cin>>num1;
        }

        void get(){
            cout<<"First value is : "<<num1<<endl;
        }
        friend void largest(l1, l2);
};

class l2{
    int num2;

    public: 
        void set () {
            cout<<"Enter the value"<<endl;
            cin>>num2;
        }

        void get(){
            cout<<"First value is : "<<num2<<endl;
        }
        friend void largest(l1, l2);
};

void largest(l1 x, l2 y){
    
    if(x.num1 > y.num2){
        cout<<"Greatest num is "<<x.num1<<endl;
    }
    else if(y.num2 > x.num1){
        cout<<"Greatest num is "<<y.num2<<endl;
    }
    else 
        cout<<"Both are equal "<<x.num1<<endl;
}

int main(){
    l1 s;
    l2 t;

    s.set();
    t.set();

    largest(s, t);
    return 0;
}