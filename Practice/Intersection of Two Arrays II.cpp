// link - https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        
        unordered_map <int,int> mp;
        
        for(auto x: nums1){
 
           mp[x]++;
            
        }
        
        for (auto x: nums2){
            
            if (mp[x]){
                
                ans.push_back(x);
                mp[x]--;
            }
            
        }
        
        return ans;
        
    }
};
