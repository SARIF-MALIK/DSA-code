#include<iostream>
using namespace std;


class shop {
    int itemId [100];
    float price [ 100];
    int counter;

    public: 
        void initcounter(void) {counter = 0;}
        void setprice (void);
        void display(void);
};

void shop :: setprice(void){

    cout<<"Enter Id of your item no. "<< counter +1<< endl;
    cin>>itemId[counter];

    cout<<"Enter the price of your item "<<endl;
    cin>>price[counter];
    counter++;
}

void shop :: display(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"Item id "<<itemId[i]<<" Price is "<<price[i]<<endl;
    }
    
}

int main(){

    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.display();

    return 0;
}