	#include<bits/stdc++.h>
	using namespace std; 

	#define fori(l,r) for(int i = l; i < r; i++) 
	#define forj(l,r) for(int j = l; j < r; j++)
	typedef vector<int> vi;
	typedef pair<int, int> pi;
	#define ll long long int
	#define pb push_back

	// ------------------------------------- Functions ------------------------------------ //

	bool canMakeMHamburg(int nb, int ns, int nc, int pb, int ps, int pc, int cb, int cs, int cc, long long r, long long m){


	    long long eb, es, ec, total_money; 
	    long long zero = 0; 
	    eb = max(zero, m*cb-nb); 
	    es = max(zero, m*cs-ns); 
	    ec = max(zero, m*cc-nc); 


	    total_money = eb*pb + es*ps + ec*pc;

	    return total_money <= r; 
	}

	// -------------------------------- SEC MAIN ----------------------------------// 

	void sol_Main(){
		int t =1; 
		// cin >> t; 
		while(t--){
	        string recipe; 
	        int nb, ns, nc, pb, ps, pc, cb=0, cs=0, cc=0; 
	        long long r; 
	        cin >> recipe;
	        cin>> nb >> ns >> nc >> pb >> ps >> pc >> r; 

	        for(int i=0; i<recipe.size(); i++){
	        	if(recipe[i] == 'B') cb++; 
	        	else if(recipe[i] == 'S') cs++; 
	        	else cc++; 
	        }

	        long long s = 0, e = 1e12+100; 
	        long long ans; 
	        while(s<=e){
	        	long long m = s+(e-s)/2; 
	        	if(canMakeMHamburg(nb, ns, nc, pb, ps, pc, cb, cs, cc, r, m)){
	        		ans = m; 
	        		s = m+1; 
	        	}else{
	        		e = m-1; 
	        	}
	        }
	        // ans = s; 
	        cout << ans << endl; 
	}
}


	#define Online_judge     /* uncomment for online submission */
	int main(){

		#ifndef Online_judge
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		#endif
		// sol_Main(); 

		#ifdef Online_judge
		sol_Main();  
		#endif
		
	}
