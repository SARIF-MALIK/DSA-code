#include<iostream>
using namespace std;

class base1{
    public: 
        void greet(){
            cout<<"How are you?" <<endl;
        }
};

class base2{
    public:
        void greet(){
            cout<<"Kaise ho?" <<endl;
        }
};

class derived : public base1, public base2{
    public:
        
        void greet(){
            base2 :: greet();
        }
        
};
int main(){
    derived x1;
    x1.greet();
    return 0;
}