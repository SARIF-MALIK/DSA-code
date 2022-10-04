#include<iostream>
using namespace std;

class Base1{

        int data1,data2;
    public:
        Base1(int a, int b): data1(a),data2(b){
            cout<<"Base1 const called"<<endl;
        }
        void print_data1(void){
            cout<<"Your data2 is "<<data1<<endl;
            cout<<"Your data1 is "<<data2<<endl;
        }
};



int main(){
    Base1 sam(5,6);
    sam.print_data1();
    return 0;
}
