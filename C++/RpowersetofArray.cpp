#include<iostream>
#include<vector>
using namespace std;


void powerset(int arr[], int size, vector<int> v1){
    if(size == 0){
        cout<<endl;
        for (auto i : v1)
        cout << i << ' ';
        return;
    }

    powerset(arr+1,size-1,v1);
    v1.push_back(arr[0]);
    powerset(arr+1,size-1,v1);
}

int main(){
    int n = 3;
    int arr[] = {1,2,3};
    vector <int> v1;
    powerset(arr,3,v1);
    return 0;
}