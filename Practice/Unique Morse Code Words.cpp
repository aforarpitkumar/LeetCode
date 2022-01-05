// link - https://leetcode.com/problems/unique-morse-code-words/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        
        vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
        unordered_set<string> ans;
    
    for(auto x : words) {
        string code = "";
        for(auto ch : x){
            
            code += morse_code[ch - 'a'];
            
        }
            
        ans.insert(code);
    }
    
    return ans.size();
    }
};
