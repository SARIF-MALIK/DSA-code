#include<iostream>
#include<cmath>
using namespace std;

class point{
    int a,b;
    public:
        point(int ,int );

        void print(){
            cout<<"("<<a<<","<<b<<")"<<endl;
        }
    friend void distance (point,point);
};

point :: point(int x,int y){
    a = x;
    b = y;
    print();
}


void distance (point p,point q){
        float w= pow((q.a-p.a),2);
        float x = pow((q.b-p.b),2);

        float result = sqrt(w+x);

    cout<<"distance between points "<<result<<endl;
    
}

int main(){

    point a(5,3);
    point b(7,3);
    distance (a,b);

    return 0;
}