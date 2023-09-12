#include<bits/stdc++.h>
using namespace std; 

void traverseDiagonals(int **arr, int n, int m){
	bool flag = true; 
    
	for(int i=0; i<n; i++){
		int x = i, y = 0; 
        int diagLen = min(n, min(m, i+1)); 
		if(flag){
			for(int j=0; j<diagLen; j++){
				cout << arr[x--][y++] << " "; 
			}	
		}else{
            if(x >= m){
                x = m-1; 
                y = i%m+1; 
            }
			for(int j=0; j<diagLen; j++){
				cout << arr[y++][x--]<< " "; 
			}	
		}
		flag = !flag;
	}
	// flag = true; 
	for(int i=1; i<m; i++){
        int diagLen =  min(n, min(m, m-i)); 
		int x = n-1, y = i; 
		if(flag){
			for(int j=0; j<diagLen; j++)
				cout << arr[x--][y++] << " "; 
		}else{
			x = 0, y = i+diagLen-1;
            if(y >= m-1 || m<n){
                x = n-(m-i);  
                y = m-1;
            } 
			for(int j=0; j<diagLen; j++)
				cout << arr[x++][y--]<< " ";
		}
		flag = !flag; 
	}

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

	traverseDiagonals(arr, n, m); 
	return 0;
}