// link - https://leetcode.com/problems/maximum-number-of-balloons/

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        unordered_map <char,int> mp;
        
        int ans=0;
        
        for (int i=0; i<text.size(); i++){
            
            if (text[i]=='b'){
                
                mp[text[i]]++;
            }
            
            if (text[i]=='a'){
                
                mp[text[i]]++;
            }
            
            if (text[i]=='l'){
                
                mp[text[i]]++;
            }
            
            if (text[i]=='o'){
                
                mp[text[i]]++;
            }
            
            if (text[i]=='n'){
                
                mp[text[i]]++;
            }
        }
        
        int o=0;
        int l=0;
        int b=0;
        int n=0;
        int a=0;
        
        for (auto x: mp){
            
            if (x.first=='o'){
                
                o = x.second;
            }
            
            if (x.first=='l'){
                
                l= x.second;
            }
            
            if (x.first=='b'){
                
                b= x.second;
            }
            
            if (x.first=='n'){
                
                n= x.second;
            }
            
            if (x.first=='n'){
                
                a= x.second;
            }   
        }
        
        
        
        return min({b, a, l/2, o/2, n});
        
    }
};
