#include<iostream>
using namespace std;

int main(){
    
    for (int i = 0; i < 20; i++)
    {
        if(i==2)
        {
            // break;
            continue;
        }
        cout<<i<<endl;
    }
    

    return 0;
}