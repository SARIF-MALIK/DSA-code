//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int A[], int N) {
        // code here
        
        // initially it is last index in Array
        int finishLine = N-1; 
        
        
        // start checking from last second index
        for(int i=N-2; i>=0; --i){
            
            // if you can jump higher or equal to finishLine update your finishLine 
            if(A[i]+i >= finishLine){
                finishLine = i; 
            }
        }
        
        // if finishLine reduced to 0 that means we can reach last index
        return finishLine == 0; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
// } Driver Code Ends