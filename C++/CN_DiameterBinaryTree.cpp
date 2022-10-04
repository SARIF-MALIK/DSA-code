#include<iostream>
#include<queue>
using namespace std;

template<typename T>

class BinaryTree{
    public:
    T data;
    BinaryTree* left;
    BinaryTree* right;
    
    BinaryTree(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTree(){
        delete right;
        delete left;
    }

};

BinaryTree<int>* takeinputLevelwise(){
    int data;
    cout<<"Enter Data"<<endl;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    BinaryTree<int>* root = new BinaryTree<int>(data);
    queue<BinaryTree<int>*> pendingnodes;
    pendingnodes.push(root);
    while(!pendingnodes.empty()){
        BinaryTree<int>* front = pendingnodes.front();
        pendingnodes.pop();
        
        int leftchilddata;
        cout<<"Enter leftchild data of "<<front->data<<endl;
        cin>>leftchilddata;
        if(leftchilddata != -1){
            BinaryTree<int>* leftchild = new BinaryTree<int>(leftchilddata);
            front->left = leftchild;
            pendingnodes.push(leftchild);
        }

        int rightchilddata;
        cout<<"Enter rightchild data of "<<front->data<<endl;
        cin>>rightchilddata;
        if(rightchilddata != -1){
            BinaryTree<int>* rightchild = new BinaryTree<int>(rightchilddata);
            front->right = rightchild;
            pendingnodes.push(rightchild);
        }
        
    }
    return root;
}

void printTreeLevelwise(BinaryTree<int>* root){
    if(root == NULL)
        return;

    queue<BinaryTree<int>*> pendingnodes;
    pendingnodes.push(root);
    while(!pendingnodes.empty()){
        BinaryTree<int>* front = pendingnodes.front();
        pendingnodes.pop();
        cout<<front->data<<":";
        if(front->left != NULL){
            cout<<"L"<<front->left->data<<",";
            pendingnodes.push(front->left);
        }

        if(front->right != NULL){
            cout<<"R"<<front->right->data;
            pendingnodes.push(front->right);
        }
        cout<<endl;
    }
}

int height(BinaryTree<int>* root){
    if(root==NULL)
        return 0;
    return 1+ max(height(root->left), height(root->right) );
}

int diameter(BinaryTree<int>* root){
    if(root == NULL)
        return 0;
    int option1 = height(root->left)+height(root->right);
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);

    return max(option1, max(option2, option3));
}


int main(){

    BinaryTree<int>* root = takeinputLevelwise();
    
    printTreeLevelwise(root);

    cout<<endl;

    cout<<"Diameter of Binary Tree"<<diameter(root);
    delete root;
    return 0;
}