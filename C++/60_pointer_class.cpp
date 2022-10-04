#include<iostream>
using namespace std;


int main(){
    int a = 4;
    int *ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // New Keyword;

    //int *p = new int(40);
    float *p = new float(56.34);
    cout<<"The value at address p is "<<*(p)<<endl;
    

    //Dynamic array:
    int *arr = new int[3];
    arr[0] = 00;
    arr[1] = 10;
    arr[2] = 20;
    arr[3] = 30;
    arr[4] = 40;

    delete[] arr;
    cout<< "The value  of arr [0] is "<<arr[0]<<endl;
    cout<< "The value  of arr [1] is "<<arr[1]<<endl;
    cout<< "The value  of arr [2] is "<<arr[2]<<endl;
    cout<< "The value  of arr [3] is "<<arr[3]<<endl;
    cout<< "The value  of arr [4] is "<<arr[4]<<endl;

    // Delete operator



    return 0;
}
