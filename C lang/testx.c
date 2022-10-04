#include<stdio.h>

int main (){

    int array[50],n;

    printf("Enter the size of array\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&array[i]);
    } 
    printf("\n<<<<<<<<<<<<<<<<<<<<PRINTING THE ELEMENTS>>>>>>>>>>>>>>>>>\n\n");
    for(int i=0;i<n;i++){
        printf("element of %d position is %d\n",i+1,array[i]);
    } 

    printf("\n<<<<<<<<<<<<<<<<<<<<INSERTION ELEMENTS>>>>>>>>>>>>>>>>>\n\n");
    
    // Insertion
    int pos,val; 
    printf("Enter the position & value to insert element in array: ");
    scanf("%d %d",&pos,&val);

    for(int i=n;i>=pos;i--){
        array[i] = array[i-1];
    }
    array[pos-1] = val;
    n++;

    for(int i=0;i<n;i++){
        printf("element of %d position is %d\n",i+1,array[i]);
    } 

    return 0;
}