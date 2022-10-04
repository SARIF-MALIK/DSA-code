#include<iostream>
using namespace std;

class complex;

class calculator{ 
    public: 
        int add(int a, int b){ 
            return (a+b);
        }
        int sumRealComplex(complex,complex);
        int sumcompComplex(complex,complex);
};

class complex{
    int a, b;
    public:
        void setNumber(int n1,int n2){
            a  = n1;
            b = n2;
        }

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
        // friend int calculator :: sumRealComplex(complex o1,complex o2);
        // friend int calculator :: sumcompComplex(complex o1,complex o2);
        friend calculator;
};

int calculator :: sumRealComplex(complex o1,complex o2){
    return (o1.a + o2.a);
    }
int calculator :: sumcompComplex(complex o1,complex o2){
    return (o1.b + o2.b);
    }


int main(){
    complex o1,o2;
    o1.setNumber(4,5);
    o2.setNumber(8,9);
    o1.printNumber();
    o2.printNumber();
    
    calculator d;
    int res = d.sumRealComplex(o1,o2);
    cout<<res<<endl;
    int resc = d.sumcompComplex(o1,o2);
    cout<<resc<<endl;
    return 0;
} 