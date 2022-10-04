#include<iostream>
using namespace std;

int main(){
    

    enum Meal{breakfast,lunch,dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;

    Meal m1 = dinner;
    cout<<m1;
    cout<<(m1==1);
    return 0;
}