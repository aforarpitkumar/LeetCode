// link - https://leetcode.com/problems/intersection-of-two-arrays/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        
        unordered_map <int,int> mp;
        
        for(auto x: nums1){
            
            for(auto y: nums2){
                
                if (x==y){
                    mp[x]++;
                }
            }
            
        }
        
        for (auto x: mp){
            
            ans.push_back(x.first);
            
        }
        
        return ans;
    }
        
        
    
};
