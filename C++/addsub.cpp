#include<iostream>
using namespace std;

int main(){
    int n,j=0,count=0;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n],arr[j]; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
        if(arr[i]<0)
        {
            count++;
        }
    }
    arr1[count];
    for(int i= 0;i<n;i++)
    {
        if(arr[i]<0)
        {
            arr[i] = arr1[j];
            j++;
        }
    }
    for(int i= 0;i<count;i++)
    {
        if(arr1[i]<0)
        {
            arr[i] = arr1[j];
            j++;
        }
    }



    return 0;
}