//reverse the array 

#include<stdio.h>

void reverse (int *arr,int n) { 
    int temp;
    for (int i=0;i<(n/2);i++){
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;

    } 


}

int main () {
    int arr[] = {1,34,54,6,2,5,6,234,56};
    
    reverse (arr,9);
    for (int i=0;i<7;i++){
        printf("the array is %d\n",arr[i]);
    }


    return 0 ;

}