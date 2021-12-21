// Link - https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<int> AddedCandies;
        vector<bool> ans;
        int Maxo = *max_element(candies.begin(), candies.end());
        
        for(int i =0; i<candies.size(); i++){
            AddedCandies.push_back(candies[i]+extraCandies);
        }
        
        for( int i=0; i<candies.size(); i++){
            
            if ( AddedCandies[i]>= Maxo ){
                ans.push_back(true);
            }
            
            else{
                ans.push_back(false);
            }
        }
        
        return ans;
        
        
    }
};
