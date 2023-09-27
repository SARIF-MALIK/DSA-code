class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(); 
        
        int i=0, j=0, csum = 0, diff = INT_MAX; 

        while(i<n){
            if(j<n && csum < target){
                csum += nums[j]; 
                j++; 
            }else{
                if(csum >= target)
                    diff = min(diff, j-i); 
                csum -= nums[i]; 
                i++; 
            }
        }
        if(diff == INT_MAX) return 0; 
        return diff; 
    }
};