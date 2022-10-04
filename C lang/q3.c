//Sum of the Elements of Linear Arrays
//CODE
#include <stdio.h>

int main()
{
    
int n,array[n],i,sum=0;
    
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the Elements of array\n");
    
// Input Array elements 
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);}
// Sum of elements of Array
    for(i=0;i<n;i++){
        sum += array[i];}

    printf("sum is %d",sum);
    return 0;
}
