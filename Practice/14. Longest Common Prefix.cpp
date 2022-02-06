// https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(begin(strs), end(strs));
        
        string a = strs[0];
        string b = strs[strs.size()-1];
        
        string ans="";
        
        for (int i=0; i<a.size(); i++){
            
            if (a[i]==b[i]){
                
                ans= ans + a[i];
            }
            
            else{
                break;
            }
        }
        
        return ans;
    }
};
