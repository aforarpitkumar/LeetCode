// Link - https://leetcode.com/problems/build-array-from-permutation/submissions/


class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        //Method 1
        // Time: O(n)
        // Space: O(1)
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]+(1000*(nums[nums[i]]%1000));
        }
        for(int i=0;i<n;i++){
            nums[i]/=1000;
        }
        return nums;
      
      //Method 2
      
      // Time: O(n)
      // Space: O(n)
        
//         int n = nums.size();
//         vector<int> ans;
        
//         for (int i=0; i<n; i++){
//             ans.push_back(nums[nums[i]]);
//         }
        
//         return ans;
        
    }
};
