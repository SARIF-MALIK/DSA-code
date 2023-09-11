#include<bits/stdc++.h>
using namespace std; 

bool traverseDiagonals(int**arr, int n, int m, int i, int j){
    int diagLength = min(n-i, m-j); 

    for(int k=1; k<diagLength; k++){
        if(arr[i][j] != arr[i+k][j+k]) return false; 
    }
    return true; 
}

bool checkToeplitzMatrix(int**arr, int n, int m){
    for(int i=0; i<n; i++){
        bool res = traverseDiagonals(arr, n, m, i, 0); 
        if(!res) return false; 
    }
    for(int j=1; j<m; j++){
        bool res = traverseDiagonals(arr, n, m, 0, j); 
        if(!res) return false; 
    }

    return true; 
}


int main() {
	int n, m; 
	cin >> n >> m; 
	
    int **arr = new int*[n]; 
	for(int i=0; i<n; i++){
        arr[i] = new int[m];
        for(int j=0; j<m; j++){
            cin >> arr[i][j]; 
        }
	}

    bool ans = checkToeplitzMatrix(arr, n, m); 
    if(ans){
        cout << "true"; 
    }else cout << "false"; 

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout << arr[i][j] << " "; 
    //     }
    //     cout << endl; 
    // }

    for(int i=0; i<n; i++){
        delete [] arr[i]; 
	}
    delete [] arr; 
	return 0;
}