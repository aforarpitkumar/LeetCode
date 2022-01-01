// link - https://leetcode.com/problems/unique-number-of-occurrences/submissions/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map <int, int> mp;
        unordered_map <int, int> mp2;
        
        bool ans = true;
        
        for( auto x: arr){
            
            mp[x]++;
        
        }
        
        int temp =0;
        
        for( auto x: mp){
           
            mp2[x.second]++;
        }
        
        if (mp.size()==mp2.size()){
            ans = true;
        }
        
        else{
            
            ans = false;
            
        }
        
        return ans;
        
        
    }
};
