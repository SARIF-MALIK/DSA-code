#include<stdio.h>

int main (){
    
    int num;
    printf("Enter the number to get the table: ");
    scanf("%d",&num);

    FILE *ptr;
    ptr = fopen("table.txt","w");
    for(int i=0;i<10;i++){
        fprintf(ptr,"%d X %d = %d\n",num,i+1,num*(i+1));
    }
    fclose(ptr);
    printf("Successfully generated table of %d to table.txt", num);
    return 0;
}