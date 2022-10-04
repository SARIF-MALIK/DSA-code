
#include <iostream>
#include <climits>
using namespace std;


void selectionsort(int arr[], int start, int end){
    
    if(start >=end)
    return;
    
    for(int i=start;i<end-1;i++){
        int min = arr[i];
        for(int j=i+1;j<end;j++){
          
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }  
        }
        
    }
    
    return;

}

void bubblesort(int arr[], int start, int end){
    
    for(int i = start; i<end-1; i++){
        for(int j = start; j<end-1-i;j++){
            if(arr[j] >arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return;
}

void insertionsort(int arr[],int start, int end){
    
    // for(int i=1;i<end;i++){
    //     for(int j=0;j<i;j++){
    //         if(arr[i]<arr[j]){
    //             int temp = arr[i];
    //             for(int k=i;k>=j;k--){
    //                 arr[k] = arr[k-1];
    //             }
    //             arr[j] = temp;
    //         }
    //     }
    // }
    
    for(int i = 1;i<end;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}


int main()
{
    int arr[] = {12,45,23,51,19,8,16};
    
    insertionsort(arr,0,7);
    for (int i=0;i<7;i++)
    cout<<arr[i]<<" ";
    return 0;
}
