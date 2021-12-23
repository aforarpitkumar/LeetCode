// link - https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

class Solution {
public:
    int numberOfSteps(int num) {
        
        int ans = 0;
        
        while (num>0){
            
            if (num%2==0){
                num= num/2;
                ans++;
                
            }
         
            else{
                num = num -1;
                ans++;
            } 
        }
        
        return ans;
        
    }
};
