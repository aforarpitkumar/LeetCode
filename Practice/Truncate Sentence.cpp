// link - https://leetcode.com/problems/truncate-sentence/

class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string ans="";
        
        for (int i=0; i<s.size(); i++){
            
            char dj = s[i];
            
            if (dj == ' '){
                k--;
            }
            
            if (k == 0){
                break;
            }
            
            ans = ans+s[i];
        }
        
        return ans;
    }
};
