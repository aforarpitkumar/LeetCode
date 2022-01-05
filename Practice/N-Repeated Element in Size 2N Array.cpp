// link - https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        unordered_map <int,int> mp;
        
        int ans;
        
        for (auto x: nums){
            
            mp[x]++;
        }
        
        int n = nums.size()/2;
        
        for (auto x: mp){
            
            if (x.second==n){
                
                ans = x.first;
                
            }
        }
        
        return ans;
    }
};
