#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        setData(int a, float b){
            id = a;
            price =b;
        }
        void getData(void){
            cout<<"The id and price are "<<id<<" & "<<price<<endl;
        }
};

int main(){
    int size = 3,p;
    float q;
    Shop *ptr = new Shop[size];
    Shop *head = ptr;
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the id and price :"<<i+1<<endl;
        cin>>p>>q;
        //(*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }
    //printing
    //*ptr = head;
    for (int j = 0; j < size; j++)
    {
        cout<<"for item "<<j+1<<" is : "<<endl;
        head->getData();
        head++;
    }
    
    return 0;
}
