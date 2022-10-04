#include<stdio.h>


void printArray (int *ptr,int n){
    for (int i=0;i<n;i++){
        printf("The value of elements %d is %d\n",i+1,*(ptr+i));
    }
}
int main (){
    int arr[] = {1,3,5,45,564,34,78};
    printArray(arr,7); 
    return 0;
}