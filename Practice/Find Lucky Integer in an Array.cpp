// link - https://leetcode.com/problems/find-lucky-integer-in-an-array/

class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        int ans = -1;
        //int max =0;
        
        unordered_map <int, int> mp;
        
        for ( auto x: arr){
            
            mp[x]++;
            
        }
        
        for (auto x: mp){
            
            if (x.first==x.second){
                
                if (ans < x.second){
                    ans = x.second;
                }
                
            }
        }
        
        return ans;
        
    }
};
