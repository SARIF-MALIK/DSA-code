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
        queue(){
  
            arr = new T (5);
            firstidx = -1;
            lastidx = 0;
            size = 0;
            this->capacity = 5;
        }
        void enqueue(T element){
             if(size == capacity){
                 T * newarr = new T (2*capacity);
                 int j = 0;
                 for(int i=firstidx; i<capacity; i++){
                    newarr[j] = arr[i];
                    j++;
                 }
                 for(int i=0; i<firstidx;i++){
                     newarr[j] = arr[i];
                     j++;
                 }
                delete [] arr;
                arr = newarr;
                firstidx = 0;
                lastidx = capacity;
                capacity *= 2;

            }

            arr[lastidx] = element;
            lastidx = (lastidx+1)%capacity;

            if(firstidx == -1)
                firstidx = 0;
        
            size++;
            
        }

        void dequeue(){
            if(size==0){
                cout<<"bhai manja Queue is Empty"<<endl;
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

        void print(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
        }

        bool isempty(){
            return size ==0;
        }
       

};


int main(){

    queue <int> s1;
    s1.enqueue(100);
    s1.enqueue(100);
    s1.enqueue(100);
    s1.enqueue(200);
    s1.enqueue(400);
    s1.enqueue(600);
    s1.print();
    cout<<endl<<"dequeue"<<endl;
    s1.dequeue();
    s1.dequeue();
    s1.dequeue();
    
  
    // queue <char> s2);
    // s2.enqueue(100);
    // s2.enqueue(101);
    // s2.dequeue();
    // s2.dequeue();
    
    

    
    return 0;
}