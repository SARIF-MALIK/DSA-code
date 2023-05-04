    long long maxSubarraySum(int arr[], int n){
          
        // Your code here 
        long long maxSum = INT_MIN; 
        long long sum = 0; 
        
        for(int i=0; i<n; i++){ 
            sum += arr[i]; 
            maxSum = max(maxSum, sum);  
            if(sum < 0) sum = 0; 
        } 
        
        return maxSum; 
        
    }