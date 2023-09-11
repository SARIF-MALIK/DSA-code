#include<bits/stdc++.h>
using namespace std; 
void printarr(bool **brr, int , int); 

void setarr(bool**brr, int n, int m, int i, int j){
	for(int p = 0; p<n; p++){
		brr[p][j] = true; 
	}
	for(int q = 0; q<m; q++){
		brr[i][q] = true; 
	}
}


void helper(bool **arr, int n, int m){
	bool **brr = new bool*[n]; 
	for(int i=0; i<n; i++){
		brr[i] = new bool[m]; 
		for(int j=0; j<m; j++){
			brr[i][j] = false;
		}
	}
    // printarr(brr, n, m);
    // return;  
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr[i][j] == true){
				setarr(brr, n, m, i, j); 
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			arr[i][j] = brr[i][j]; 
		}
    }
	for(int i=0; i<n; i++){
		delete [] brr[i]; 
	}
	delete [] brr; 
}

void printarr(bool**arr, int n, int m){
    for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout << arr[i][j] << " "; 
		}
		cout << endl; 
	}
    cout << endl; 
}

int main () {
	int n, m; 
	cin >> n >> m; 

	bool **arr = new bool*[n]; 
	for(int i=0; i<n; i++){
		arr[i] = new bool[m]; 
		for(int j=0; j<m; j++){
			int x; 
			cin >> x; 
			if(x) arr[i][j] = true; 
			else arr[i][j] = false;
		}
	}

	helper(arr, n, m); 
    printarr(arr, n, m); 


	for(int i=0; i<n; i++){
		delete [] arr[i]; 
	}
	delete [] arr; 
	return 0;
}