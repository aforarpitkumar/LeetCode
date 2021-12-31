// link - https://leetcode.com/problems/smallest-index-with-equal-value/

class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        
        vector<int> ans ;
        int temp =0;
        int ans1 =0;
        
        for (int i=0; i<nums.size(); i++){
         
            if (nums[i]%10==nums[i]){
                ans.push_back(i);
            }
            
        }
        
        //sort(ans.begin(),ans.end());
        
        return ans[0];
        
    }
};
