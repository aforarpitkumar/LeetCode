// link - https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        vector <int> arro;
        
        arro.push_back(gain[0]);
        
        for (int i=1; i<gain.size(); i++){
            
            //arr.push_back(gain[i]+temp);
            arro.push_back(arro[i - 1] + gain[i]);
        }
        
        arro.push_back(0);
        
        int x = *max_element(arro.begin(),arro.end());
        
        
        
        return x;
        
    }
};

