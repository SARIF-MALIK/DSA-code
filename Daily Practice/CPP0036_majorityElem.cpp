class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count =0, candidate = nums[0]; 

        for(auto const &x : nums){
            if(count == 0) candidate = x; 
            count += (candidate == x)? 1:-1; 
        }
        return candidate; 
    }
};