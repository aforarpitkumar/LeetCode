// link - https://leetcode.com/problems/sum-of-unique-elements/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int ans = 0;
        unordered_map <int, int> mad;
        
        for (int i=0; i<nums.size(); i++){
            
            mad[nums[i]]++;
            
        }
        
        for (auto i: mad){
            if (i.second>1){
                ans = ans +0;
            }
            
            else {
                ans = ans + i.first;
            }
        }
        
        return ans;
        
    }
};
