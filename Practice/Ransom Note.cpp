// Link - https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map <char,int> mp;
        
        bool ans = true;
        
        for (auto x: ransomNote){
            
            mp[x]++;
        }
        
        for (auto x: magazine){
            if ( mp.find(x) != mp.end()){
                mp[x]--;
            }
            
        }
        
        for ( auto x: mp){
            
            if (x.second>0){
                
                ans = false;
                
                return ans;
            }
        }
        
        return ans;
        
    }
};
