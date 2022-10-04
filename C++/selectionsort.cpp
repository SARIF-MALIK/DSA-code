#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    int i,min,temp,j;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                min = j;
            }
        }

        //swap 
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    cout<<"\nafter selection sort\n";
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

    selectionsort(arr,n);
    
    return 0;
}