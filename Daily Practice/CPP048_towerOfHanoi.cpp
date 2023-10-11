	#include<bits/stdc++.h>
	using namespace std; 

	#define fori(l,r) for(int i = l; i < r; i++) 
	#define forj(l,r) for(int j = l; j < r; j++)
	typedef vector<int> vi;
	typedef pair<int, int> pi;
	#define ll long long int
	#define pb push_back

	// ------------------------------------- Functions ------------------------------------ //
	void towerOfHanoi(int n, char src, char aux, char des){

		if(n==0) return; 

		towerOfHanoi(n-1, src, des, aux); 
		cout << src << " to " << des << endl ;
		towerOfHanoi(n-1, aux, src, des); 
	}


	// -------------------------------- SEC MAIN ----------------------------------// 

	void sol_Main(){
		int t =1; 
		// cin >> t; 
		while(t--){
	        int n; 
	        cin >> n; 

	        towerOfHanoi(n, 'A', 'B', 'C'); 
	}
}


	// #define Online_judge     /* uncomment for online submission */
	int main(){

		#ifndef Online_judge
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		#endif
		sol_Main(); 

		// #ifdef Online_judge
		// sol_Main();  
		// #endif
		
	}
