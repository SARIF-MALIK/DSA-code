//Queue using linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
}; struct node*front=NULL;
struct node*rear=NULL;

void enqueue(){
    
    int info;
    struct node*temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data to store: ");
    scanf("%d",&info);
    temp->data = info;
    if(rear == NULL){
        temp->next = NULL;
        rear = temp;
        front = temp;
    }
    else {
        rear->next = temp;
        rear = temp;
        temp->next = NULL;
    }
}

void dequeue(){
    if(rear == NULL || front == rear->next){
        printf("\nList is empty");
    }

    else {
        printf("\n Dequeued DATA:  %d",front->data);
        front = front->next;
    }

}

void display(){
    struct node* temp;
    temp = front;
    while(temp != NULL){
        printf("\n DATA : %d",temp->data);
        temp = temp->next;
    }   
}


int main(){
    
    int choice;
    do {
        printf("\n\tx.......x...........x........x");
        printf("\n\t1.Enqueue");
        printf("\n\t2.Dequeue");
        printf("\n\t3.Display");
        printf("\n\t4.Exit");

        printf("\nEnter the choice: ");
        scanf("%d",&choice);
    
        switch(choice){
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("EXIT");
            break;
            
            default:
            printf("wrong choice buddy");
            break;
        }
    }while(choice!=4);

}