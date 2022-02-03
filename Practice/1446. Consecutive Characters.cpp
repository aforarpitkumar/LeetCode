//https://leetcode.com/problems/consecutive-characters/

class Solution {
public:
    int maxPower(string s) {
        
        int m = INT_MIN;
        char temp =s[0];
            
        int t=1;
        
        if (s.size()==1){
            
            return 1;
        }
        
        for ( int i=1; i<s.size(); i++){
            
            char now = s[i];
            
            if (now == temp){
                
                t++;
                
            }
            else{
                
                //m = max(m,t);
                t=1;
                
            }
            
            m = max(m,t);
            
            temp = now;
        }
        
        return m;
        
    }
};
