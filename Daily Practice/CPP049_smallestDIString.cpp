class Solution {
public:

    bool num[10] = {false}; 
    bool flag = false; 

    void helper(string pattern, string& ans, int idx){
        if(ans.size() == pattern.size()+1){
            flag = true; 
            return; 
        }

        if(ans.size() == 0){
            for(int d = 1; d<=9; d++){
                ans.push_back(d+'0'); 
                num[d] = true; 
                helper(pattern, ans, idx); 
                if(flag) return; 
                num[d] = false; 
                ans.pop_back(); 
            }
        }
        int  lastVal = ans.back() - '0';
        if(pattern[idx] == 'I'){
            for(int x = lastVal; x <= 9; x++){
                if(num[x] == true) continue; 
                num[x] = true;
                ans.push_back(x+'0'); 

                helper(pattern, ans, idx+1); 
                if(flag) return; 
                num[x] = false; 
                ans.pop_back(); 
            }
        }
        else {    // pattern[idx] == 'D'; 
            for(int x = 1; x < lastVal; x++){
                if(num[x] == true) continue; 
                num[x] = true; 
                ans.push_back(x+'0'); 

                helper(pattern, ans, idx+1); 
                if(flag) return;
                num[x] = false; 
                ans.pop_back(); 
            }
        }


    }

    string smallestNumber(string pattern) { 
        string ans = ""; 
        helper(pattern, ans, 0); 
        return ans; 
    }
};