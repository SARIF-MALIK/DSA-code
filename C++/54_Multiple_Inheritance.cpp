#include<iostream>
using namespace std;

class Base{
    protected:
        int base1int;
    public:
        void set_base1int(int x){
            base1int = x;
        }
};
class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }
};

class derived : public Base, public Base2{
    public: 
        void show(){
            cout<<" The value of Base1 is "<< base1int<<endl;
            cout<<" The value of Base2 is "<< base2int<<endl;
            cout<<" The value of Base1+Base2 is "<< base1int+base2int<<endl;
        }
};


int main(){
    derived sam;
    sam.set_base1int(23);
    sam.set_base2int(65);
    sam.show();
    return 0;
}