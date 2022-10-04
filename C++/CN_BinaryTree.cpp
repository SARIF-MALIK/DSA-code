#include<iostream>
#include<queue>
using namespace std;

template <typename T>



class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode* right;
    BinaryTreeNode* left;
    BinaryTreeNode(T data){
        this->data = data;
        right = NULL;
        left = NULL;
    }
    ~BinaryTreeNode(){
        cout<<"Destructed ";
        delete left;
        delete right;
    }
};

void print(BinaryTreeNode<int>* root){
    if(root == NULL)
        return;
    
    cout<<root->data<<": ";
    
    if(root->left != NULL){
        cout<<" L->"<<root->left->data;
    }
    
    if(root->right != NULL){
        cout<<"R->"<<root->right->data;
    }

    cout<<endl;
        print(root->left);
        print(root->right);
    
    return;
}

BinaryTreeNode<int>* takeinput(){
    int data;
    cout<<"nodeData"<<endl;
    cin>>data;
    if(data == -1)
        return NULL;
    
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(data);

    cout<<data<<" leftchild"<<endl;    
    BinaryTreeNode<int>* leftchild = takeinput();
    cout<<data<<" rightchild"<<endl;    
    BinaryTreeNode<int>* rightchild = takeinput();
    root->left = leftchild;
    root->right = rightchild;

    return root;
}

BinaryTreeNode<int>* takeinputLevelwise(){
    int data;
    cout<<"enter node data: ";
    cin>>data;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(data);

    if(data== -1)
        return NULL;
    queue<BinaryTreeNode<int>*> pendingnodes;
    pendingnodes.push(root);
    while (!pendingnodes.empty())
    {
        BinaryTreeNode<int>* front = pendingnodes.front();
        pendingnodes.pop();
        cout<<"enter left child of "<<front->data<<" ";
        int leftchilddata;
        cin>>leftchilddata;
        if(leftchilddata != -1){
        BinaryTreeNode<int>* leftchild = new BinaryTreeNode<int>(leftchilddata);
        front->left = leftchild;
        pendingnodes.push(leftchild);
        }
        cout<<"enter right child of "<<front->data<<" ";
        int rightchilddata;
        cin>>rightchilddata;
        if(rightchilddata != -1){
        BinaryTreeNode<int>* rightchild = new BinaryTreeNode<int>(rightchilddata);
        front->right = rightchild;
        pendingnodes.push(rightchild);
        }

    }
    
        return root;
    
}

int countNoofNodes(BinaryTreeNode<int>* root){
    if(root==NULL)
    return 0;

    return 1+ countNoofNodes(root->left) + countNoofNodes(root->right);
}

void inorder(BinaryTreeNode<int>* root){
    if(root== NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    /*
    BinaryTreeNode <int>* root = new BinaryTreeNode<int>(5);
    BinaryTreeNode <int>* Node1 = new BinaryTreeNode<int>(15);
    BinaryTreeNode <int>* Node2 = new BinaryTreeNode<int>(50);

    root->left = Node1;
    root->right = Node2;

    BinaryTreeNode <int>* Node3 = new BinaryTreeNode<int>(10);
    BinaryTreeNode <int>* Node4 = new BinaryTreeNode<int>(150);

    Node1->right = Node3;
    Node1->left = Node4;

    */
    BinaryTreeNode<int>* root = takeinputLevelwise();
    print(root);
    cout<<endl<<"num of nodes "<<countNoofNodes(root);

    inorder(root);
    delete root;
    return 0;
}