// Stack using linked list 

#include<stdio.h>
#include<stdlib.h>  

struct node{
    int data;
    struct node* next;
}; struct node* top=NULL;

    void push(){
    struct node* temp;
    int info;
    printf("Enter the data to store: ");
    scanf("%d",&info);
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = info;
    if(top ==NULL){
    temp->next = NULL;
    top = temp;
    }
    else{ 
    temp->next = top;
    top = temp;
    }
    printf("Successfully pushed\n");
    }

void display(){
    struct node*temp;
    temp = top;
    printf("\nStack contains:");
    while(temp!=NULL){
        printf("\nDATA : %d",temp->data);
        temp=temp->next;
    }
}

void pop(){
    struct node*temp;
    temp = top;
    if(top == NULL){
        printf("stack is empty");
    }
    else {
        printf("\nPOP DATA : %d",temp->data);
    top = temp->next;}
    
}


int main (){

push();
push();
push();

display();
pop();
display();
}
