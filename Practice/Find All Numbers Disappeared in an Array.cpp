//link - https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        //vector<int> newVec;
        vector<int> ans;
        
        unordered_map <int,int> mp;
        unordered_map <int,int> mp1;
        
        int n=nums.size();
        
        //int x=0;
        
        sort(nums.begin(), nums.end());
        
        for ( int i=0; i<n; i++){
            
            mp1[nums[i]]++;
            
        }
        
        //int sum = n*(n+1)/2;
        
        for ( int i=1; i<=n; i++){
            
            mp[i]++;
            
        }
        
        
        
        for (auto x: mp){
            int y = x.first;
            if (mp1.find(y) == mp1.end() ){
                
                ans.push_back(y);
            }
               
        }

        
        return ans;
        
    }
};
