// link - https://leetcode.com/problems/sort-array-by-parity-ii/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        vector<int> ans;
        
        vector<int> odd;
        
        vector<int> even;
        
        for (int i=0; i<nums.size(); i++){
            
            if (nums[i]%2 !=0){
                odd.push_back(nums[i]);
            }
            
            else{
                
                even.push_back(nums[i]);
                
            }
            
        }
        
        for (int i=0; i<even.size(); i++){
            
            
                ans.push_back(even[i]);
                ans.push_back(odd[i]); 
            
        }
        
        return ans;
        
        
    }
};
