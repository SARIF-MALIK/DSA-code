#include<iostream>
using namespace std;


void merge(int input[], int st, int end){
    int *arr = new int[1000];
    int mid = (st+end)/2;

    int i=st;
    int j= mid+1;
    int k = 0;
    while(i<=mid && j<=end){
        if(input[i] <input[j])
        {
            arr[k] = input[i];
            i++;
            k++;
        }
        else{
            arr[k] = input[j];
            j++;
            k++;
        }
    }

    while(i<=mid)
    {
        arr[k] = input[i];
        i++;
        k++;
    }
    while(j<=end)
    {
        arr[k] = input[j];
        j++;
        k++;
    }
    k=0;
    for(int i=st; i<=end; i++)
    {
        input[i] = arr[k];
        k++;
    }
}


void mergeSorting(int input[], int st, int end){
    int mid = (st+end)/2;

    if(st>=end)
    return;

    mergeSorting(input,st,mid);
    mergeSorting(input,mid+1,end);
    merge(input,st,end);
    return;
}



void mergeSort(int input[], int size){
	mergeSorting(input,0,size-1);
    return;
}

int main(){
    int n;// = 8;
    cin>>n;
    int arr[] = {5,2,3,67,4,7,97,45};
    
    mergeSort(arr,n);
    for(int i = 0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}