#include<iostream>
using namespace std;

int main(){
    
    int marks[3],n=3;
    
    for (int i = 0; i < n; i++)
    {
    cout<<"Enter the value at "<<i+1<<": ";
    cin>>marks[i];
    }
    
    for (int i = 0; i < n; i++)
    {
    cout<<"The value at "<<i+1<<" is: "<<marks[i]<<endl;
    
    }
    
    // Array using pointers
    int *p;
    p = marks;

    // cout<<p<<endl;
    // cout<<*p<<endl;
    int i = 0;
    while(i<n)
    {
        cout<<*p<<endl;
        (p++);
        i++;
    }

    return 0;
}   