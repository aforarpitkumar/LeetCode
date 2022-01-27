// https://leetcode.com/problems/reverse-words-in-a-string-iii/
#include <bits/stdc++.h>
class Solution {
public:
    string reverseWords(string s) {
        
		/* Here I created a string Vector where 
		I stored each words which are present inside "s" */ 
		
        vector<string> sd;
        string a ="";
        string ans ="";
        
        for (int i=0; i<s.size(); i++){
            if (s[i]!=' '){
                a= a+s[i];
            } 
            
            else{
                sd.push_back(a);
                a="";
            }
            
            if (i==s.size()-1) {
                sd.push_back(a);
            } 
        }
        
		/*After that i reverse all the strings (except last word )which 
		are present inside the sd vector.
		Now why I didn't add the last word because if I add the last word 
		then one extra space will also be there in ans which finally result into 
		wrong answer
		*/
		
        for (int i=0; i<sd.size()-1; i++){
            //reverseStr(x);
            string x = sd[i];
            reverse(x.begin(), x.end());
            ans = ans + x +" ";
        }
        
		/* Here I reverse the last words( excluding extra space)
		and then add in the "ans" string */
		
        string c = sd[sd.size()-1];
        string g="";
        
        for (int i=c.size()-1; i>=0; i--){
            g = g+c[i];
        }
        
        ans = ans +g;
        return ans;
    }
};
