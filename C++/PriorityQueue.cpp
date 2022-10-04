#include<iostream>
#include <vector>
using namespace std;

class PriorityQueue{                
    vector<int> pq;
    public:
        PriorityQueue(){

        }
        bool isEmpty(){
            return pq.size() == 0;
        }
        int getSize(){
            return pq.size();
        }

        int getMin(){
            if(isEmpty())
                return 0;
            return pq[0];
        }

        void insert(int element){
            pq.push_back(element);

            int childIndex = pq.size()-1;
            while(childIndex>0)
            {
                int parentIndex = (childIndex-1)/2;
                if(pq[parentIndex] > pq[childIndex])
                {
                    int temp = pq[childIndex];
                    pq[childIndex] = pq[parentIndex];
                    pq[parentIndex] = temp;
                }
                else
                    break;
                childIndex = parentIndex;
            }

        }

        void print(){
            for(auto i: pq)
                cout<<i<<" ";
        }
};


int main(){
    PriorityQueue obj;
    obj.insert(10);
    obj.insert(80);
    obj.insert(3);
    obj.insert(40);
    obj.insert(5);

    cout<<obj.getSize()<<endl;
    obj.print();
    return 0;
} 