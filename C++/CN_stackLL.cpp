#include<iostream>
using namespace std;


template <typename T>
class Node{
    public:
    T data;
    Node <T> *next;

    Node(T data){
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class stack{
    Node <T> *head;  
    int size;
    public:

    stack(){
        head = NULL;
        size = 0;
    }

    void push(T data){
        if(head != NULL){
        Node <T> *s1 = new Node <T>(data);
            Node <T> *temp = head;
            head = s1;
            head->next = temp;
            size++;
        }
        else{
        Node <T> *s1 = new Node <T>(data);
        head = s1;
        size++;
        }
    }

    T pop(){
        if(head == NULL)
            return -1;
        size--;
        Node <T> *temp = head;
        head = head->next;
        return temp->data;
    }   


};

int main(){
    stack <int> obj;
    obj.push(5);   
    obj.push(155);   
    obj.push(345);   
    obj.push(25);   
    cout<<obj.pop();   
    cout<<obj.pop();   
    cout<<obj.pop();   
    return 0;
}