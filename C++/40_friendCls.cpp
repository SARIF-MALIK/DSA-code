#include<iostream>
using namespace std;

class Complex
{
private:
    int a, b; 
public:
    
    void setnum(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printnum(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

    friend Complex sumcoplex(Complex o1, Complex o2);
    
};

Complex sumcoplex(Complex o1, Complex o2){
    Complex o3;
    o3.setnum((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}

int main(){

    Complex c1,c2, sum;
    c1.setnum(1,4);
    c1.printnum();
    c2.setnum(5,8);
    c2.printnum();

    sum = sumcoplex(c1,c2);
    sum.printnum();

    return 0;
}