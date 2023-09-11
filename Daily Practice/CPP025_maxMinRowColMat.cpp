#include<bits/stdc++.h>
using namespace std; 

bool verifiedlucky(int **arr, int n, int m, int i, int j){
    int minimaRow = INT_MAX; 
    int maximaCol = INT_MIN; 

    for(int p=0; p<m; p++){
        minimaRow = min(minimaRow, arr[i][p]); 
    }
    for(int p=0; p<n; p++){
        maximaCol = max(maximaCol, arr[p][j]); 
    }

    return (arr[i][j] == maximaCol && arr[i][j] == minimaRow); 
}

int luckyNumberMatrix(int**arr, int n, int m){

    for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(verifiedlucky(arr, n, m, i, j)) return arr[i][j]; 
		}
	}
    return -1; 
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

	int ans = luckyNumberMatrix(arr, n, m); 
    cout << ans; 

    for(int i=0; i<n; i++){
        delete [] arr[i]; 
	}
    delete [] arr; 

	return 0;
}