// link - https://leetcode.com/problems/to-lower-case/

class Solution {
public:
    string toLowerCase(string s) {
        
        
        char ch;
        string ans = "";
        
        for (int i = 0; i < s.size(); i++) {

            ch = tolower(s[i]);

            ans= ans+ch;
        
        }
        
        return ans;
        
    }
};
