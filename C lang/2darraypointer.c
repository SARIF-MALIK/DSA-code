#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main (){

int array [50][50];
int row,colm;
printf("Enter the size of matrix M X N\n");
scanf("%d %d",&row,&colm);

printf("Enter the elements of matrix\n");
for(int i=0;i<row;i++) {
    for(int j=0;j<colm;j++){
        scanf("%d",&array[i][j]);
    }
}

int *p;
p = &array[0][0];

//Printing the array 

// printf("Elements of matrix are \n");
// for(int i=0;i<row;i++) {
//     for(int j=0;j<colm;j++){
//         printf("%d\t",*(p+((i*colm+j)*4)));
//     }
// }
for(int i=0;i<row;i++) {
    for(int j=0;j<colm;j++){
printf("%d\t",*((p+i)+j));}}

} 