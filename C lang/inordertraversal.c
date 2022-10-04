#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createnode(int data){
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n ->data = data;
    n ->left = NULL;
    n ->right = NULL;
    return n;
}

void inorder (struct node* root){
        if(root !=NULL){
            inorder(root->left);
            printf("%d",root->data);
            inorder(root->right);
        }
}

int main (){
    struct node *p = createnode(4);
    struct node *p1 = createnode(6);
    struct node *p2 = createnode(5);
    struct node *p3 = createnode(2);
    struct node *p4 = createnode(1);

    p ->left  = p1;
    p ->right = p2;
    p1 ->left = p3;
    p1-> right = p4;
    
    inorder(p);
    printf("\n");
    return 0;   
}