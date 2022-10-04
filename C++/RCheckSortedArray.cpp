#include<iostream>
#include<algorithm>
using namespace std;

bool checkforsort(int *a, int size){
    if(size<=1)
    return true;

    if(a[0] >a[1])
    return false;

    else
    return checkforsort(++a,size-1);

}   

int main(){

    int arr[] = {5,4,2,56,7,4};
    sort(arr,arr+6);
    
    bool x = checkforsort(arr,6);
    if(x)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}