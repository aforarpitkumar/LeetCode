//  https://leetcode.com/problems/determine-if-string-halves-are-alike/

class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int n = s.length();
        int a =0;
        int b =0;
        
        bool ans = false;
        
        for (int i=0; i<n/2; i++){
            
            if (s[i]=='a'){
                
                a++;
                
            }
            
            else if( s[i]=='e'){
                
                a++;
            }
            
            else if( s[i]=='i'){
                
                a++;
            }
            
            else if( s[i]=='o'){
                
                a++;
            }
            
            else if( s[i]=='u'){
                
                a++;
            }
            
            else if( s[i]=='A'){
                
                a++;
            }
            
            else if( s[i]=='E'){
                
                a++;
            }
            
            else if( s[i]=='I'){
                
                a++;
            }
            
            else if( s[i]=='O'){
                
                a++;
            }
            
            else if( s[i]=='U'){
                
                a++;
            }
             
        }
        
        for (int i=n/2; i<n; i++){
            
            if (s[i]=='a'){
                
                b++;
                
            }
            
            else if( s[i]=='e'){
                
                b++;
            }
            
            else if( s[i]=='i'){
                
                b++;
            }
            
            else if( s[i]=='o'){
                
                b++;
            }
            
            else if( s[i]=='u'){
                
                b++;
            }
            
            else if( s[i]=='A'){
                
                b++;
            }
            
            else if( s[i]=='E'){
                
                b++;
            }
            
            else if( s[i]=='I'){
                
                b++;
            }
            
            else if( s[i]=='O'){
                
                b++;
            }
            
            else if( s[i]=='U'){
                
                b++;
            }
             
        }
        
        if (a==b){
            
            ans = true;
        }
        
        return ans;
        
    }
};
