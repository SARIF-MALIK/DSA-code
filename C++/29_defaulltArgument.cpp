#include<iostream>
using namespace std;

float moneyReceived(int currentmoney,float factor = 1.04){   //by default 1.04 is the factor if not given in fuction in main
    return currentmoney*factor;
}

int main(){
    int money = 100000;

    cout<<"If you have "<<money<<" Rs in you account, you will receive "<<moneyReceived(money)<<" Rs after 1 year";
    cout<<"\nFor VIP if you have "<<money<<" Rs in you account, you will receive "<<moneyReceived(money,1.10)<<" Rs after 1 year";

    return 0;
}