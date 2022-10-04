#include<stdio.h>
#include<malloc.h>

    struct node {
    int data;
    struct node* left;
    struct node* right;
    };

    struct node* createnode(int data){
    struct node *n;       //creating a node pointer
    n = (struct node*)malloc(sizeof(struct node));  //allocating memory in the heap 
    n->data = data;  //setting the data
    n->left = NULL;  
    n->right = NULL;
    return n;  // finally returning the created node
}

    void preorder (struct node*root){
    if (root !=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
    }
     
int main (){

    //constructing the root node USING FUCTION
    struct node *p = createnode (4);
    struct node *p1 = createnode (1);
    struct node *p2 = createnode (6);
    struct node *p3 = createnode (5);
    struct node *p4 = createnode (2);
   
   
    // linking the left and right children
    p->left = p1; 
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preorder(p);
    return 0;
}