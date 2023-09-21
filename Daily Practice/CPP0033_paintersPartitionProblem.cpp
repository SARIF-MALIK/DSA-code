//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
    int reqPainterInTime(int*arr, int n, long long givenTime){
        int reqPainters = 1; 
        long long currTime = 0; 
        int idx = 0; 
        while(idx < n){
            currTime += arr[idx]; 
            if(currTime > givenTime){
                reqPainters++; 
                currTime = 0; 
                continue; 
            }
            idx++; 
        }
        
        return reqPainters; 
    }
  
    long long minTime(int arr[], int n, int k)
    {
        // time range 
        long long s = INT_MIN, e = 0; 
        for(int i=0; i<n; i++){
            e+= arr[i]; 
            s = max(s, (long long)arr[i]); 
        }
        
    
        long long ans; 
        while(s<=e){
            long long ptime = s+(e-s)/2; 
            int reqPainterInGiveTime = reqPainterInTime(arr, n, ptime); 
            
            if(reqPainterInGiveTime <= k){
                ans = ptime; 
                e = ptime-1; 
            }else{
                s = ptime+1; 
            }
            
        }
        
        return s; 
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends