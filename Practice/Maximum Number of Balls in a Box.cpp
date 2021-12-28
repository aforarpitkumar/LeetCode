// link - https://leetcode.com/problems/maximum-number-of-balls-in-a-box/

class Solution {
public:
    
    int sumofdigit(int a){
        
        int sum =0;
        while (a>0){
        
            sum = sum + a%10;
            a = a/10;    
        }

        return sum;
    }
    
    int countBalls(int lowLimit, int highLimit) {
        int ans =0;
        
        unordered_map <int,int> mad;
    
        for (int i = lowLimit; i<=highLimit; i++){
            
            int temp = sumofdigit(i);
            mad[temp]++;
            
        }
        
        for (auto x: mad){
            
             if (x.second>ans){
                 ans = x.second;
             }
            
         }
        
        return ans;
    }
};
