class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int elem1(-1), elem2(-1), cnt1(0), cnt2(0);
        int n = nums.size()/3; 
        for(const auto x : nums){
            if(elem1 == x) cnt1++; 
            else if(elem2 == x) cnt2++; 
            else if(cnt1 <= 0) {elem1 = x; cnt1 = 1;}
            else if(cnt2 <= 0) {elem2 = x; cnt2 = 1;} 
            else {
                cnt1--; 
                cnt2--; 
            }
        }
        cnt1 = 0, cnt2 = 0; 
        for(const auto x : nums){
            if(x==elem1) cnt1++; 
            else if(x==elem2) cnt2++; 
        }
        vector<int> arr; 
        if(cnt1 > n) arr.push_back(elem1); 
        if(cnt2 > n) arr.push_back(elem2); 

        return arr; 
    }
};