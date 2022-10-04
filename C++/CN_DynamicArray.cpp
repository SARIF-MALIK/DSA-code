#include<iostream>
using namespace std;

class DynamicArray{
    int *data;
    int idx;
    int capacity;    //size of array

    public:
        DynamicArray (){
            data = new int [5];
            idx = 0;
            capacity = 5;
        }

        DynamicArray(DynamicArray const & f2){
            data = new int [f2.capacity];
            
            idx = f2.idx;
            capacity = f2.capacity;
            for(int i=0;i<idx;i++)
                data[i] = f2.data[i];
        }
            //copy assignment operator
         void operator=(DynamicArray const & f2){
            data = new int [f2.capacity];
            
            idx = f2.idx;
            capacity = f2.capacity;
            for(int i=0;i<idx;i++)
                data[i] = f2.data[i];
        }

        void add(int element){
            if(idx == capacity){
                int *newdata = new int [2*capacity];
                for(int i=0;i<capacity;i++){
                    newdata[i]  = data[i]; 
                }
                delete [] data;
                data = newdata;
                capacity *= 2;
            }
            
            data[idx] = element;
            idx++;
        }

        int get(int i)const{
            if(i>=idx)
                return -1;
            return data[i];
        }

        void add(int i, int element){
            if(i<idx)
                data[i] = element;
            else if(i==idx){
                add(element);
            }
            else
                return;
        }

        void printarray()const{
            for(int i=0;i<idx;i++)
                cout<<data[i]<<" ";
            cout<<endl;
        }
};



int main(){
    DynamicArray v1;
    v1.add(5);
    v1.add(6);
    v1.add(7);
    v1.add(8);
    v1.add(59);
    v1.add(65);
    v1.add(625);
    v1.add(6542);

    //v1.printarray();

    // DynamicArray v2(v1);             //shallow copy;
    // v2.add(0,100);

    // copy assignment operator

    DynamicArray s5;
    s5 = v1;

    //v1.printarray();
    //v2.printarray();
    s5.printarray();
    return 0;
}