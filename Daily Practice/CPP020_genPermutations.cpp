#include <iostream>
using namespace std;

int n = 3;


void generatePermutations(int* arr, int l, int r){
    if(l > r){
        for(int i=0; i<n; i++){
            cout << arr[i] << " "; 
        } 
        cout << endl; 
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(arr[l], arr[i]); 
        generatePermutations(arr, l+1, r); 
        swap(arr[l], arr[i]); 
    }
}

int main() {
    int arr[] = {1,2,3}; 
    generatePermutations(arr, 0, n-1); 
}
