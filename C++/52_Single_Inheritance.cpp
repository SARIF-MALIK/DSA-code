#include<iostream>0
using namespace std;

// Base class
class Employee{
    int data1;
    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};

void Employee :: setdata(){
    data1 = 10;
    data2 = 20; 
}
int Employee :: getdata1(){
    return data1;
}
int Employee :: getdata2(){
    return data2;
}

class derived : public Employee{
    int data3;
    public:
        void process();
        void display();
    
};

void derived :: process(){
    data3 = data2 *getdata1();
}

void derived :: display(){
    cout<<"data 1 is "<<getdata1()<<endl;
    cout<<"data 2 is "<<data2<<endl;
    cout<<"data 3 is "<<data3<<endl;
}


int main(){
    derived o1;
    o1.setdata();
    o1.process();
    o1.display();
    return 0;
}