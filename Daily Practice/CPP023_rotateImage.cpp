#include<iostream>
using namespace std; 
void rotate90deg(int arr[][1000], int n){
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			swap(arr[i][j], arr[j][i]); 
		}

		int p = 0, q=n-1; 
		while(q>p){
			swap(arr[p][i], arr[q][i]); 
			p++; 
			q--; 
		}
	}
	
}
int main() {

	int n; 
	cin >> n; 

	int arr[1000][1000]; 
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j]; 
		}
	}

	rotate90deg(arr, n); 
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << arr[i][j] << " "; 
		}
		cout << endl; 
	}

	return 0;
}