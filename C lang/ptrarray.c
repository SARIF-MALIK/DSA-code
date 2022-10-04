#include<stdio.h>
void printarray(int *ptr, int n){
    for (int i=0;i<n;i++){
        printf("The value of element %d %d\n",i+1,*(ptr+i));
    
    }
}

int main (){
    int arr[] = {1,2,3,45,656,67,23};
    printarray(arr,7);
    return 0;
}

