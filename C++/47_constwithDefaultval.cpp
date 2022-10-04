#include<iostream>
using namespace std;

class Simple{
    int a,b;
    public:
        Simple(int x, int y=9){
            a = x;
            b = y;
        }

        print (void){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};



int main(){

    Simple o2(3,4);
    Simple o4(3);
    o2.print();
    o4.print();


    
    return 0;
}