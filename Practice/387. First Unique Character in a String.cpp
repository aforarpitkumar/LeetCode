// https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map <char,int> mp;
        int ans = -1;
        
        char ch = ' ' ;
        
        for (auto cha: s){
            
            mp[cha]++;
        }
        
        for (auto cha: mp){
            
            if (cha.second==1){
                
                ch= cha.first;
                
            }
        }
        
        for (int i=0; i<s.length(); i++){
            
            if (s[i]==ch){
                
                ans = i;
                
                return ans;
            }
        }
        
        return ans;
        
    }
};
