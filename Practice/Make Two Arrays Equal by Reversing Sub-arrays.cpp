// link - https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/submissions/

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        bool ans = true;
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        sort(target.begin(),target.end());
        
        if (arr.size()==target.size()){
            for (int i=0; i<n; i++){
                if (arr[i] != target[i]){
                    ans = false;
                    
                    return ans;
                }
            }
        }
        else {
            ans = false;
        }
        
        return ans;
        
    }
};
