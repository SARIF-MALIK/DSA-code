#include<iostream>
using namespace std;

bubblesort(int arr[],int n)
{
    int temp;
    for(int i = 0;i<n-1;i++)
    {
        for(int j= 0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    cout<<"\nAfter bubble sort\n";
    for(int i = 0;i<n;i++)
    {   
        cout<<arr[i]<<",";
    }
}


int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cout<<"enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }

    bubblesort(arr,n);    
    return 0;
}