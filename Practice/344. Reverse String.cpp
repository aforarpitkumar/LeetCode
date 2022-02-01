// https://leetcode.com/problems/reverse-string/submissions/

class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int st=0;
        int e=s.size()-1;
        
        while(st<e){
            swap(s[st],s[e]);
            
            st++;
            e--;
            
        }
        
        
//         int n = s.size()-1;
        
//         for (int i=0; i<=s.size()/2; i++){
            
//             char temp = s[i];
            
//             s[i] = s[n] ;
//             s[n] = temp;
            
//             n--;
            
//         }
        
        
        
    }
};
