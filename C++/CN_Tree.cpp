#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>


class TreeNode{
    public:
    T data;
    vector <TreeNode <T> *> children;
    
    TreeNode(T data){
        this->data = data;
    }
    ~TreeNode(){
        for(int i=0;i<children.size();i++){
            cout<<"destructed "<<children[i]->data<<endl;
            delete(children[i]);
        }
    }
};

void printTreeNode(TreeNode <int> * root){
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children.at(i)->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
            printTreeNode(root->children.at(i));
    }
}

TreeNode <int>* takeinput(){
    cout<<"Enter the nodedata"<<endl;
    int data;
    cin>>data;
    TreeNode <int>* root = new TreeNode<int>(data);

    cout<<"Enter the num of child of "<< root->data<<endl;
    int numchild;
    cin>>numchild;
    for(int i=0;i<numchild;i++){
        //cout<<"Enter the childdata of "<<root->data;
        TreeNode<int>* child = takeinput();
        root->children.push_back(child);
    }
    return root;
}

TreeNode <int>* takeinputLevelwise(){
    int data;
    cout<<"Enter nodedata"<<endl;
    cin>>data;
    TreeNode<int>*root = new TreeNode<int>(data);
    queue <TreeNode<int>*> TreeNodeptr;

    TreeNodeptr.push(root);

    while(TreeNodeptr.size()!=0){
        TreeNode<int>*root = TreeNodeptr.front();
        TreeNodeptr.pop();
        cout<<"Enter the num of children of "<<root->data;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<"Enter "<<i<<"th child data of "<<root->data<<endl;
            int childdata;
            cin>>childdata;
            TreeNode<int>*child = new TreeNode<int>(childdata);
            root->children.push_back(child);
            TreeNodeptr.push(child);
        }
    }
    return root;
}
    int CountNodes(TreeNode<int>*root){
        int ans = 1;
        for(int i =0; i<root->children.size();i++){
            ans += CountNodes(root->children.at(i));
        }
        return ans;
    }
    int HeightofTree(TreeNode<int>*root){
        int height = 1, child = 0;
        for(int i =0;i<root->children.size();i++){
            child = max(child, HeightofTree(root->children.at(i) ) );
        }
        return height+child;
    }
    void printgivenlevel(TreeNode<int>* root, int k){
        if(k==0){
            cout<<root->data<<endl;
            return;
        }
        for(int i=0;i<root->children.size();i++){
            printgivenlevel(root->children.at(i), k-1);
        }
        return;
    }

    void printPreOrder(TreeNode<int>*root){
        cout<<root->data<<" ";
        for(int i=0;i<root->children.size();i++){
            printPreOrder(root->children[i]);
        }
    }
    void deleteTree(TreeNode<int>* root){
        for(int i=0;i<root->children.size();i++){
            deleteTree(root->children[i]);
        }
        delete root;
    }

int main(){
    /*
    TreeNode <int> *root = new TreeNode<int> (5);
    TreeNode <int> *child1 = new TreeNode<int> (10);
    TreeNode <int> *child2 = new TreeNode<int> (15);
    TreeNode <int> *child2A = new TreeNode<int> (25);

    root->children.push_back(child1);
    root->children.push_back(child2);
    child2->children.push_back(child2A);
    */
    TreeNode <int> * root = takeinputLevelwise();
    
    printTreeNode(root);
    
    //int x = CountNodes(root);
    //cout<<"total nodes "<<x <<endl;
    //printgivenlevel(root, 1);
    cout<<HeightofTree(root);
    printPreOrder(root);
    //deleteTree(root);
    delete root;
    return 0;
}