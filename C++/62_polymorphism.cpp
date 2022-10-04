#include <iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying base class variable "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Derived class variable and baseclass var "<<var_derived<<" "<<var_base<<endl;

        }
};


int main(){

    BaseClass *ptrbaseClass;
    DerivedClass objderived;
    BaseClass objbase;

    ptrbaseClass = &objderived;
    ptrbaseClass -> var_base = 30;

    ptrbaseClass ->display();
    //ptrbaseClass->var_derived = 50; 
    // baseclass will not work with derived class even
    // giving its address it is still acessing the base class ;

    DerivedClass *ptrderivedClass = &objderived;
    ptrderivedClass->var_derived = 60;
    ptrderivedClass->display();

}