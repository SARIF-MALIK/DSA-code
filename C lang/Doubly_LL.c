//Doubly link list

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*prev;
    struct node*next;
}; struct node*head = NULL;

void createnode_beg(){
    int info;
    printf("Enter the data for list: ");
    scanf("%d",&info);
    struct node*temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = info;
    temp->next = head;
    temp->prev = NULL;
    head= temp;

}

void traverse(){
    printf("traverse ");
    struct node* temp;
    temp = head;
    if(temp==NULL){
    printf("list is empty");
    return;
    }
    else {
        while(temp!=NULL){
            printf("%d",temp->data);
            temp = temp->next;
        }
    }
}

void insert(){
    int pos,info,i=1;
    struct node*temp,*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the position to insert and data: ");
    scanf("%d %d",&pos,&info);
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->data = info;
    if(head == NULL){
        head=newnode;
    }

    else if(pos==1){
        insert();
    }
    
    else {
    temp = head;
    while(i< pos-1){
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    temp->next = newnode;
    newnode->prev = temp;
    //newnode->next->prev = newnode;
    temp->next->prev = newnode;
}
}

void delete(){
    int i=1,pos;
    if(head==NULL){
        printf("list is empty");
    }
    struct node* temp,*position;
    temp = head;
    position = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the position to delete: ");
    scanf("%d",&pos);
    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    position = temp->next;
    temp->next = position->next;
    free(position);
    temp->next->prev=temp; 
}

int main (){
    
    // createnode_beg();
    // createnode_beg();
    // createnode_beg();
    // createnode_beg();
    // traverse();
    // insert();
    // traverse();
    // delete();
    // traverse();

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
            insert();
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