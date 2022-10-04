#include<iostream>
using namespace std;

int sum(int a,int b){
    int c = a+b;
    return c;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;  
    *b = temp;
}


int main(){
    int num1,num2;
    cout<<"Enter the value of num1 & num2: ";
    cin>>num1>>num2;
    // cout<<sum(num1,num2);
    
    cout<<"the value of num1 and num2 before swab is "<<num1<<","<<num2;
    swap(&num1,&num2);
    cout<<"\nthe value of num1 and num2 after swab is "<<num1<<","<<num2;

    return 0;
}