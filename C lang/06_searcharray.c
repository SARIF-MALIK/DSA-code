#include<stdio.h>
int main (){
    int mat [40],i,n,data;
    printf("Enter the no. of elements in array\n");
    scanf("%d",&n);

    printf("Enter the elements of array\n");
    for (i=0;i<n;i++){
        printf("Enter the element at index %d: ", i);
        scanf("%d",&mat[i]);}

    printf("Enter the value to search\n");
    scanf("%d",&data);

    for (i=0;i<n;i++)
    {if (mat[i]==data)
    {printf("Element found at index %d\n", i);
    break;}}
    
    
    if (i==n)
    {printf("Element not found");}
    return 0;
    }

    
