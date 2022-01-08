// Link - https://leetcode.com/problems/find-the-difference/submissions/

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char ans = ' ';
        
        map <char,int> mp1 ;
        
            for (auto x: s){
            
                mp1[x]++;
            
            }
        
            for (auto y: t){
                
                if (mp1.find(y)!=mp1.end()){
                    
                    mp1[y]--;
                }
                
                else mp1[y]++;
                
            }
        
        for (auto y:mp1){
                
            if (y.second<0){
                    
                return y.first;
            }
                
            else if (y.second>0){
                    
                return y.first;
            }
        }
        
        
        return ans;
        
    
        }
};
