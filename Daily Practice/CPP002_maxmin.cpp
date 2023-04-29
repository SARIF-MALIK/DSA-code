    int findSum(int A[], int N)
    {
    	//code here.
    	int min=INT_MAX, max=INT_MIN; 
    	for(int i=0; i<N; i++){
    	    if(min > A[i]) min = A[i]; 
    	    if(max < A[i]) max = A[i]; 
    	}
    	return min+max; 
    }