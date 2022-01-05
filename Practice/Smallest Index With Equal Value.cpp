// link - https://leetcode.com/problems/smallest-index-with-equal-value/

class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        
        int ans =0;
        
        for (int i=0; i<nums.size(); i++){
            
            if (nums[i]==i%10){
                
                ans = i;
                
                break;
            }
            
            else{
                ans = -1;
            }
            
        }
        
        return ans;
        
    }
};
