class Solution {
public:
    
        long long twosum(vector<int>& nums, long long st, long long end, long long val, vector<vector<int>>& output){
        
        long long cnt = 0;
        
        unordered_map<int, int> map;
        
        while(st < end){
            long long sum = nums[st] + nums[end];
            if(sum < val){
                st++;
            }
            else if(sum > val){
                end--;
            }
            else{
                if(map.count(nums[st]) > 0 && map.count(nums[end]) > 0){
                    st++;
                    continue;
                }
                map[nums[st]]++;
                map[nums[end]]++;
                vector<int> temp;
                temp.push_back(nums[st]);
                temp.push_back(nums[end]);
                output.push_back(temp);  
                cnt++;
                st++;
            }
        }
        
        return cnt;
    }
    
    
    long long threesum(vector<int>& nums, long long st, long long end, long long val, vector<vector<int>>& output, long long lastidx) {
        
        long long prVal = INT_MIN;
        long long idx = lastidx;
        
        for(long long i = st; i < end; i++){
            
            if(prVal == nums[i]){
                continue;
            }
            prVal = nums[i];
            
            long long ret = twosum(nums, i+1, end, val - nums[i], output);
            if(ret != 0){
                
                for(long long j = 0; j < ret; j++)
                    output[idx+j].push_back(nums[i]);
                idx += ret;
            }
            
        }
        return idx;
    }
    
    
    
    vector<vector<int>> fourSum(vector<int>& nums, long long target) {
        long long n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
        
        long long prVal = INT_MIN;
        long long idx = 0;
        
        for(long long i = 0; i < n; i++){
             if(prVal == nums[i]){
                continue;
            }
            prVal = nums[i];
            
            long long ret = threesum(nums, i+1, n-1, target-nums[i], output, idx);
            if(ret != 0){
                
                for(long long j = 0; j < abs(idx-ret); j++)
                    output[idx+j].push_back(nums[i]);
                idx += abs(idx - ret);
            }
        }
        
        return output;
    }
};