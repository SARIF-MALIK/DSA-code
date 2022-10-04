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

int main (){

//     //constructing the root node
//     struct node *p;
//     p = (struct node*)malloc(sizeof(struct node));
//     p->data = 5;
//     p->left = NULL;
//     p->right = NULL;


//     // contructing the node 1
//    struct node *p1;
//     p1 = (struct node*)malloc(sizeof(struct node));
//     p1->data = 10;
//     p1->left = NULL;
//     p1->right = NULL;

//     //contructing the node 2
//     struct node *p2; 
//     p2 = (struct node*)malloc(sizeof(struct node));
//     p2->data = 15;
//     p2->left = NULL;
//     p2->right = NULL;

//     // linking the left and right children
//     p->left = p1;
//     p->right = p2;

 //constructing the root node USING FUCTION
      struct node *p = createnode (5);
      struct node *p1 = createnode (10);
      struct node *p2 = createnode (15);
   
   
 // linking the left and right children
    p->left = p1;
    p->right = p2;


    return 0;
}