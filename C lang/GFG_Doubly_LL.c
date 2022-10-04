//Doubly link list

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*prev;
    struct node*next;
}; struct node*head = NULL;

void createnode_beg(){
   {
    int info;
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter number to be inserted: ");
    scanf("%d", &info);
    temp->data = info;
    temp->prev = NULL;

    temp->next = head;
    head = temp;
}

}

void traverse(){
    // List is empty
    if (head == NULL) {
        printf("\nList is empty\n");
        return;
    }
    // Else print the Data
    struct node* temp;
    temp = head;
    while (temp != NULL) {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    }
}

void insert(){
    int info, pos, i = 1;
    struct node *temp, *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->prev = NULL;

    printf("\nEnter position : ");
    scanf("%d", &pos);
     

    if (head == NULL) {
        head = newnode;
        newnode->prev = NULL;
        newnode->next = NULL;
    }
 

    else if (pos == 1) {

      createnode_beg();
    }
 
    else {
      printf("\nEnter number to be inserted: ");
    scanf("%d", &info);
    newnode->data = info;
    temp = head;
        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        temp->next->prev = newnode;
    }
}

void delete(){
     
}

int main (){
    
    createnode_beg();
    createnode_beg();
    createnode_beg();
    createnode_beg();
    traverse();
    insert();
    traverse();
    delete();
    //reverse();
}