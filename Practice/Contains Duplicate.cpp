// Link - https://leetcode.com/problems/contains-duplicate/submissions/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map <int,int> mp;
        
        bool ans = false;
        
        for (auto x: nums){
            
            if (mp.find(x) == mp.end()){
                
                mp[x]++;
            }
            
            else{
                
                ans = true;
                
                return ans;
            }  
        }

        
        return ans;
        
        
    }
};
