#include<iostream>
using namespace std;

int main()
{
    int array[6];

    for (int i = 0; i < 6; i++)
    {
        cout<<"Enter the value of " <<i+1<<"th element ";
        cin>>array[i];
    }
    
    
    for (int i = 0; i < 6; i++)
    {
        cout<<"value at " <<i+1<<"th element is "<<array[i]<<endl;
        
    }
}