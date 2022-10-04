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

}

void traverse(struct node*head){
    printf("\n");
    if(head ==NULL){
        printf("list is empty");
    }
    printf("\n");
    while(head!=NULL){
        printf("%d",head->data);
        head = head->next;
    }
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
    position = malloc(sizeof(struct node));
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

   void reverse (){
        printf("\n");
    struct node*prevnode,*currentnode,*nextnode;
    prevnode = NULL;
    currentnode = head;
    nextnode= head;
    while(nextnode!=NULL){
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode = nextnode;
    
    }
    printf("reverse list is :");
    head = prevnode;

}

int main(){

// head = (struct node*)malloc(sizeof(struct node));
// first = (struct node*)malloc(sizeof(struct node));
// second = (struct node*)malloc(sizeof(struct node));

// head->data = 5;
// head->next = first;

// first->data =6;
// first->next = second;

// second->data = 7;
// second->next = NULL;

createnode_beg();
createnode_beg();
createnode_beg();

traverse(head);

reverse();

traverse(head);

insert_at_position();
traverse(head);

}