#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        Complex(void);

};

Complex :: Complex (void){
    a = 10;
    b = 50;
    cout<<a<<"+"<<b<<endl;
    cout<<"Contructor called"<<endl;
}


int main(){
    Complex o1,o2,o3;
    return 0;
}