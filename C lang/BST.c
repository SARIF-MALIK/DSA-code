#include<stdio.h>
#include<stdlib.h>

struct BSTnode 
{ 
    int data;
    struct BSTnode* left;
    struct BSTnode* right;
};
    int n,item,i;
    struct BSTnode*p,*q,*root;


void insert(){
    printf("Enter the no. of nodes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        p = (struct BSTnode*)malloc(sizeof(struct BSTnode));
        scanf("%d",&item);
        p->data = item;
        p->left = NULL;
        p->right = NULL;

        if(i==0)
            root = p;
        else
        {
            q = root;
            while(1)
            {
                if(p->data > q->data)
                {
                    if(q->right == NULL)
                    {
                        q->right = p;
                        break;
                    }
                    else 
                        {
                            q = q->right;
                        }
                }

                else 
                {
                    if(q->left == NULL)
                    {
                        q->left = p;
                        break;
                    }
                    else 
                    {
                        q = q->left;
                    }
                }
            }

        }

    }

}

    void inorder(struct BSTnode *r)
    {
    if (r == NULL)
    return;
    inorder(r->left);
    printf("%d ", r->data);
    inorder(r->right);
    }

    void preorder(struct BSTnode *r)
    {
    if (r != NULL)
    {
    printf("%d ", r->data);
    preorder(r->left);
    preorder(r->right);
    }
    }
    
    void postorder(struct BSTnode *r)
    {
    if (r == NULL)
    return;
    postorder(r->left);
    postorder(r->right);
    printf("%d ", r->data);
    }

 int main()
 {
    insert();

    printf("\nInorder: \n");
    inorder(root);
    
    printf("\nPost order: \n");
    postorder(root);
    
    printf("\nPre order: \n");
    preorder(root);
    printf("\n");
    return 0;

 }