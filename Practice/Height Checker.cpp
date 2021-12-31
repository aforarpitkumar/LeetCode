// link - https://leetcode.com/problems/height-checker/
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> copy1;
        for ( int i=0; i<heights.size(); i++){
            
            copy1.push_back(heights[i]);
        }
        
        sort(heights.begin(),heights.end());
        
        int ans =0;
        
        for ( int i=0; i<heights.size(); i++){
            if (heights[i]!=copy1[i]){
                ans++;
            }
        }
        
        return ans;
        
    }
};
