#include<iostream>
using namespace std;

class stack{
    int *arr ;
    int top =-1;
    int capacity;
    
    public:
        stack(){
            capacity = 4;
            arr = new int[capacity];
        }

       void push(int a){
           if(top ==capacity-1){
               int *newarr = new int[2*capacity];
               for(int i=0;i<capacity;i++)
                    newarr[i] = arr[i];
                capacity = capacity*2;
                delete [] arr;
                arr = newarr;
                push(a);
           }
            else{
           top++;
           arr[top] = a;
            }
        }
        void pop(){
            if(top >=0){
            cout<<arr[top]<<endl;
            top--;
            }
            else{
                cout<<"underflow"<<endl;
                return;
            }
        }
        void peek(){
            if(top>-1)
            cout<<arr[top]<<endl;
            else 
                cout<<"stack is empty"<<endl;
        }
        void Size(){
            cout<<top+1<<endl;
        }
        bool isempty(){
            return top+1==0;
        }
};



int main(){
    stack op;
    op.push(5);
    op.push(15);
    op.push(115);
    op.push(215);
    op.push(315);
    



    op.pop();
    op.pop();
    op.pop();
    //op.Size();
    //bool x = op.isempty();
    //cout<<x;
    return 0;
}