// https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        vector<string> ans;
        string temp;
        temp =temp+ s[0];
        
        for (int i=1; i <s.size(); i++){
            
            if ( i%k==0){
                
                ans.push_back(temp);
                temp ="";
            }
            
            temp= temp + s[i];
            
            
        }
        
        int n = temp.size();
        
        while (n<k){
            
            temp = temp +fill;
            n++;
        }
        
        
        
        ans.push_back(temp);
        temp ="";
        
        return ans;
        
    }
};
