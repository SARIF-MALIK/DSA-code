#include<iostream>
#include<cmath>
using namespace std;

class calculator{
    protected: 
        float a,b;
    public:
        set1(float x, float y){
            a = x;
            b = y;
        }
        
        basic_cal(){
            cout<<a+b<<endl;
            cout<<a*b<<endl;
            cout<<a-b<<endl;
            cout<<a/b<<endl;
        }
        
};

class scicalx{
    protected:
        int a, b;
    public:
        set2(float x, float y){
            a = x; 
            b = y;
        }

        scical(){
            cout<<sin(a)<<" "<<sin(b)<<endl;
            cout<<cos(a)<<" "<<cos(b)<<endl;
            cout<<tan(a)<<" "<<tan(b)<<endl;
            cout<<log(a)<<" "<<log(b)<<endl;
        }
};

class hybrid : public calculator, public scicalx{
    public:
        void show(){
            basic_cal();
            scical();
        }

};




int main(){
    // calculator x1;
    // x1.set1(10,5);
    // x1.basic_cal();    

    // scicalx x2;
    // x2.set2(90,90);
    // x2.scical();

    hybrid x3;
    x3.set1(10,5);
    x3.set2(90,90);
    x3.show();

    return 0;
}