//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

    int  binarySearch(vector<int>& bs, int col){
        int st = 0, end = col-1; 
        
        while(st<=end){
            int mid = (st+end)/2; 
            
            if(bs[mid] == 1){
                if(mid==0 || bs[mid-1] == 0) return mid; 
                end = mid-1; 
            }else{
                st = mid+1; 
            }
        }
        
        return INT_MAX; 
    }


	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int minIdx = INT_MAX, maxRow; 
	    
	    for(int i=0; i<n; i++){
	        int idx = binarySearch(arr[i], m); 
	        if(idx < minIdx){
	            minIdx = idx; 
	            maxRow = i; 
	        }
	       // cout << minIdx << " " << maxRow << endl; 
	    }
	    if(minIdx == INT_MAX) return -1; 
	    return maxRow;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends