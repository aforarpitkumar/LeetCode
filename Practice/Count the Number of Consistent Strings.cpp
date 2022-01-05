// link - https://leetcode.com/problems/count-the-number-of-consistent-strings/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int ans=0;
        int n = words.size();
        
        ans=n;
        
        unordered_set <char> st;
        
        for ( auto x: allowed){
            
            st.insert(x);
        }
        
        
        for (int i=0; i<n ; i++){
            
            for (int j=0; j<words[i].size(); j++){
                
                if (st.find(words[i][j])==st.end()){
                    
                    ans--;
                    break;
                }
            }
            
        }
        
        return ans;
        
    }
};
