#include<stdio.h>

void insertionsort(int arr[],int n)
{
    for(int i = 1;i<n;i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("\nAfter insertionsort\n");
     for(int i = 0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
}

int main (){
 int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        printf("enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }

    insertionsort(arr,n);    
}