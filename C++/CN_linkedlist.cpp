#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

        node(int data){
            this->data = data;
            next = NULL;
        }

        get(){
            cout<<this->data<<" ";
        }
};

node * takeinput(){
    node *head = NULL;
    node *tail = NULL;
    int data;
    cin>>data;
    
    while(data != -1){
    node *n1 = new node(data);
    if(head == NULL){
        head = n1;
        tail = n1;
    }
    else{
        tail->next = n1;                     
        tail = n1;
        // node*temp = head;
        // while(temp ->next != NULL){
        //     temp = temp->next;
        // }
        // temp->next = n1;

    }
    cin>>data;
    }
    return head;
}

node* insert(node*head, int i, int data){
    if(i==0){
        node * newnode = new node(data);
        newnode->next = head;
        head = newnode;
        return head;
    }
    
    node *newnode = new node(data);
    int temp = 1;
    node*temp1 = head;
    while(temp1 != NULL && temp <i){
        temp1 = temp1->next;
        temp++;
    }
    if(temp1 != NULL){
    newnode->next = temp1->next;
    temp1->next = newnode;
    return head;
    }   
}

void print(node *head){
     while(head!= NULL){
         cout<<head->data<<" ";
         head = head->next;
     }
     cout<<endl;
}


int main(){
    
    /*node *head = NULL;
    node b1 (5);              // static 
    head = &b1;
    node b2 = 8;
    node *b3 = new node(10);   //Dynamic
    node *b4 = new node(12);
    node b5 = 14;
    b4->next = &b5;
    
    // linking
    b1.next = &b2;
    b2.next = b3;
    (*b3).next = b4;

    print(head);
    
    */
    node*head = takeinput();
    print(head);

    head = insert(head, 0, 555);
    print(head);
    return 0;
}