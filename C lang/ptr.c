#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

void insert ();
void delete ();
void display ();

int main ()
{
    int marks[40];
    int n,m;
    
    printf("1. Insert 2. Delete 3. Display 4. Exit\n");

    while (1)
    {
    printf("Enter the choice\n");
    scanf("%d",&n);
    
    switch (n)
      {
        case 1 :
        insert ();
        break;

        case 2 :
        delete ();
        break;

        case 3 :
        display ();
        break;

        case 4 :
        exit (0);

        default:
        printf("Wrong Choice");
      }
    }
}

    void insert (){
        int m;

        printf("Enter the no. of elements of array\n");
        scanf("%d",&m);
        printf("Enter the elements of array\n");
        for (int i=0;i<m;i++){
        printf("value at index %d: ",i);
        scanf("%d",&marks[i]);
        }
    }

    void delete (){
        int p, pos;

        printf("Enter the position of element to delete\n");
        scanf("%d",&pos);
        
        for (int q= pos-1; q<m;q++){
            marks[q] = marks[q+1];
        }
    }

    void display (){

        for (int i=0;i<m;i++){
            printf("%d",marks[i]);
        }
    }


  