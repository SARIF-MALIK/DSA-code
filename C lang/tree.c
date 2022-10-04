#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node *left;
struct node *right;
};

    struct node *createNode(int data)
    {
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
    }
    void preoder(struct node *root)
    {
    if (root != NULL)
    {
    printf("%d ", root->data);
    preoder(root->left);
    preoder(root->right);
    }
    }
    void postOrder(struct node *root)
    {
    if (root == NULL)
    return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
    }
    void inOrder(struct node *root)
    {
    if (root == NULL)
    return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
    }
int main()
{
// Parent Node
struct node *p;
p = (struct node *)malloc(sizeof(struct node));
p->data = 4;
p->left = NULL;
p->right = NULL;
    struct node *p1 = createNode(5);
    struct node *p2 = createNode(8);
    struct node *p3 = createNode(2);
    struct node *p4 = createNode(10);
        p->left = p1;
        p->right = p2;
        p1->left = p3;
        p1->right = p4;
    printf("PreOrder\n");
    preoder(p);
    printf("\n");
    printf("PostOrder \n");
    postOrder(p);
    printf("\n");
    printf("InOrder \n");
    inOrder(p);
    printf("\n");
return 0;
}
