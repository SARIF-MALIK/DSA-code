    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n); 
        int ans = arr[n-1]-arr[0]; 
        int smallest = arr[0]+k, largest = arr[n-1]-k; 
        int mi, mx; 
        
        for(int i=1; i<n; i++){
            mi = min(smallest, arr[i]-k); 
            mx = max(largest, arr[i-1]+k); 
            
            if(mi < 0) continue; 
            ans = min(ans, mx-mi); 
        }
        
        return ans; 
    }