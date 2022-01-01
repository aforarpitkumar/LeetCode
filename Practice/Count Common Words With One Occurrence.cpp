// link - https://leetcode.com/problems/count-common-words-with-one-occurrence/

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        int ans;
        
        unordered_map <string,int> mp1;
        
        unordered_map <string,int> mp2;
        
        for (int i=0; i<words1.size(); i++){
            
            mp1[words1[i]]++;
            
        }
        
        for (int i=0; i<words2.size(); i++){
            
            mp2[words2[i]]++;
            
        }
        
        for (auto x : mp1){
            
            for (auto y: mp2){
                
                if (x.first == y.first){
                    
                    if (x.second ==1 && y.second==1 ){
                        ans++;
                    }
                }
            }
            
        }
      
        return ans;
        
        
        
    }
};
