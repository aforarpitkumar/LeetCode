// link - https://leetcode.com/problems/sign-of-the-product-of-an-array/submissions/

class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int ans =0;
        int positive =0;
        int negative =0;
        
        int product =1;
        for (auto x: nums){
            
            if (x==0){
                ans =0;
                return ans;
            }
            
            else if (x>0){
                
                positive++;
                
            }
            
            else if (x<0){
                
                negative++;
                
            }
            
            
            //product = product * x;
            
        }
        
        if ( negative%2==0){
            
            ans= ans+1;
            
        }
        
        else {
            ans = ans-1;
        }
        
        
        return ans;
        
    }
};
