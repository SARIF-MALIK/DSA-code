    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> s1 (a, a+n); 
        
        for(int i=0; i<m; i++){
            unordered_set<int>:: iterator it =  s1.find(b[i]); 
            if(it == s1.end()){
                s1.insert(b[i]); 
            }
        }
        
        return s1.size(); 
    }