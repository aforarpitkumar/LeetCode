// link - https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map <int,int> mp;
        
        for (auto x: nums){
            
            mp[x]++;
        }
        
        int temp=0 ;
        int ans;
        
        for (auto x: mp){
            
            if (x.second > temp){
                temp = x.second;
                ans = x.first;
            }
        }
        
        return ans;
        
    }
};
