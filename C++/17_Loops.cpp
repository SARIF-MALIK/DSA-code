#include<iostream>

using namespace std;

int main()
{
    // for loop in cpp;

    int age=0;
    for(int i = 1; i<=10; i++)
    {
        cout<<i<<endl;
        age +=i;
    }
        cout<<age<<endl;
    
    int i =0;
    while(i<20)
    {
        cout<<i<<endl;
        i++;
    }
    i = 0;
    do
    {
        cout<<i<<endl;
        i++;
    }while(i<20);
    
}