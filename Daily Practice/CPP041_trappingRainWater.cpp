//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        
        int li= arr[0], ri[n]; 
        
        int riLargest = arr[n-1]; 
        for(int i=n-1; i>=0; --i){
            if(arr[i] > riLargest) riLargest = arr[i]; 
            ri[i] = riLargest; 
        }
        
        long long ans = 0; 
        
        for(int i=1; i<n; i++){
            
            if(arr[i] > li) li = arr[i]; 
            
            int water = min(li, ri[i]) - arr[i]; 
            ans += water; 
            
        }
        
        return ans; 
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends