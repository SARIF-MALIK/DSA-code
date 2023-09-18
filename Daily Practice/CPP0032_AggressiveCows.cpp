//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

	bool canPlaceCowAtD(int n, int c, vector<int>& arr, int d){


	    int cowPlaced = 1, prvIdx = arr[0]; 
	    for(int i=1; i<n; i++){
	        if((arr[i]-prvIdx) >= d){
	            cowPlaced++; 
	            prvIdx = arr[i]; 
	        }
	        if(cowPlaced == c) return true; 
	    }

	    return false; 
	}

    int solve(int n, int k, vector<int> &arr) {
    
        // Write your code here
        sort(arr.begin(), arr.end()); 
		    int maxDistSoFar = 1; 
		    
		     int stallMinDist_left = INT_MAX, right = arr[n-1]-arr[0]; 
		    for(int j=1; j<n; j++){
		    	if( arr[j] - arr[j-1] < stallMinDist_left){
		    		stallMinDist_left = arr[j]-arr[j-1]; 
		    	}
		    }

		    while(stallMinDist_left <= right){
		    	int mid = stallMinDist_left+(right-stallMinDist_left)/2; 
		    	if(canPlaceCowAtD(n, k, arr, mid)){
		    		maxDistSoFar = max(maxDistSoFar, mid); 
		    		stallMinDist_left = mid+1; 
		    	}else{
		    		right= mid-1; 
		    	}
		    }
		    
		    return maxDistSoFar; 
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends