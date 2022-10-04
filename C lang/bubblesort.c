#include<stdio.h>
#include<stdlib.h>

void bubblesort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
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
    printf("\nAfter bubblesort\n");
    for(int i= 0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
}

int main()
{   
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];

    for(int i= 0;i<n;i++)
    {
        printf("Enter the element at %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i= 0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    bubblesort(arr,n);

}