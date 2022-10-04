#include<stdio.h>

int main () {
    FILE *ptr;
    int num,num2;

    //ptr = fopen ("sample.txt","w");
    ptr = fopen ("sample.txt","r");
    if (ptr==NULL){
        printf("The file does not exists\n");
    }
    else {

        fscanf(ptr,"%d",&num);
        fscanf(ptr,"%d",&num2);

        fclose (ptr);
        printf("The value of num is %d\n",num);
        printf("The value of num is %d\n",num2);
        }
    return 0;
}