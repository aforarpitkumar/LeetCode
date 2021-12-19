//https://leetcode.com/problems/concatenation-of-array/submissions/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        //Method 1;
        // Time complexity O(n) 
        // Space O(1)
        
        int n = nums.size();
        
        for (int i=0; i<n; i++ ){
            nums.push_back(nums[i]);
        }
        
        return nums;
        
        //Method 2;
        // Time complexity O(n) 
        // Space O(n)
        
//         vector<int> ans;
        
//         for (int i=0; i<n; i++ ){
//             ans.push_back(nums[i]);
//         }
//         for (int i=0; i<n; i++ ){
//             ans.push_back(nums[i]);
//         }
//         return ans;
        
    }
    
};
