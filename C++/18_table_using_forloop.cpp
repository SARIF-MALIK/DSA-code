#include<iostream>

using namespace std;

int main()
{
    int i = 0,num;
    cout<<"Enter the no. to write the table: ";
    cin>>num;

    for(i=1;i<11;i++){
        cout<<num<<" X "<<i<<" = " <<num*i<<endl;
    }
    i=1;
    do
    {
        cout<<num<<" X "<<i<<" = " <<num*i<<endl;
        i++;
    } while (i<11);
    i=1;
    while(i<11){
        cout<<num<<" X "<<i<<" = " <<num*i<<endl;
        i++;
    }
    
    
}

