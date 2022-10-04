#include<stdio.h>
#include<stdlib.h>

// Taking input from the user
void scan(int **array, int row, int colm)
{
    for (int i =0; i<row; i++)
    {
        for(int j=0; j<colm; j++)
        {
            printf("Enter the element at index %d %d: ",i,j);
            scanf("%d", (*(array +i)+j));
        }
    }
}

//Calculating the average
void average(int **array, int row, int colm)
{
    double sum = 0;
    double avg;
     for (int i =0; i<row; i++)
    {
        for(int j=0; j<colm; j++)
        {
            printf("%d\t", *(*(array+i)+j));
            sum += *(*(array+i)+j);
        }
        avg = sum / colm;
        printf("%.2f", avg);
        printf("\n");
        sum = 0;
    }
     for (int j =0; j<colm; j++)
    {
        for(int i=0; i<row; i++)
        {
            sum += *(*(array+i)+j);
        }
        avg = sum / row;
        printf("%.2f\t", avg);
        sum = 0;
}
}


int main ()
{
    int row,colm;
    printf("Enter the size of matrix MXN\n");
    scanf("%d %d", &row, &colm);
    int **array = (int **)malloc(row* sizeof(int*));
    for(int s=0; s<row; s++)
    {
        array[s] = (int *)malloc(row* sizeof(int *));
    }
    scan(array,row,colm);
    
    printf("\n");
    printf("Entered Matrix is: \n");
    
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Matrix with average values\n");
    average(array, row, colm);
}