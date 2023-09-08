#include<bits/stdc++.h>
using namespace std; 

#define fori(l,r) for(int i = l; i < r; i++) 
#define forj(l,r) for(int j = l; j < r; j++)
typedef vector<int> vi;
typedef pair<int, int> pi;
#define ll long long int
#define pb push_back

// ---------- HEADER -------------- //

void generatePermutations(int* arr, int l, int r){

    for (int i = r-1; i >= 0; --i) {
        if(arr[i] >= arr[i+1]) continue; 
        else{
        	int pivot = i, j=r; 
        	while(j>i){
        		if(arr[j] > arr[pivot]){
        			swap(arr[j], arr[pivot]); 
        			reverse(arr+pivot+1, arr+r+1); 
        			return; 
        		}
        	}
        } 
    }

    reverse(arr, arr+r+1); 
}

void sol_Main(){
    int arr[] = {2,3,1}; 
	int n = sizeof(arr)/sizeof(int); 
	generatePermutations(arr, 0, n-1); 
	fori(0, n){
		cout << arr[i] << " "; 
	}
}


void solWithTestCase_Main(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
        cin >> n;
	}}  
// #define Online_judge     /* uncomment for online submission */
int main(){

	#ifndef Online_judge
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	// solWithTestCase_Main(); 
	sol_Main(); 
	
}