// link - https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        
        int n = nums.size();
        
        int a =0;
        int b =0;
        
        unordered_map <int,int> mad;
        
        for(int i=0; i<n; i++){
            mad[nums[i]] = i;
        }
        
        
        for (int i=0; i<n; i++){
            
            
            if(mad.find(target-nums[i]) != mad.end() && i!=mad[target-nums[i]]){
                
                ans.push_back(i);
                ans.push_back(mad[target-nums[i]]);
                
                return ans;
                
            }
        }       
//         for (int i=0; i<n; i++){
            
//             int temp =0;
            
//             for (int j=i+1; j<n; j++){
                
//                 temp = nums[i]+nums[j];
                
//                 if (temp==target){
                    
//                     a=i;
//                     b=j;
                    
//                 }
            
            
//             }
            
//         }
        
        //ans.push_back(a);
        //ans.push_back(b);
        
        return ans;
        
    }
};
