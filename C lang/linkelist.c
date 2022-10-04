#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * preptr;
    struct node * nextptr;
}*next, *prev;
 

void Listcreation(int n);
void displayList();

int main()
{
    int n;
    next = NULL;
    prev = NULL;
	printf("\n\n Doubly Linked List \n");
	printf("------------------------\n");	   	

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
 
    Listcreation(n); 
    displayList();
    return 0;
}
 
void Listcreation(int n)
{
    int i, data;
    struct node *fnNode;
 
    if(n >= 1)
    {
        next = (struct node *)malloc(sizeof(struct node));
 
        if(next != NULL)
        {
            printf(" Input data for node 1 : "); // assigning data in the first node
            scanf("%d", &data);
 
            next->data = data;
            next->preptr = NULL;
            next->nextptr = NULL;
            prev = next;
// putting data for rest of the nodes
            for(i=2; i<=n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL)
                {
                    printf(" Input data for node %d : ", i);
                    scanf("%d", &data);
                    fnNode->data = data;
                    fnNode->preptr = prev;    // new node is linking with the previous node
                    fnNode->nextptr = NULL;
 
                    prev->nextptr = fnNode;   // previous node is linking with the new node
                    prev = fnNode;            // assign new node as last node
                }
                else
                {
                    printf(" Memory can not be allocated.");
                    break;
                }
            }
        }
        else
        {
            printf(" Memory can not be allocated.");
        }
    }
}
void displayList()
{
    struct node * tmp;
    int n = 1;
    if(next == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        tmp = next;
        printf("\n\n Data entered on the list are :\n");
 
        while(tmp != NULL)
        {
            printf(" node %d : %d\n", n, tmp->data);
            n++;
            tmp = tmp->nextptr; // current pointer moves to the next node
        }
    }
}