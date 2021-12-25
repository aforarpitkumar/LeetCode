// link - https://leetcode.com/problems/missing-number/submissions/



class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int total_sum = n*(n+1)/2;
        
        for (int i=0; i<n; i++){
            
            total_sum = total_sum-nums[i];
        }
        
        return total_sum;
        
    }
};
