// link - https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> ans;
        int temp =1;
        
        if (n%2 !=0){
            
            int temp1 =0;
            
            int temp2 =0;
            for (int i=0; i<n/2; i++){
                
                
                ans.push_back(n-temp1);
                temp1++;
                
            }
            
            for (int i=0; i<n/2; i++){
                
                
                ans.push_back((n-temp2)*(-1));
                temp2++;
                
            }
            
            ans.push_back(0);
            
        }
        
        else{
            
            int temp3 =0;
            
            int temp4 =0;
            
            for (int i=0; i<n/2; i++){
                
                
                ans.push_back(n-temp3);
                temp3++;
                
            }
            
            for (int i=0; i<n/2; i++){
                
                
                ans.push_back((n-temp4)*(-1));
                temp4++;
                
            }
            
        }
        
        return ans;
        
    }
};
