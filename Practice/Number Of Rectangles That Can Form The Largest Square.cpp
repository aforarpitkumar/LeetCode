// link - https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/submissions/
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
        int ans =0;
        
        vector<int> arr;
        
        //unordered_map<int,int> mp;
        
        for ( int i =0; i<rectangles.size(); i++){
            
            arr.push_back(min(rectangles[i][0],rectangles[i][1]));
            
        }
        
        int maxN = *max_element(arr.begin(), arr.end());
        
        //int ans =0;
        
        for (auto x: arr)
        {
            if( x==maxN){
                ans++;
            }
        } 
        
        //ans = ans +1;
        
        return ans;
    }
};
