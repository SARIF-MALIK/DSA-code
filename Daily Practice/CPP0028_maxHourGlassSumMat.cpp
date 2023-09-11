#include<bits/stdc++.h>
using namespace std; 

int GlassSum(int**arr, int n, int m, int i, int j){
    int sum = 0; 
    for(int k=0; k<3; k++){
        sum += arr[i][j+k]; 
        sum += arr[i+2][j+k]; 
    }
    sum += arr[i+1][j+1]; 

    return sum; 
}

bool safeGlass(int n, int m, int i, int j){
    if(i+2 < n && j+2 < m) return true; 
    return false; 
}

int hourGlassMaxSum(int**arr, int n, int m){
    int maxSum = INT_MIN; 

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if( safeGlass(n, m, i, j) ){
                maxSum = max(maxSum, GlassSum(arr, n, m, i, j) ); 
            }
        }
    }
   return maxSum; 
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

    int x = hourGlassMaxSum(arr, n, m); 
    cout << x; 
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