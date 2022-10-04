#include<stdio.h>
int main (){
    int i,low,high,mid,n,data,mat[40];

    printf("Enter the no. of elements in array\n");
    scanf("%d",&n);

    printf("Enter the elements of array\n");
    for (i=0;i<n;i++){
        printf("Enter the element at index %d: ", i);
        scanf("%d",&mat[i]);}


    printf("Enter the value to search\n");
    scanf("%d",&data);

     low = 0;
     high = n-1;
     mid = (low+high)/2;

     while (low <=high){
         if (data==mat[mid]){
             printf("found at location %d",mid+1);
             break;}

        else if (data>mat[mid]){
            low = mid+1;}

        else 
        high = mid -1;
        mid = (low +high)/2;

        if (low>high)
        {printf("not found");}
        }
    return 0;} 