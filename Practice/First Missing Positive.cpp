// https://leetcode.com/problems/first-missing-positive/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int ans=0;
        int n = nums.size();
        
        unordered_map <int,int> mp;
        
        for (auto x:nums){
            mp[x]++;
        }
        
        for(int i=1; i<=n; i++){
            
            if (mp.find(i)==mp.end()){
                
                return i;
            }
            
        }
        
        return n+1;
        
    }
};
