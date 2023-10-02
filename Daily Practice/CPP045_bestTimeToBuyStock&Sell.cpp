class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit = 0, n = prices.size(); 
        int lowestPrice_idx = 0; 

        for(int i=1; i<n; i++){
          if(prices[i] < prices[lowestPrice_idx]){
            lowestPrice_idx = i; 
          }else{
            maxProfit = max(maxProfit, prices[i] - prices[lowestPrice_idx]); 
          }
        }

        return maxProfit; 
    }
};