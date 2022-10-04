#include<stdio.h>
#include<stdlib.h>



struct node{
    int data; 
    struct node *next;
    struct node *prev;
};
struct node*head =NULL;

int main (){

    int val,val2,val3;
    struct node *p1,*p2,*p3;
    p1 = (struct node*)malloc(sizeof(struct node));
    p2 = (struct node*)malloc(sizeof(struct node));
    p3 = (struct node*)malloc(sizeof(struct node));


    printf("Enter the value for node 1: ");
    scanf("%d",&val);

    p1->data = val;
    p1->next = p2;
    p1->prev = head;
    head = p1;
   
    printf("Enter the value for node 2: ");
    scanf("%d",&val2);

    p2->data = val2;
    p2->next = p3;
    p2->prev = p1;
    
    
    printf("Enter the value for node 3: ");
    scanf("%d",&val);

    p3->data = val;
    p3->next = NULL;
    p3->prev = p2;
    

    traverse(p1);


    return 0;
}
    

void traverse_forward(struct node*p1)
{
    struct node* p1;
 
    // List is empty
    if (head == NULL)
        printf("\nList is empty\n");
 
    // Else print the LL
    else {
        p1 = head;
        printf("Entered list is\n");
        while (p1 != NULL) {
            printf("Data = %d\n",p1->data);
            p1 = p1->next;
        }
    }
}