#include <stdio.h>
#include <stdlib.h>

void inializing(int **arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value at [%d][%d] => ", i, j);
            scanf("%d", (*(arr + i) + j));
        }
    }
}
void findAverage(int **arr, int m, int n)
{
    double sum = 0;
    double avg;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", ((arr + i) + j));
            sum += ((arr + i) + j);
        }
        avg = sum / n;
        printf("%.2f", avg);
        printf("\n");
        sum = 0;
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            sum += ((arr + i) + j);
        }
        avg = sum / m;
        printf("%.2f\t", avg);
        sum = 0;
    }
}

int main()
{
    int m, n;
    printf("Enter the row size and Coloumn Size: ");
    scanf("%d %d", &m, &n);
    int *arr = (int *)malloc(m * sizeof(int *));
    for (int r = 0; r < m; r++)
    {
        arr[r] = (int *)malloc(m * sizeof(int *));
    }
    inializing(arr, m, n);

    printf("Matrix\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("showing averages\n");
    findAverage(arr, m, n);
}