// link- https://leetcode.com/problems/check-if-the-sentence-is-pangram/submissions/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        bool ans = false;
        
        unordered_map <char,char> mad;
        
        for (int i=0; i<sentence.length(); i++){
            
            mad[sentence[i]] = mad[sentence[i]]+1;
            
            
        }
        
        int sizeo = mad.size();
        
        if (sizeo==26){
            ans = true;
        }
        
        return ans;
    }
};
