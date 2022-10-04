#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"using 2 variables\n";
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"using 3 variables\n";
    return a+b+c;
}

// Volume of a cylinder 
int vol(double r, int h){
    return (3.14*r*r*h);
}

// volume of cube 
int vol(int a){
    return (a*a*a);
}

// volume of a rectangular box
int vol(int l, int b, int h){
    return (l*b*h);
}

int main(){
    int a = 5, b = 6, c = 8;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b,c)<<endl;


    cout<<"The volume of cylinder "<<vol(a,c)<<endl;
    cout<<"The volume of cube "<<vol(a)<<endl;
    cout<<"The volume of rectangular box "<<vol(a,b,c)<<endl;

    return 0;
}