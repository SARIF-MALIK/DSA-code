#include<stdio.h>
#include<stdlib.h>

int main (){

    int *ptr;
    int n;
    printf("Enter the no. of integers you want to store\n");
    scanf("%d",&n); 
    ptr = (int *) calloc(n,sizeof(int));

    for(int i=0;i<n;i++){
        printf("Enter the value of %d element:\n",i+1);
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<n;i++){
        printf("Entered value of %d element is %d\n",i+1,ptr[i]);
    }
    return 0;
}
