#include<iostream>
using namespace std;

class Base1{

        int data1;
    public:
        Base1(int a){
            data1 = a;
            cout<<"Base1 const called"<<endl;
        }
        void print_data1(void){
            cout<<"Your data is "<<data1<<endl;
        }
};
class Base2{

        int data2;
    public:
        Base2(int b){
            data2 = b;
            cout<<"Base2 const called"<<endl;
        }
        void print_data2(void){
            cout<<"Your data is "<<data2<<endl;
        }
};
class Derived : public Base1, public Base2{

        int data3,data4;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){
            data3 = c;
            data4 = d;

            cout<<"derived const called"<<endl;
        }
        void print_data(void){
            cout<<"Your data is "<<data3<<", " <<data4<<endl;
        }
};



int main(){
    Derived sam(5,6,4,3);
    sam.print_data();
    return 0;
}
