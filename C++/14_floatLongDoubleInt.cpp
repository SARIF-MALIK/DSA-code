#include<iostream>
using namespace std;

int main() 
{
    float d = 34.4;
    long double e = 34.4L;
    cout<<"The value of d is " <<d<<endl<<"The value of e is "<<e;
    
    cout<<"\nThe size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4L)<<endl;

    return 0;
}