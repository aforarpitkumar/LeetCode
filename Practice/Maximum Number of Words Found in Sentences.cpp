// link - https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        unordered_map <char,int> ans;
        
        int max =0;
        
        for (auto x: sentences){
            
            int temp =0;
            
            for ( auto y: x){
                
                if (y == ' '){
                    
                    temp++;
                    
                }
                
                
            }
            
            if (max<temp){
                
                max = temp;
            }
            
        }
        
        max++;
        
        return max;
        
    }
};
