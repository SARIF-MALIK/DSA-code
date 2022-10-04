#include<iostream>
using namespace std;

class largest {
    int a;
    int b;
    
    public:
    
    void input(){
        cout<<"Enter the first Number"<<endl;
        cin>>a;
        cout<<"Enter the second Number"<<endl;
        cin>>b;
    }

    void large() {
        if(a>b)
            cout<<a<<endl;
        else if(a==b)
            cout<<"both are same. No is "<<a<<endl;
        else 
            cout<<b<<endl; 
    }

    
};


int main(){

    largest num;
    num.input();
    num.large();
    return 0;
}