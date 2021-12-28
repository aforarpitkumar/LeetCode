// link - https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
        bool ans = false;
        int sum =0;
        
        if (s.size()==1){
            
             ans = true ;
            
        }
           
        else{
            
            unordered_map <char, int> mad;
        
            for (int i=0; i<s.size(); i++){
            
            mad[s[i]]++;
            }
        
            int firstElement = mad[s[0]];
            
            for (auto it: mad){
            
                if (firstElement != it.second){
                    ans = false;
                
                    return ans;
                }
            
                else{
                    ans = true;
                }
            
            }
            
        }
        
        return ans;
        
    }
};
