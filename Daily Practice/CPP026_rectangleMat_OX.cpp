#include<bits/stdc++.h>
using namespace std; 

void buildMatrix(char** arr, int n, int m){

    int rowSt = 0, rowEnd = n-1, colSt =0, colEnd = m-1; 
    bool flagX = true; 

    while(rowSt <= rowEnd){

        for(int p=colSt; p<=colEnd; p++){
            if(flagX) arr[rowSt][p] = 'X'; 
            else arr[rowSt][p] = '0'; 
        }
        rowSt++; 
        for(int q=rowSt; q<=rowEnd; q++){
            if(flagX) arr[q][colEnd] = 'X'; 
            else arr[q][colEnd] = '0'; 
        }
        colEnd--; 
        for(int r=colEnd; r>=colSt; --r){
            if(flagX) arr[rowEnd][r] = 'X'; 
            else arr[rowEnd][r] = '0'; 
        }
        rowEnd--; 
        for(int s=rowEnd; s>=rowSt; --s){
            if(flagX) arr[s][colSt] = 'X'; 
            else arr[s][colSt] = '0'; 
        }
        colSt++; 

        flagX = !flagX; 
    }
}

int main() {
	int n, m; 
	cin >> n >> m; 
	
    char **arr = new char*[n]; 
	for(int i=0; i<n; i++){
        arr[i] = new char[m];
	}

    buildMatrix(arr, n, m); 

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " "; 
        }
        cout << endl; 
    }



    for(int i=0; i<n; i++){
        delete [] arr[i]; 
	}
    delete [] arr; 

	return 0;
}