// Queue Operation 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5

int q[max],front=-1,rear=-1;
void enqueue ();
void dequeue ();
void disp ();

int main()
{
    int ch;
    printf("\n1.Enqueue");
    printf("\n2.Dequeue");
    printf("\n3.Display");
    printf("\n4.Exit");
    
    while (1)
    {
        printf("\n Enter Choice:");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1:
        enqueue ();
        break;
        case 2:
        dequeue ();
        break;
        case 3:
        disp();
        break;
        case 4:
        exit(0);
        
        default:
        printf("Wrong Choice");
        
        }
    }
}

void enqueue()
{
    int data;
    if (rear==max-1)
    {printf("Overflow");}
    else
    {if(front==-1)
    {front =0;}
    printf("Enter Elements");
    scanf("%d",&data);
    rear++;
    q[rear]=data;
    }
}

void dequeue ()
{
    if(front==-1||front>rear)
    {printf("\nUnderflow");}
    else 
    {printf("\n Dequeue:%d",q[front]);}
    front++;
}

void disp()
{
    int i;
    if (front==-1)
    {printf("\nQueue is Empty");}
    else
    {printf("Elements:");
    for(i=front;i<=rear;i++)
    {printf("\n%d",q[i]);}
    
    } }