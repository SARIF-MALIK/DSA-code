#include<stdio.h>
#include<stdlib.h>

void selection(int arr[],int n)
{
    int i, j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        { 
            if(arr[j] < arr[min])
            {
                min = j;
            }

           
        }
         // swap 
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
    }
    printf("\nAfter selection sort\n"); 
    for(int i=0;i<n;i++)
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

    for(int i=0;i<n;i++)
    {
        printf("Enter the value at pos %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }


    selection(arr,n);

}