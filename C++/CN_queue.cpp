#include<iostream>
using namespace std;

template <typename T>

class queue{
    T *arr;
    int firstidx;
    int lastidx;
    int size;
    int capacity;

    public:
        queue(int capacity){
            arr = new T (capacity);
            firstidx = -1;
            lastidx = 0;
            size = 0;
            this->capacity = capacity;
        }
        void enqueue(T element){
             if(size == capacity){
                 cout<<"Bhai kya kr rha h?? Queue is Full"<<endl;
                return;
            }
            arr[lastidx] = element;
            lastidx = (lastidx+1) % capacity;

            if(firstidx == -1)
                firstidx = 0;
            
            size++;
            
        }

        void dequeue(){
            if(size==0){
                cout<<"bhai manja Queue is Empty"<<endl;
                firstidx = -1;
                lastidx = 0;
                return;
            }
            cout<<arr[firstidx]<<endl;
            firstidx = (firstidx+1)%capacity;
            size--;
                
        }

        T front(){
            if(size == 0)
                return -1;
            return arr[firstidx];
        }

        bool isempty(){
            return size ==0;
        }
        

};


int main(){

    queue <int> s1(5);

    queue <char> s2(5);
    s2.enqueue(100);
    s2.enqueue(101);
    s2.dequeue();
    s2.dequeue();
    
    

    
    return 0;
}