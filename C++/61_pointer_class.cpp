#include<iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
        set(int a, int b){
            real = a;
            imaginary =b;
        }
        void get(void){
            cout<<"The real, imaginary no. are "<<real<<" "<<imaginary<<endl;
        }
};

int main(){
    // Complex x;
    // Complex *ptr = &x;
    Complex *ptr = new Complex;
    // (*ptr).set(5,4);
    // (*ptr).get();
    ptr->set(5,4);
    ptr->get();

    // Array of object 
    Complex *ptr1 = new Complex[4];
    ptr1->set(10,45);
    ptr1->get();

    return 0;
}
