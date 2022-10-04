//Circular linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}; struct node*head;

void createnode_beg(){
    int info;
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data to store: ");
    scanf("%d",&info);
    temp->data = info;
    temp->next = head;
    head = temp;
    
}

void insert_at_position(){
    int pos,i=1,info;
    if(head==NULL){
        printf("List is empty");
    }
    printf("\nEnter the position & info to add: ");
    scanf("%d %d",&pos,&info);

    struct node* temp,*newnode;
    temp = head;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data = info;
    newnode->next = NULL;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;

    if(newnode->next ==NULL){
        newnode->next = head;
    }

}

void traverse(){
    printf("traversed:\n");
    struct node* temp;
    temp = head;
    if(temp ==NULL){
        printf("list is empty");
    }
    printf("\n");
   do{
        printf("%d",temp->data);
        temp = temp->next;
   }while(temp!=head);
    
}

void delete(){
    struct node*temp,*position;
    int pos,i=1;
    if(head==NULL){
        printf("list is empty");
    }
    else{
    
    printf("Enter the position to delete: ");
    scanf("%d",&pos);
    //position = malloc(sizeof(struct node));
    temp = head;

    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    position = temp->next;
    temp->next = position->next;

    free(position);

    }
}


int main(){

int choice;
    do{
        printf("\n\tx........x........x.......x........x");
        printf("\n\t1.create first node");
        printf("\n\t2. Insert node at any position");
        printf("\n\t3.Traverse the node");
        printf("\n\t4.Delete the node");
        printf("\n\t5.Exit\n");

        printf("Enter the choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            createnode_beg();
            break;
            case 2:
            insert_at_position();
            break;
            case 3:
            traverse();
            break;
            case 4:
            delete();
            break;
            case 5:
            printf("Exit");
            break;
            default:
            printf("wrong choice hehe!");
            break;
        }


    }while(choice !=5);
}
