#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}; struct node*head;

void insert_beg(){
    printf("insert:\n");
    int info;
    struct node*temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to store: ");
    scanf("%d",&info);

    temp->data = info;
    temp->next =head;
    head = temp;
}

void delete(){
    struct node* temp,position;
    int i=1,pos;
    printf("delete:\n");
    if(head==NULL){
        printf("list is empty");
    }
    else {
        position = (struct node*)malloc(sizeof(struct node));
        temp = head;
        printf("Enter the position to delete");
        scanf("%d",&pos);
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        position = temp->next;
        temp->next = position->next;

        free(position);
    }
    
}

void traverse(){
    printf("traverse:\n");
    if(head==NULL){
        printf("list is empty");
    }
    else {
        while(head!=NULL){
            printf("%d",head->data);
            head=head->next;
        }
    }
}

void reverse(){
    printf("reverse:\n");
}

int main (){

    int choice;
    do{
        printf("\n\tx............x.........x..........x\n");
        printf("\n\t1.Create node at the begining");
        printf("\n\t2.Traverse");
        printf("\n\t3.Delete node");
        printf("\n\t4.Reverse");
        printf("\n\t5.EXIT\n");

        printf("Enter the choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            insert_beg();
            break;

            case 2:
            traverse();
            break;
            case 3:
            delete();
            break;
            case 4:
            reverse();
            break;
            case 5:
            printf("EXIT");
            break;

            default:
            printf("Wrong choice hehe!");
            break;
        }

    }while(choice!=5);
}