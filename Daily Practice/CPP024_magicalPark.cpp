#include<iostream>
using namespace std; 

bool escapePlan(char arr[][100], int n, int m, int k, int s){

	for(int i=0; i<n; i++){
		if(s <= k) return false; 
		for(int j=0; j<m; j++){
			if(arr[i][j] == '#'){
				break; 
			}
			if(j!= m-1)
				--s; // for moving 1 step 
			if(arr[i][j] == '.'){
				s -= 2; 
			}
			else if(arr[i][j] == '*'){
				s += 5; 
			}

		}
	}

	cout << "Yes" << endl << s;
	return true; 
}

int main() {
	int n, m, k, s; 
	cin >> n >> m >> k >> s; 
	char arr[100][100]; 
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> arr[i][j]; 
		}
	}

	if(!escapePlan(arr, n, m, k, s)){
		cout << "No" << endl; 
	}

	return 0;
}