#include<iostream>
using namespace std;

void insertionsort(int arr[],int n)
{
    for(int i= 1;i<n;i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= temp;
    }
    
    cout<<"\nArray printing after insertion sort\n";
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

    insertionsort(arr,n);    

    return 0;
}