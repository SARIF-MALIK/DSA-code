// Use of loops
#include<iostream>

using namespace std;
int main()
{
    short index =0;
    while(index<34)
    {
        cout<<"Index is "<<index<<endl;
        index++;
    }
    index = 0;
    cout<<endl;
    do
    {
        cout<<"Index is"<<index<<endl;
        index++;
    } while (index<34);
    
    index = 0;
    cout<<endl;
    
    for (int i = 0; i < 34; i++)
    {
        cout<<"Index is"<<index<<endl;
        index++;
    }
    

    return 0;
}