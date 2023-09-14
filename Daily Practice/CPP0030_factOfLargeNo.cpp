//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:

    void calculateFact(vector<int>&res, int N){
        if(N==1 || N==0){
            return; 
        }
        while(N){
            int carry = 0; 
            for(auto &x : res){
                int sum = N*x+carry;
                carry = 0; 
                x = sum%10; 
                if(sum > 9){
                    carry = sum/10; 
                }
                
            }
            
            --N; 
            while(carry){
                res.push_back(carry%10); 
                carry /= 10; 
            } 
        }
        
    }

    vector<int> factorial(int N){
        // code here
        vector<int> res; 
        int temp = N; 
        while(temp){
            res.push_back(temp%10); 
            temp = temp/10; 
        }
        calculateFact(res, N-1); 
        
        reverse(res.begin(), res.end()); 
        return res; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends