    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> maxheap; 
        int i = 0; 
        while(i<k){
            maxheap.push(arr[i]); 
            i++; 
        }
        
        for(int j=k; j<r-l+1; j++){
            if(arr[j] < maxheap.top()){
                maxheap.pop(); 
                maxheap.push(arr[j]); 
            }
        }
        
        return maxheap.top(); 
    }