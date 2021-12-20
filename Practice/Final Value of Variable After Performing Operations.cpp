// Link - https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        //Method 1;
        // Time complexity O(n) 
        // Space O(1)
        
        int ans=0;
        int n = operations.size();
        for (int i=0; i<n; i++){
            
            if (operations[i]=="--X" || operations[i]=="X--"){
                ans = ans-1;
            }
            
            else if (operations[i]=="X++" || operations[i]=="++X"){
                ans = ans+1;
            }
            
        }
        
        return ans;
        
    }
};
