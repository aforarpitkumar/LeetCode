// Link - https://leetcode.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int ans = 0;
        
        
        for (int i=0; i<accounts.size(); i++){
            
            int temp=0;
            
            for (int j=0; j<accounts[i].size(); j++){
                
                temp = temp+ accounts[i][j];
            }
            
            ans = max(temp,ans);
        }
        
        return ans;
        
         
// Set Implimentation        
//         vector<int> nums= {1,1,1,2,2} ;
//     int n = nums.size();
//     unordered_set<int> refine;
        
//         for (int i=0; i<n; i++){
//             refine.insert(nums[i]);
//         }
        
//         for (auto x:refine){
//             cout<<x<<" ";
//         }
//     //cout<<refine.begin();
//     return 0;
        
        
        
    }
};
