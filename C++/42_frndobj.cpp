#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
        void setvalue(int value){
            data = value;
        }
    friend void add(X,Y);
};

class Y{
    int val;
    public:
        void setvalue(int value){
            val = value;
        }
    friend void add(X,Y);
};

 void add(X o1, Y o2){
     cout<<"Summing data of X and Y class object "<<o1.data + o2.val;
 }

int main(){

    X a1;
    a1.setvalue(3);

    Y b1;
    b1.setvalue(5);

    add(a1,b1);
    
    return 0;
}