//Sum of the linear array elements

#include<stdio.h>

int main (){
    int n,array[n];
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array: ");
    
    for(int i=0;i<n;i++){
        printf("enter the element at %d: ",i+1);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",array[i]);
    }

}