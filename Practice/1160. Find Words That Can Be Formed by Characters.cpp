// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/submissions/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        unordered_map <char,int> mp;
        
        for ( auto x: chars){
            
            mp[x]++;
        }
        
        int ans =0;
        
        for (auto x: words){
            
            bool temp = true;
            
            unordered_map <char,int> cmp;
            
            for ( auto y: x){
            
                cmp[y]++;
            }
            
            for ( auto z: x){
                
                if (cmp[z]>mp[z]){
                    
                    temp = false;
                }    
            }

            
            if ( temp == true){
                ans = ans + x.size();
            }
            
        }
        
        return ans;
        
    }
};
