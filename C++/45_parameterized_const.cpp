#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        Complex(int,int);
        void print(){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex :: Complex(int x, int y){
    a = x;
    b = y;
    print();
}


int main(){
    
    Complex a(4,7);

    Complex b = Complex (7,3);


    return 0;
}