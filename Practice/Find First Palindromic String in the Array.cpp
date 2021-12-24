// link - https://leetcode.com/problems/find-first-palindromic-string-in-the-array/

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        string s="";
        vector<string> dublicate;
        //vector<string> AnsString;
        
        for (int i=0; i<words.size(); i++){

            dublicate.push_back(words[i]);
        
        }
        
        for (int i=0; i<words.size(); i++){
            
            reverse(dublicate[i].begin(), dublicate[i].end());
            //AnsString.push_back(dublicate[i]);
            
        }
        
        for (int i=0; i<words.size(); i++){
            
            if (words[i]== dublicate[i]){
                
                s= words[i];
                break;
            }
            
        }
        
        return s;
        
        
    
    }
};
