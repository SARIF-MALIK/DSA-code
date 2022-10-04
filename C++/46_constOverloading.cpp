#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        Complex(void){
            a = 0;
            b = 0;
        }
        Complex(int x, int y){
            a = x;
            b = y;
        }
        Complex(int x){
            a = x;
            b = 0;
        }
   

        print (void){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};



int main(){
    Complex o1;
    Complex o2(3,4);
    Complex o3(3);
    o1.print();
    o2.print();
    o3.print();


    
    return 0;
}