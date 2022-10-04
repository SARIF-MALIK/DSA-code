#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};



void traverse(struct node* h){
    while (h != NULL) {
		printf(" %d ", h->data);
		h = h->next;
	}
}

int main (){ 

    //struct node* second,*third,*fourth;
    struct node *head;
    struct node* second;
    struct node* third;
    struct node* fourth;

    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    
    head ->data  = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 20;
    third->next = fourth;

    fourth->data = 30;
    fourth->next = NULL;


    traverse(head);
    return 0;
}