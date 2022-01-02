// link - https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        bool ans = false;
        
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());
        
        if (s == t){
            
            ans = true;
        }
        
        else {
            
            ans = false;   
        }
        
        return ans;
        
    }
};
