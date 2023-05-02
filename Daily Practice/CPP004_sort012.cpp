    void sort012(int a[], int n)
    {
        // code here 
        int zero = 0, one = 0, two = n-1; 
        while(one < two){
            if(one < zero || a[one] == 1){
                one++; 
            }
            
            else if(a[one] == 0){
                swap(a[one], a[zero]); 
                zero++; 
                one++; 
            }
            else if(a[two]==0){
                swap(a[two], a[zero]); 
                zero++;
            }
            else if(a[two]==1){
                swap(a[one], a[two]); 
                one++; 
            }
            else {
                two--; 
            }
        }
        
    }

    // SECOND APPROACH 
        void sort012(int a[], int n)
    {
        // code here 
        int zero = 0, one = 0, two = n-1; 
        while(one <= two){
            
            if(a[one] == 0){
                swap(a[one++], a[zero++]); 
            }
            
            else if(a[one] == 1){
                one++;    
            }
            
            else{
                swap(a[one], a[two--]); 
            }
        }
        
    }