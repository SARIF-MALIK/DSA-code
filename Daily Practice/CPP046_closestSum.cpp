class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size(), second, third; 
        int first = 0; 
        sort(nums.begin(), nums.end());
        int sum = nums[0] + nums[1] + nums[2]; 
        int ans = sum; 

        while(first < n-2){
            second = first+1; 
            third = n-1; 
            
            
            while(second < third){
                sum = nums[first]+nums[second]+nums[third]; 
                if(abs(sum-target) < abs(ans-target) ) ans=sum;
                // ans = min( ans, abs(target-sum) ); 
                if(sum > target){
                    --third; 
                }else if(sum < target) ++second; 
                else {
                    return sum; 
                }
            }
            ++first; 
        }

        return ans; 
    }
};